// src/unsorted/unit_01410B60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01410B60..01436E80, 637 functions

#include "mgrr.h"

// 01410B60  FUN_01410b60  size=11  [run]
int FUN_01410b60(int param_1)

{
  return param_1 + 0xc;
}

// 01410B80  FUN_01410b80  size=94  [run]
void __thiscall FUN_01410b80(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = *(undefined2 *)(*param_1 + param_2 * 2);
  if (param_2 < param_3) {
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
    if (param_2 <= param_3) {
      do {
        iVar1 = param_2 * 2;
        iVar2 = param_2 * 2;
        param_2 = param_2 + 1;
        *(undefined2 *)(*param_1 + iVar2 + -2) = *(undefined2 *)(*param_1 + iVar1);
      } while (param_2 <= param_3);
      goto LAB_01410bd7;
    }
  }
  else {
    if (param_2 <= param_3) {
LAB_01410bd7:
      *(undefined2 *)(*param_1 + param_3 * 2) = uVar3;
      return;
    }
    do {
      iVar2 = param_2 * 2;
      iVar1 = param_2 * 2;
      param_2 = param_2 - 1;
      *(undefined2 *)(*param_1 + iVar1) = *(undefined2 *)(*param_1 + -2 + iVar2);
    } while (param_3 < param_2);
  }
  *(undefined2 *)(*param_1 + param_3 * 2) = uVar3;
  return;
}

// 01410BF0  FUN_01410bf0  size=17  [run]
int __thiscall FUN_01410bf0(int param_1,ushort param_2)

{
  return (uint)param_2 * 0x20 + *(int *)(param_1 + 8);
}

// 01410C10  FUN_01410c10  size=81  [run]
undefined4 FUN_01410c10(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (param_2 < param_1[5]) {
    return 0xffffffff;
  }
  if (param_1[5] < param_2) {
    return 1;
  }
  uVar1 = param_1[1];
  if (uVar1 <= param_4) {
    if ((param_4 != uVar1) || (*param_1 < param_3)) {
      return 0xffffffff;
    }
    if ((uVar1 < param_4) || ((uVar1 <= param_4 && (*param_1 <= param_3)))) {
      return 0;
    }
  }
  return 1;
}

// 01410C70  FUN_01410c70  size=105  [run]
uint FUN_01410c70(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2[5] < param_1[5]) {
    return 0xffffffff;
  }
  if (param_1[5] < param_2[5]) {
    return 1;
  }
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  if (uVar1 < uVar2) {
    return 1;
  }
  if ((uVar1 == uVar2) && (*param_2 <= *param_1)) {
    if (uVar1 <= uVar2) {
      if (uVar1 < uVar2) {
        return 1;
      }
      if (*param_2 < *param_1) {
        return 1;
      }
    }
    if (param_1[2] <= param_2[2]) {
      return (uint)(param_1[2] < param_2[2]);
    }
  }
  return 0xffffffff;
}

// 01410CE0  FUN_01410ce0  size=103  [run]
void FUN_01410ce0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(DAT_01b29448,0x20);
  *param_2 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xffffffff;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined4 *)(*param_2 + 0x10) = param_1[4];
    puVar1 = (undefined4 *)*param_2;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  return;
}

// 01410D50  FUN_01410d50  size=30  [run]
void FUN_01410d50(void *param_1,void *param_2)

{
  if (param_2 != param_1) {
    AK::MemoryMgr::Free(DAT_01b29448,param_2);
  }
  return;
}

// 01410DA0  FUN_01410da0  size=67  [run]
undefined4 __thiscall FUN_01410da0(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    pvVar1 = AK::MemoryMgr::Malloc(DAT_01b29448,param_2 * 2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    param_1[2] = param_2;
  }
  return 1;
}

// 01410E00  FUN_01410e00  size=15  [run]
int __thiscall FUN_01410e00(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 01410E50  FUN_01410e50  size=16  [run]
void FUN_01410e50(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 01410EA0  FUN_01410ea0  size=19  [run]
undefined4 __thiscall FUN_01410ea0(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 != *param_2);
}

// 01410EC0  FUN_01410ec0  size=14  [run]
void __thiscall FUN_01410ec0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}

// 01410ED0  FUN_01410ed0  size=15  [run]
void __thiscall FUN_01410ed0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  return;
}

// 01410EE0  FUN_01410ee0  size=123  [run]
undefined4 __thiscall FUN_01410ee0(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1[2];
  pvVar2 = AK::MemoryMgr::Malloc(DAT_01b29448,(iVar1 + param_2) * 2);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  uVar4 = param_1[1] - *param_1 >> 1;
  if (*param_1 != 0) {
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        *(undefined2 *)((int)pvVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    AK::MemoryMgr::Free(DAT_01b29448,(void *)*param_1);
  }
  *param_1 = (int)pvVar2;
  param_1[1] = (int)((int)pvVar2 + uVar4 * 2);
  param_1[2] = iVar1 + param_2;
  return 1;
}

// 01410F60  FUN_01410f60  size=22  [run]
void __thiscall FUN_01410f60(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = 0;
  return;
}

// 01410F80  FUN_01410f80  size=41  [run]
void __thiscall FUN_01410f80(int *param_1,int param_2,int param_3)

{
  if (param_2 == param_1[1]) {
    param_1[1] = *(int *)(param_2 + 0xc);
  }
  else {
    *(int *)(param_3 + 0xc) = *(int *)(param_2 + 0xc);
  }
  *param_1 = *param_1 + -1;
  if (param_2 == param_1[2]) {
    param_1[2] = param_3;
  }
  return;
}

// 01410FE0  FUN_01410fe0  size=19  [run]
undefined4 __thiscall FUN_01410fe0(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 != *param_2);
}

// 01411020  FUN_01411020  size=7  [run]
void __fastcall FUN_01411020(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180efc0;
  return;
}

// 01411030  FUN_01411030  size=326  [run]
void __thiscall FUN_01411030(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint local_3c [8];
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = (int *)(param_1 + 0x18);
  local_10 = *(int *)(param_1 + 8);
  iVar5 = 0;
  local_c = *local_1c;
  local_18 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 1) + -1;
  local_8 = local_18;
  do {
    iVar2 = (local_8 - iVar5) / 2 + iVar5;
    puVar4 = (uint *)((uint)*(ushort *)(local_c + iVar2 * 2) * 0x20 + local_10);
    if (param_2[5] < puVar4[5]) {
LAB_01411162:
      local_8 = iVar2 + -1;
    }
    else {
      if (param_2[5] <= puVar4[5]) {
        uVar1 = param_2[1];
        if (puVar4[1] < uVar1) goto LAB_01411162;
        if (puVar4[1] <= uVar1) {
          if (*puVar4 < *param_2) goto LAB_01411162;
          if ((puVar4[1] <= uVar1) && ((uVar1 != puVar4[1] || (*puVar4 <= *param_2)))) {
            if (param_2[2] < puVar4[2]) goto LAB_01411162;
            if (param_2[2] <= puVar4[2]) break;
          }
        }
      }
      iVar5 = iVar2 + 1;
    }
  } while (iVar5 <= local_8);
  puVar4 = param_2;
  puVar6 = local_3c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar5 = 0;
  iVar7 = local_18;
LAB_014110e8:
  iVar3 = (iVar7 - iVar5) / 2 + iVar5;
  puVar4 = (uint *)((uint)*(ushort *)(local_c + iVar3 * 2) * 0x20 + local_10);
  if (puVar4[5] == 0xffffffff) {
    uVar1 = puVar4[1];
    if (uVar1 < local_3c[1]) {
LAB_0141116d:
      iVar7 = iVar3 + -1;
      goto LAB_01411138;
    }
    if (uVar1 <= local_3c[1]) {
      if (*puVar4 < local_3c[0]) goto LAB_0141116d;
      if ((uVar1 <= local_3c[1]) && ((local_3c[1] != uVar1 || (*puVar4 <= local_3c[0])))) {
        if (local_3c[2] < puVar4[2]) goto LAB_0141116d;
        if (puVar4[2] < local_3c[2]) goto LAB_01411135;
        goto LAB_01411142;
      }
    }
  }
LAB_01411135:
  iVar5 = iVar3 + 1;
LAB_01411138:
  if (iVar7 < iVar5) {
    iVar3 = iVar5;
    if (iVar5 < iVar7) {
      iVar3 = iVar7;
    }
LAB_01411142:
    local_14 = iVar2;
    FUN_01410b80(iVar2,iVar3);
    param_2[5] = 0xffffffff;
    return;
  }
  goto LAB_014110e8;
}

// 01411180  FUN_01411180  size=379  [run]
void __thiscall
FUN_01411180(int param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint local_44 [8];
  uint local_24;
  int *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *param_2 = param_5;
    param_2[1] = param_6;
    param_2[4] = param_7;
    param_2[3] = param_3;
    return;
  }
  local_1c = (int *)(param_1 + 0x18);
  local_c = *local_1c;
  iVar5 = 0;
  iVar2 = (*(int *)(param_1 + 0x1c) - local_c >> 1) + -1;
  local_10 = *(int *)(param_1 + 8);
  local_14 = param_2[5];
  local_8 = iVar2;
  do {
    iVar3 = (local_8 - iVar5) / 2 + iVar5;
    puVar4 = (uint *)((uint)*(ushort *)(local_c + iVar3 * 2) * 0x20 + local_10);
    if (local_14 < puVar4[5]) {
LAB_014112bd:
      local_8 = iVar3 + -1;
    }
    else {
      if (local_14 == puVar4[5]) {
        local_24 = *param_2;
        uVar1 = param_2[1];
        if (puVar4[1] < uVar1) goto LAB_014112bd;
        if (puVar4[1] <= uVar1) {
          if (*puVar4 < local_24) goto LAB_014112bd;
          if ((puVar4[1] <= uVar1) && ((uVar1 != puVar4[1] || (*puVar4 <= local_24)))) {
            if (param_2[2] < puVar4[2]) goto LAB_014112bd;
            if (param_2[2] <= puVar4[2]) break;
          }
        }
      }
      iVar5 = iVar3 + 1;
    }
  } while (iVar5 <= local_8);
  puVar4 = param_2;
  puVar6 = local_44;
  local_18 = iVar2;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar5 = 0;
  local_8 = iVar2;
  do {
    iVar2 = (local_8 - iVar5) / 2 + iVar5;
    puVar4 = (uint *)((uint)*(ushort *)(local_c + iVar2 * 2) * 0x20 + local_10);
    if (param_4 < puVar4[5]) {
LAB_014112c5:
      local_8 = iVar2 + -1;
      iVar2 = iVar5;
    }
    else {
      if (param_4 == puVar4[5]) {
        if ((puVar4[1] < param_6) || ((puVar4[1] <= param_6 && (*puVar4 < param_5))))
        goto LAB_014112c5;
        if ((puVar4[1] <= param_6) && ((param_6 != puVar4[1] || (*puVar4 <= param_5)))) {
          if (local_44[2] < puVar4[2]) goto LAB_014112c5;
          if (local_44[2] <= puVar4[2]) break;
        }
      }
      iVar2 = iVar2 + 1;
    }
    iVar5 = iVar2;
  } while (iVar2 <= local_8);
  FUN_01410b80(iVar3,iVar2);
  param_2[5] = param_4;
  *param_2 = param_5;
  param_2[1] = param_6;
  param_2[4] = param_7;
  param_2[3] = param_3;
  return;
}

// 01411310  FUN_01411310  size=47  [run]
void __thiscall FUN_01411310(int *param_1,int param_2)

{
  if (param_1[1] == 0) {
    param_1[2] = param_2;
    param_1[1] = param_2;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *param_1 = *param_1 + 1;
    return;
  }
  *(int *)(param_2 + 0xc) = param_1[1];
  *param_1 = *param_1 + 1;
  param_1[1] = param_2;
  return;
}

// 01411340  FUN_01411340  size=44  [run]
void __thiscall FUN_01411340(int *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (param_1[2] == 0) {
    *param_1 = *param_1 + 1;
    param_1[1] = param_2;
    param_1[2] = param_2;
    return;
  }
  *(int *)(param_1[2] + 0xc) = param_2;
  *param_1 = *param_1 + 1;
  param_1[2] = param_2;
  return;
}

// 014113E0  FUN_014113e0  size=53  [run]
void __thiscall FUN_014113e0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = *(int *)(iVar1 + 0xc);
  *param_2 = iVar3;
  param_2[1] = iVar2;
  if (iVar1 == param_1[1]) {
    param_1[1] = iVar3;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar3;
  }
  *param_1 = *param_1 + -1;
  if (iVar1 == param_1[2]) {
    param_1[2] = iVar2;
  }
  return;
}

// 01411420  FUN_01411420  size=54  [run]
void __thiscall FUN_01411420(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_2 = iVar1;
  param_2[1] = 0;
  while ((iVar1 != 0 && (iVar1 = *param_2, iVar1 != param_3))) {
    param_2[1] = iVar1;
    iVar1 = *(int *)(iVar1 + 0xc);
    *param_2 = iVar1;
  }
  return;
}

// 01411460  FUN_01411460  size=48  [run]
void __fastcall FUN_01411460(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180efc0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}

// 01411490  FUN_01411490  size=34  [run]
undefined4 * __thiscall FUN_01411490(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0180efc0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 014114C0  FUN_014114c0  size=129  [run]
short __thiscall FUN_014114c0(int param_1,int param_2)

{
  short sVar1;
  
  *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + -1;
  sVar1 = *(short *)(param_2 + 0x18);
  if (sVar1 == 0) {
    if (*(int *)(param_2 + 0x14) != -1) {
      *(undefined4 *)(param_2 + 0xc) = 0;
      if (*(int *)(param_1 + 0x14) == 0) {
        *(int *)(param_1 + 0x10) = param_2;
        *(int *)(param_1 + 0x14) = param_2;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        return 0;
      }
      *(int *)(*(int *)(param_1 + 0x14) + 0xc) = param_2;
      *(int *)(param_1 + 0x14) = param_2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      *(int *)(param_1 + 0x14) = param_2;
      *(int *)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return 0;
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return sVar1;
}

// 01411550  FUN_01411550  size=78  [run]
void __thiscall FUN_01411550(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) + 1;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        *(undefined4 *)(*param_2 + 0xc) = 0;
        return;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    *(undefined4 *)(*param_2 + 0xc) = 0;
  }
  return;
}

// 014115A0  FUN_014115a0  size=49  [run]
void __fastcall FUN_014115a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    AK::MemoryMgr::Free(DAT_01b29448,pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// 014115E0  FUN_014115e0  size=44  [run]
undefined2 * __thiscall FUN_014115e0(int *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)param_1[1];
  if ((uint)((int)puVar1 - *param_1 >> 1) < (uint)param_1[2]) {
    param_1[1] = (int)(puVar1 + 1);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = param_2;
    }
    return puVar1;
  }
  return (undefined2 *)0x0;
}

// 01411620  FUN_01411620  size=83  [run]
undefined4 __thiscall FUN_01411620(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = 0;
  while( true ) {
    iVar1 = iVar3;
    if (iVar1 == 0) {
      return 2;
    }
    if (iVar1 == param_2) break;
    iVar3 = *(int *)(iVar1 + 0xc);
    iVar2 = iVar1;
  }
  if (iVar1 == 0) {
    return 2;
  }
  if (iVar1 == param_1[1]) {
    param_1[1] = *(int *)(iVar1 + 0xc);
  }
  else {
    *(int *)(iVar2 + 0xc) = *(int *)(iVar1 + 0xc);
  }
  if (iVar1 == param_1[2]) {
    param_1[2] = iVar2;
  }
  *param_1 = *param_1 + -1;
  return 1;
}

// 01411680  FUN_01411680  size=436  [run]
undefined4 __thiscall FUN_01411680(int param_1,undefined4 *param_2)

{
  ushort *puVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ushort uVar8;
  ulong uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_c;
  
  uVar3 = (uint)param_2[1] / (uint)param_2[4];
  uVar9 = param_2[4] * uVar3;
  if (uVar9 != 0) {
    lVar4 = AK::MemoryMgr::CreatePool((void *)*param_2,uVar9,uVar9,param_2[3] | 8,param_2[2]);
    *(long *)(param_1 + 0x24) = lVar4;
  }
  if (*(int *)(param_1 + 0x24) == -1) {
    uVar7 = 2;
    if (param_2[1] == 0) {
      uVar7 = 1;
    }
    return uVar7;
  }
  AK::MemoryMgr::SetMonitoring(*(int *)(param_1 + 0x24),false);
  pvVar5 = AK::MemoryMgr::GetBlock(*(long *)(param_1 + 0x24));
  *(void **)(param_1 + 4) = pvVar5;
  puVar6 = AK::MemoryMgr::Malloc(DAT_01b29448,uVar3 * 0x20);
  *(undefined4 **)(param_1 + 8) = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    return 2;
  }
  iVar10 = *(int *)(param_1 + 4);
  puVar11 = puVar6 + uVar3 * 8;
  do {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = iVar10;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0xffffffff;
      *(undefined2 *)(puVar6 + 6) = 0;
    }
    iVar10 = iVar10 + param_2[4];
    puVar6[3] = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 **)(param_1 + 0x10) = puVar6;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0x14) + 0xc) = puVar6;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(undefined4 **)(param_1 + 0x14) = puVar6;
    puVar6 = puVar6 + 8;
  } while (puVar6 < puVar11);
  if (uVar3 != 0) {
    pvVar5 = AK::MemoryMgr::Malloc(DAT_01b29448,uVar3 * 2);
    *(void **)(param_1 + 0x18) = pvVar5;
    *(void **)(param_1 + 0x1c) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
  }
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      puVar1 = *(ushort **)(param_1 + 0x1c);
      if (((uint)((int)puVar1 - *(int *)(param_1 + 0x18) >> 1) < *(uint *)(param_1 + 0x20)) &&
         (*(ushort **)(param_1 + 0x1c) = puVar1 + 1, puVar1 != (ushort *)0x0)) {
        *puVar1 = uVar8;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  fVar2 = (float)(int)uVar3;
  if ((int)uVar3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_c = (uint)(longlong)ROUND(fVar2 * (float)param_2[0xb] + 0.5);
  *(uint *)(param_1 + 0x28) = local_c;
  if (local_c < uVar3) {
    *(uint *)(param_1 + 0x28) = uVar3;
  }
  if (1.0 < (float)param_2[0xb]) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return 1;
}

// 01411840  FUN_01411840  size=122  [run]
void __fastcall FUN_01411840(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x1c) = pvVar1;
    AK::MemoryMgr::Free(DAT_01b29448,pvVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    AK::MemoryMgr::Free(DAT_01b29448,*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x24) != -1) {
    AK::MemoryMgr::ReleaseBlock(*(int *)(param_1 + 0x24),*(void **)(param_1 + 4));
    AK::MemoryMgr::DestroyPool(*(long *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  return;
}

// 014118C0  FUN_014118c0  size=440  [run]
int __thiscall
FUN_014118c0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  *param_8 = 0;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0xc)) {
    return 0;
  }
  iVar10 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 1) + -1;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 8);
  iVar11 = 0;
  iVar5 = iVar10 / 2;
  do {
    iVar4 = iVar5;
    iVar5 = (iVar10 - iVar11) / 2 + iVar11;
    puVar9 = (uint *)((uint)*(ushort *)(iVar1 + iVar5 * 2) * 0x20 + iVar2);
    if (param_2 < puVar9[5]) {
LAB_01411a2a:
      iVar10 = iVar5 + -1;
    }
    else {
      if (param_2 == puVar9[5]) {
        uVar6 = puVar9[1];
        if ((uVar6 < param_4) || ((uVar6 <= param_4 && (*puVar9 < param_3)))) goto LAB_01411a2a;
        if ((uVar6 < param_4) || ((uVar6 <= param_4 && (*puVar9 <= param_3)))) {
          puVar9 = (uint *)((uint)*(ushort *)(iVar1 + iVar5 * 2) * 0x20 + iVar2);
          if (puVar9 != (uint *)0x0) {
            uVar6 = *param_7 - param_5;
            uVar8 = uVar6 + *puVar9;
            uVar6 = (puVar9[1] - (uint)(*param_7 < param_5)) + (uint)CARRY4(uVar6,*puVar9);
            if (param_4 < uVar6) goto LAB_014119bf;
            if (param_4 != uVar6) {
              return 0;
            }
            goto joined_r0x01411a67;
          }
          goto LAB_01411966;
        }
      }
      iVar11 = iVar5 + 1;
    }
    if (iVar10 < iVar11) {
LAB_01411966:
      puVar9 = (uint *)((uint)*(ushort *)(iVar1 + iVar4 * 2) * 0x20 + iVar2);
      if (param_2 == puVar9[5]) {
        uVar6 = puVar9[1];
        uVar3 = *puVar9;
        if ((uVar6 <= param_4) && ((param_4 != uVar6 || (uVar3 <= param_3)))) {
          uVar7 = puVar9[4] - param_5;
          uVar8 = uVar7 + uVar3;
          uVar6 = (uVar6 - (puVar9[4] < param_5)) + (uint)CARRY4(uVar7,uVar3);
          if (param_4 <= uVar6) {
            if (uVar6 <= param_4) {
joined_r0x01411a67:
              if (uVar8 < param_3) {
                return 0;
              }
            }
LAB_014119bf:
            iVar11 = param_3 - *puVar9;
            uVar6 = puVar9[4] - iVar11;
            if ((((uVar6 <= *param_7) && ((int)((ulonglong)uVar6 % (ulonglong)param_6) == 0)) &&
                ((int)(((ulonglong)uVar6 % (ulonglong)param_6 << 0x20 |
                       (ulonglong)(puVar9[2] + iVar11)) % (ulonglong)param_6) == 0)) &&
               (param_5 <= uVar6)) {
              *param_7 = uVar6;
              if ((short)puVar9[6] == 0) {
                FUN_01411620(puVar9);
                puVar9[3] = 0;
              }
              *(short *)(puVar9 + 6) = (short)puVar9[6] + 1;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
              *param_8 = puVar9;
              return iVar11;
            }
          }
        }
      }
      return 0;
    }
  } while( true );
}

// 01411AC0  FUN_01411ac0  size=25  [run]
void FUN_01411ac0(int param_1)

{
  if (*(int *)(param_1 + 0x14) != -1) {
    FUN_01411030(param_1);
  }
  return;
}

// 01411AE0  FUN_01411ae0  size=30  [run]
void __thiscall FUN_01411ae0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(param_1,param_2,param_3);
  return;
}

// 01411B00  FUN_01411b00  size=87  [run]
undefined4 __thiscall
FUN_01411b00(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    return 1;
  }
  if (param_5 == '\0') {
    uVar1 = (**(code **)(*param_2 + 0x14))(param_3,param_4,param_1 + 8);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
    return uVar1;
  }
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_1 + 8);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
  return uVar1;
}

// 01411B60  FUN_01411b60  size=67  [run]
void __thiscall FUN_01411b60(int param_1,int *param_2,char param_3,undefined1 *param_4)

{
  if (param_3 != '\0') {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      (**(code **)(*param_2 + 0x1c))
                (*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14),param_1 + 8,param_4);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
      return;
    }
    *param_4 = 0;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  return;
}

// 01411BB0  FUN_01411bb0  size=16  [run]
void FUN_01411bb0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 01411BC0  FUN_01411bc0  size=21  [run]
void __thiscall FUN_01411bc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = 0;
  return;
}

// 01411BE0  FUN_01411be0  size=14  [run]
void __thiscall FUN_01411be0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}

// 01411C30  FUN_01411c30  size=19  [run]
undefined4 __thiscall FUN_01411c30(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 != *param_2);
}

// 01411C50  FUN_01411c50  size=32  [run]
void __thiscall FUN_01411c50(int *param_1,int param_2,int param_3)

{
  if (param_2 == *param_1) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 01411C70  FUN_01411c70  size=47  [run]
void __thiscall FUN_01411c70(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0xb8) == 0) {
    *(int **)(param_1 + 0xb8) = param_2;
    *param_2 = 0;
    return;
  }
  *param_2 = *(int *)(param_1 + 0xb8);
  *(int **)(param_1 + 0xb8) = param_2;
  return;
}

// 01411CC0  FUN_01411cc0  size=49  [run]
void __thiscall FUN_01411cc0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = *(int *)(iVar1 + 0x10);
  *param_2 = iVar3;
  param_2[1] = iVar2;
  if (iVar1 == *param_1) {
    *param_1 = iVar3;
    return;
  }
  *(int *)(iVar2 + 0x10) = iVar3;
  return;
}

// 01411D10  FUN_01411d10  size=74  [run]
void __thiscall FUN_01411d10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(iVar1 + 0xc);
  if (*(int *)(param_1 + 0xb8) == 0) {
    *(int **)(param_1 + 0xb8) = piVar2;
    *piVar2 = 0;
  }
  else {
    *piVar2 = *(int *)(param_1 + 0xb8);
    *(int **)(param_1 + 0xb8) = piVar2;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if ((param_3 != 1) && (*(int *)(iVar1 + 0x14) != -1)) {
    FUN_01411030(iVar1);
  }
  return;
}

// 01411D60  FUN_01411d60  size=151  [run]
void __thiscall FUN_01411d60(int param_1,int *param_2,char param_3,undefined1 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(*(int *)(param_1 + 0x14) + 0x38) + 0xc);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 != 0) {
    if ((*(int *)(*(int *)(iVar2 + 0x28) + 0x10) == 0) &&
       (*(int *)(*(int *)(iVar2 + 0x28) + 0x14) == *(int *)(iVar2 + 0x2c))) {
      if (*(int *)(iVar1 + 0x14) != -1) {
        FUN_01411030(iVar1);
      }
    }
    else {
      iVar2 = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (iVar2 != 0) {
    if ((param_3 != '\0') && ((*(byte *)(iVar2 + 0x30) & 1) == 0)) {
      (**(code **)(*param_2 + 0x1c))
                (*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x14),iVar2 + 8,&param_4);
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      return;
    }
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
  }
  return;
}

// 01411E00  FUN_01411e00  size=186  [run]
void __thiscall FUN_01411e00(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x38);
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar4 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  local_8 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(local_8 + 4);
  piVar2 = *(int **)(iVar1 + 0xc);
  if (*(int *)(iVar4 + 0xb8) == 0) {
    *(int **)(iVar4 + 0xb8) = piVar2;
    *piVar2 = 0;
  }
  else {
    *piVar2 = *(int *)(iVar4 + 0xb8);
    *(int **)(iVar4 + 0xb8) = piVar2;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if ((param_2 != 1) && (*(int *)(iVar1 + 0x14) != -1)) {
    FUN_01411030(iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  local_c = CONCAT31((int3)((uint)lpCriticalSection >> 8),1);
  iVar4 = local_8;
  do {
    iVar1 = *(int *)(iVar4 + 0x10);
    iVar3 = iVar1;
    if (iVar4 == local_8) {
      iVar3 = iRam00000010;
      local_8 = iVar1;
    }
    iRam00000010 = iVar3;
    (**(code **)(**(int **)(iVar4 + 0x14) + 0x14))(iVar4,param_2,local_c);
    local_c = local_c & 0xffffff00;
    iVar4 = iVar1;
  } while (iVar1 != 0);
  return;
}

// 01411EC0  FUN_01411ec0  size=30  [run]
void FUN_01411ec0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 != 1) {
    uVar1 = 2;
  }
  FUN_01411e00(uVar1);
  return;
}

// 01411F10  FUN_01411f10  size=366  [run]
void __fastcall FUN_01411f10(float *param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (param_2 >> 2) * 4;
  fVar7 = (float)iVar4;
  pfVar1 = param_1 + param_2;
  if (iVar4 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = (param_4 - param_3) / fVar7;
  pfVar3 = param_1 + (param_2 >> 2) * 4;
  fVar2 = fVar7 * 4.0;
  fVar5 = fVar7 + param_3;
  fVar6 = fVar5 + fVar7;
  fVar7 = fVar6 + fVar7;
  fVar8 = param_3;
  for (; param_1 < pfVar3; param_1 = param_1 + 4) {
    *param_1 = *param_1 * fVar8;
    param_1[1] = param_1[1] * fVar5;
    param_1[2] = param_1[2] * fVar6;
    param_1[3] = param_1[3] * fVar7;
    fVar8 = fVar8 + fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar6 + fVar2;
    fVar7 = fVar7 + fVar2;
  }
  if (param_1 < pfVar1) {
    fVar7 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (param_4 - param_3) / fVar7;
    iVar4 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = (fVar7 + param_3) * param_1[1];
        param_3 = fVar7 + fVar7 + param_3;
        param_1[2] = param_1[2] * param_3;
        param_3 = fVar7 + param_3;
        param_1[3] = param_1[3] * param_3;
        param_1 = param_1 + 4;
        param_3 = fVar7 + param_3;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      do {
        *param_1 = *param_1 * param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + fVar7;
      } while (param_1 < pfVar1);
      return;
    }
  }
  return;
}

// 01412080  FUN_01412080  size=181  [run]
void __fastcall FUN_01412080(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 01412140  FUN_01412140  size=25  [run]
void __fastcall FUN_01412140(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180efc8;
  FUN_0135d810();
  *param_1 = &PTR_FUN_01803c4c;
  return;
}

// 01412160  FUN_01412160  size=235  [run]
void __thiscall
FUN_01412160(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  iVar4 = 0;
  for (uVar3 = param_5[1] & 0x3ffff; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
    iVar4 = iVar4 + 1;
  }
  *(int *)(param_1 + 0x2c) = iVar4;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  FUN_014129c0(puVar1);
  *(undefined4 *)(param_1 + 0x1c) = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = FUN_00fde949();
  iVar4 = iVar4 * 0x343fd + 0x269ec3;
  fVar5 = -*(float *)(param_1 + 0x14);
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar4 = 0;
  *(float *)(param_1 + 0x34) = fVar2 * 2.3283064e-10 * (*(float *)(param_1 + 0x14) - fVar5) + fVar5;
  for (uVar3 = param_5[1] & 0x3ffff; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
    iVar4 = iVar4 + 1;
  }
  FUN_0135d820(param_2,iVar4,*param_5,*puVar1,1);
  *(undefined2 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  return;
}

// 01412260  FUN_01412260  size=27  [run]
undefined4 FUN_01412260(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 0;
  return 1;
}

// 01412280  FUN_01412280  size=184  [run]
undefined4 __thiscall FUN_01412280(int param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  undefined4 local_14;
  
  piVar2 = param_2;
  if (*param_2 == 0) {
    return 0x11;
  }
  FUN_014129c0(param_1 + 0xc);
  param_2 = (int *)(*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x10));
  fVar3 = 1600.0;
  if ((1600.0 <= (float)param_2) || (fVar3 = 25.0, (float)param_2 <= 25.0)) {
    param_2 = (int *)fVar3;
  }
  fVar1 = (float)*piVar2;
  fVar3 = *(float *)(param_1 + 0x270);
  if (*piVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = (fVar1 * 100.0) / (float)param_2 + fVar3;
  *(float *)(param_1 + 0x270) = fVar1;
  local_14 = (int)(longlong)ROUND(fVar1 - fVar3);
  *piVar2 = local_14;
  return 0x2d;
}

// 01412340  FUN_01412340  size=154  [run]
void FUN_01412340(float param_1,float param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = 0;
  for (uVar1 = *(uint *)(unaff_ESI + 4); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    uVar2 = uVar2 + 1;
  }
  if ((param_3 == '\0') && ((*(uint *)(unaff_ESI + 4) & 8) != 0)) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = 0;
  if (param_2 == param_1) {
    if (uVar2 != 0) {
      do {
        FUN_01412080();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
      return;
    }
  }
  else if (uVar2 != 0) {
    do {
      FUN_01411f10(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}

// 014123E0  FUN_014123e0  size=54  [run]
undefined4 __thiscall FUN_014123e0(undefined4 *param_1,int *param_2)

{
  FUN_0135da30(param_2);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01412420  FUN_01412420  size=244  [run]
void FUN_01412420(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = param_3;
  uVar4 = 0;
  for (uVar2 = param_1[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar4 = uVar4 + 1;
  }
  uVar2 = param_3[1];
  uVar5 = 0;
  uVar3 = uVar2;
  if (uVar2 != 0) {
    do {
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if (uVar4 < uVar5) {
      uVar4 = 0;
      for (uVar2 = param_1[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        uVar4 = uVar4 + 1;
      }
      goto LAB_01412480;
    }
  }
  uVar4 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar4 = uVar4 + 1;
  }
LAB_01412480:
  uVar2 = (uint)*(ushort *)(param_3 + 3) - (uint)*(ushort *)((int)param_3 + 0xe);
  param_3 = (int *)(uint)*(ushort *)((int)param_1 + 0xe);
  if ((int)uVar2 <= (int)(uint)*(ushort *)((int)param_1 + 0xe)) {
    param_3 = (int *)uVar2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      FID_conflict__memcpy
                ((void *)(*piVar1 +
                         (*(ushort *)(piVar1 + 3) * uVar2 + (uint)*(ushort *)((int)piVar1 + 0xe)) *
                         4),(void *)(*param_1 + (*(ushort *)(param_1 + 3) * uVar2 + param_2) * 4),
                 (int)param_3 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  *(short *)((int)piVar1 + 0xe) = *(short *)((int)piVar1 + 0xe) + (short)param_3;
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)param_3;
  iVar6 = 0x11;
  if ((param_1[2] != 0x11) || (*(short *)((int)param_1 + 0xe) != 0)) {
    iVar6 = (uint)(*(short *)((int)piVar1 + 0xe) == (short)piVar1[3]) * 2 + 0x2b;
  }
  piVar1[2] = iVar6;
  return;
}

// 01412520  FUN_01412520  size=418  [run]
void __thiscall FUN_01412520(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  undefined4 local_8;
  
  piVar1 = (int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x270) = 0;
  FUN_014129c0(piVar1);
  if (*piVar1 != *(int *)(param_1 + 0x1c)) {
    FUN_0135da30(*(undefined4 *)(param_1 + 8));
    iVar2 = FUN_0135d820(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),*piVar1,1);
    if (iVar2 != 1) goto LAB_01412573;
    FUN_0135db10();
    *(int *)(param_1 + 0x1c) = *piVar1;
  }
  local_8 = 1600.0;
  fVar4 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x34);
  if (((1600.0 <= fVar4) || (local_8 = 25.0, fVar4 <= 25.0)) || (local_8 = fVar4, fVar4 != 100.0)) {
    *(undefined2 *)(param_1 + 0x26c) = 0;
  }
  else {
    if (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x34) != 100.0) {
      *(undefined2 *)(param_1 + 0x26c) = 0x100;
    }
    if (*(char *)(param_1 + 0x26d) != '\0') {
      *(char *)(param_1 + 0x26c) = *(char *)(param_1 + 0x26c) + '\x01';
    }
  }
  bVar3 = *(char *)(param_1 + 0x26c) == '\b';
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 4))(*(int *)(param_1 + 0x25c) * 4);
  if (iVar2 != 0) {
    FUN_0135dde0(param_2,param_3,param_4,local_8,bVar3,iVar2);
    if (bVar3) {
      *(undefined2 *)(param_1 + 0x26c) = 0;
    }
    (**(code **)(**(int **)(param_1 + 8) + 8))(iVar2);
    if ((*(int *)(param_4 + 8) == 0x2d) || (*(int *)(param_4 + 8) == 0x11)) {
      FUN_01412340(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),1);
      *(int *)(param_1 + 0x1c) = *piVar1;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    }
    return;
  }
LAB_01412573:
  FUN_01412420(param_2,param_3,param_4);
  return;
}

// 01412730  FUN_01412730  size=104  [run]
undefined4 * FUN_01412730(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x274);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_0180efc8;
    puVar1[3] = 0x800;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0x800;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0x3f800000;
    FUN_0135dbd0();
    puVar2 = puVar1;
  }
  return puVar2;
}

// 014127A0  FUN_014127a0  size=59  [run]
float10 __thiscall FUN_014127a0(int *param_1,float param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *param_1 * 0x343fd + 0x269ec3;
  *param_1 = iVar1;
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)2.3283064e-10 * ((float10)param_3 - (float10)param_2) + (float10)param_2;
}

// 01412850  FUN_01412850  size=35  [run]
void FUN_01412850(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01412880  FUN_01412880  size=48  [run]
undefined4 * __thiscall FUN_01412880(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0180efc8;
  FUN_0135d810();
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 014128C0  FUN_014128c0  size=34  [run]
undefined4 * __thiscall FUN_014128c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01412900  FUN_01412900  size=35  [run]
undefined4 __thiscall FUN_01412900(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
    return uVar1;
  }
  return 1;
}

// 01412930  FUN_01412930  size=118  [run]
undefined4 __thiscall FUN_01412930(int param_1,undefined2 param_2,undefined4 *param_3)

{
  float10 fVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    switch(param_2) {
    case 0:
      *(undefined4 *)(param_1 + 4) = *param_3;
      return 1;
    case 1:
      *(undefined4 *)(param_1 + 8) = *param_3;
      return 1;
    case 2:
      fVar1 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x10) = (float)fVar1;
      return 1;
    case 3:
      *(undefined4 *)(param_1 + 0xc) = *param_3;
    }
    return 1;
  }
  return 0x1f;
}

// 014129C0  FUN_014129c0  size=33  [run]
void __thiscall FUN_014129c0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  return;
}

// 014129F0  FUN_014129f0  size=75  [run]
void __thiscall FUN_014129f0(undefined4 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_0180f000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0x800;
  param_1[4] = 0x3f800000;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 01412A40  FUN_01412a40  size=97  [run]
undefined4 * __thiscall FUN_01412a40(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180f000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0x800;
    puVar1[4] = 0x3f800000;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01412AB0  FUN_01412ab0  size=39  [run]
undefined4 __thiscall FUN_01412ab0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01412AE0  FUN_01412ae0  size=65  [run]
undefined4 __thiscall FUN_01412ae0(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x10) = (float)fVar1;
  return 1;
}

// 01412B60  FUN_01412b60  size=64  [run]
undefined4 * FUN_01412b60(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180f000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0x800;
    puVar1[4] = 0x3f800000;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01412BA0  FUN_01412ba0  size=35  [run]
void FUN_01412ba0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01412BD0  FUN_01412bd0  size=34  [run]
undefined4 * __thiscall FUN_01412bd0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01412C40  FUN_01412c40  size=107  [run]
void __thiscall FUN_01412c40(float *param_1,float param_2)

{
  float fVar1;
  float local_10;
  
  fVar1 = *param_1;
  param_1[2] = param_2;
  param_1[4] = 0.0;
  local_10 = (float)(longlong)ROUND(ABS(param_2 - param_1[3]) / fVar1);
  param_1[5] = local_10;
  if (param_2 - param_1[3] <= 0.0) {
    fVar1 = -fVar1;
  }
  param_1[1] = fVar1;
  return;
}

// 01412CB0  FUN_01412cb0  size=24  [run]
void __thiscall FUN_01412cb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// 01412D20  FUN_01412d20  size=27  [run]
undefined4 FUN_01412d20(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01412D40  FUN_01412d40  size=51  [run]
float10 __fastcall FUN_01412d40(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  fVar2 = (float10)*(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return (fVar1 * (float10)1000.0) / fVar2;
}

// 01412DB0  FUN_01412db0  size=65  [run]
float10 __thiscall FUN_01412db0(undefined4 param_1,float param_2,float param_3)

{
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = FUN_00fde949(param_1);
    return (float10)iVar1 * (float10)3.051851e-05 * ((float10)param_3 - (float10)param_2) +
           (float10)param_2;
  }
  return (float10)param_2;
}

// 01412E00  FUN_01412e00  size=35  [run]
void FUN_01412e00(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01412E30  FUN_01412e30  size=106  [run]
void __thiscall FUN_01412e30(float *param_1,float param_2,float param_3)

{
  float local_c;
  
  param_1[3] = param_3;
  param_1[2] = param_3;
  *param_1 = param_2;
  param_1[4] = 0.0;
  local_c = (float)(longlong)ROUND(0.0 / param_2);
  param_1[5] = local_c;
  param_1[1] = -param_2;
  return;
}

// 01412EA0  FUN_01412ea0  size=75  [run]
undefined4 * __thiscall FUN_01412ea0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0180f02c;
  iVar1 = 2;
  do {
    FUN_01413d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01412EF0  FUN_01412ef0  size=1819  [run]
undefined4 __thiscall
FUN_01412ef0(int param_1,int *param_2,undefined4 param_3,int param_4,int *param_5)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fVar10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0x134) = param_3;
  iVar4 = *param_5;
  fVar10 = (float)iVar4;
  *(int *)(param_1 + 4) = iVar4;
  if (iVar4 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  fVar10 = fVar10 * 0.5;
  if (20000.0 <= fVar10) {
    fVar10 = 20000.0;
  }
  *(float *)(param_1 + 0x2c) = fVar10;
  *(int *)(param_1 + 0x130) = param_4;
  puVar5 = (undefined4 *)(param_4 + 0x10);
  puVar6 = (undefined4 *)(param_1 + 0x88);
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_5[1] = param_5[1] ^ (*(uint *)(param_1 + 0xc0) ^ param_5[1]) & 0x3ffff;
  switch(param_5[1] & 0x3ffff) {
  case 3:
  case 4:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x33:
  case 0x37:
  case 0x3b:
  case 0x3f:
    break;
  default:
    param_5[1] = param_5[1] & 0xfffc0004U | 4;
  }
  sVar2 = (**(code **)(**(int **)(param_1 + 0x134) + 4))();
  *(short *)(param_1 + 8) = sVar2;
  *(bool *)(param_1 + 0x38) = sVar2 != 0;
  if (*(int *)(param_1 + 0xa4) == 1) {
    fVar10 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    local_c = (int)(longlong)ROUND(fVar10 * *(float *)(param_1 + 0xac));
    *(int *)(param_1 + 100) = local_c;
    fVar10 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    local_c = (int)(longlong)ROUND(fVar10 * *(float *)(param_1 + 0xb0));
    *(int *)(param_1 + 0x68) = local_c;
    fVar10 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    local_c = (int)(longlong)ROUND(fVar10 * *(float *)(param_1 + 0xb4));
    *(int *)(param_1 + 0x6c) = local_c;
    fVar10 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    local_c = (int)(longlong)ROUND(fVar10 * *(float *)(param_1 + 0xbc));
    iVar4 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x70) = local_c;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 100) + iVar4 + local_c + *(int *)(param_1 + 0x6c);
    if (*(int *)(param_1 + 100) == 0) {
      *(undefined4 *)(param_1 + 100) = 1;
    }
    fVar10 = (float)*(int *)(param_1 + 100);
    if (*(int *)(param_1 + 100) < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x50) = 1.0 / fVar10;
    fVar7 = (float10)FUN_00fdc1f0();
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    fVar8 = (float10)*(int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x68) < 0) {
      fVar8 = fVar8 + (float10)4.2949673e+09;
    }
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(float *)(param_1 + 0x54) = (float)(((float10)-1.0 / fVar8) * ((float10)1 - fVar7));
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    fVar8 = (float10)*(int *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x70) < 0) {
      fVar8 = fVar8 + (float10)4.2949673e+09;
    }
    *(float *)(param_1 + 0x5c) = (float)(((float10)-1.0 / fVar8) * fVar7);
  }
  else {
    if (sVar2 == 1) {
      fVar10 = (float)*param_5;
      if (*param_5 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      local_c = (int)(longlong)ROUND(fVar10 * 0.005);
      *(int *)(param_1 + 100) = local_c;
      fVar10 = (float)*(int *)(param_1 + 4);
      if (*(int *)(param_1 + 4) < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      local_c = (int)(longlong)ROUND(fVar10 * *(float *)(param_1 + 0xa8));
      *(int *)(param_1 + 0x6c) = local_c;
      fVar10 = (float)*param_5;
      if (*param_5 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      local_c = (int)(longlong)ROUND(fVar10 * 0.005);
      *(int *)(param_1 + 0x70) = local_c;
      fVar10 = (float)*(int *)(param_1 + 100);
      if (*(int *)(param_1 + 100) < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(float *)(param_1 + 0x50) = 1.0 / fVar10;
      fVar10 = (float)*(int *)(param_1 + 0x70);
      if (local_c < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      *(float *)(param_1 + 0x5c) = -1.0 / fVar10;
    }
    else {
      fVar10 = (float)*(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 4) < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar9 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x70) = 0;
      local_c = (int)(longlong)ROUND(fVar10 * *(float *)(param_1 + 0xa8));
      *(int *)(param_1 + 0x6c) = local_c;
    }
    *(int *)(param_1 + 0x18) =
         *(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70);
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x78) = uVar9;
  *(int *)(param_1 + 0x14) = (int)sVar2 * *(int *)(param_1 + 0x18);
  if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || (iVar4 == 3)) {
    fVar10 = *(float *)(param_1 + 0x88);
    fVar1 = *(float *)(param_1 + 0x8c);
    if (fVar10 != fVar1) {
      iVar4 = FUN_00fde949();
      fVar10 = (float)iVar4 * 3.051851e-05 * (fVar1 - fVar10) + fVar10;
    }
    *(float *)(param_1 + 0x28) = fVar10;
    if (*(char *)(param_1 + 0x90) != '\0') {
      fVar10 = *(float *)(param_1 + 0x98);
      fVar1 = *(float *)(param_1 + 0x9c);
      if (fVar10 != fVar1) {
        iVar4 = FUN_00fde949();
        fVar10 = (float)iVar4 * 3.051851e-05 * (fVar1 - fVar10) + fVar10;
      }
      *(float *)(param_1 + 0x30) = fVar10;
    }
  }
  else if (iVar4 == 5) {
    iVar4 = (**(code **)(*param_2 + 4))(0x78);
    *(int *)(param_1 + 0x84) = iVar4;
    if (iVar4 == 0) {
      return 0x34;
    }
    *(undefined4 *)(param_1 + 0x48) = 0x3e042108;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x3fffffff;
    uVar3 = 0xc;
    do {
      *(undefined4 *)((uVar3 - 0xc) + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)((uVar3 - 8) + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)((uVar3 - 4) + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + 4 + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + 8 + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + 0xc + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + 0x10 + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + 0x14 + *(int *)(param_1 + 0x84)) = 0;
      *(undefined4 *)(uVar3 + 0x18 + *(int *)(param_1 + 0x84)) = 0;
      uVar3 = uVar3 + 0x28;
    } while (uVar3 < 0x84);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar4 = *(int *)(param_1 + 4) * 4;
  fVar10 = (float)iVar4;
  if (iVar4 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0x4c) = fVar10;
  iVar4 = 3;
  do {
    fVar10 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    FUN_01413d70(fVar10 * 18000.0 * 2.0833333e-05,*(undefined4 *)(param_1 + 0x4c));
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  switch(*(undefined4 *)(param_1 + 0xa0)) {
  case 0:
    *(undefined **)(param_1 + 0x80) = &DAT_01b29450;
    if (*(char *)(param_1 + 0x90) == '\0') {
      *(code **)(param_1 + 0x7c) = FUN_01414010;
      return 1;
    }
    if (*(int *)(param_1 + 0x94) == 1) {
      *(code **)(param_1 + 0x7c) = FUN_01414570;
      return 1;
    }
    *(code **)(param_1 + 0x7c) = FUN_01414280;
    return 1;
  case 1:
    *(undefined **)(param_1 + 0x80) = &DAT_01b29c50;
    if (*(char *)(param_1 + 0x90) == '\0') {
LAB_0141356d:
      *(code **)(param_1 + 0x7c) = FUN_014148b0;
      return 1;
    }
    if (*(int *)(param_1 + 0x94) == 1) {
      *(code **)(param_1 + 0x7c) = FUN_01415130;
      return 1;
    }
    break;
  case 2:
    *(undefined **)(param_1 + 0x80) = &DAT_01b2a450;
    if (*(char *)(param_1 + 0x90) == '\0') goto LAB_0141356d;
    if (*(int *)(param_1 + 0x94) == 1) {
      *(code **)(param_1 + 0x7c) = FUN_01415130;
      return 1;
    }
    break;
  case 3:
    *(undefined **)(param_1 + 0x80) = &DAT_01b2ac50;
    if (*(char *)(param_1 + 0x90) == '\0') goto LAB_0141356d;
    if (*(int *)(param_1 + 0x94) == 1) {
      *(code **)(param_1 + 0x7c) = FUN_01415130;
      return 1;
    }
    break;
  case 4:
    *(code **)(param_1 + 0x7c) = FUN_01415620;
    return 1;
  case 5:
    *(code **)(param_1 + 0x7c) = FUN_014157e0;
  default:
    return 1;
  }
  *(code **)(param_1 + 0x7c) = FUN_01414cb0;
  return 1;
}

// 01413670  FUN_01413670  size=71  [run]
undefined4 __thiscall FUN_01413670(undefined4 *param_1,int *param_2)

{
  if (param_1[0x21] != 0) {
    (**(code **)(*param_2 + 8))(param_1[0x21]);
    param_1[0x21] = 0;
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 014136C0  FUN_014136c0  size=262  [run]
int __fastcall FUN_014136c0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 local_14;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if ((*(int *)(param_1 + 0xa4) != 1) && (*(short *)(param_1 + 8) != 1)) {
    uVar5 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  fVar4 = (float10)FUN_00fdc1f0();
  fVar1 = (float)*(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(float *)(param_1 + 0x138) = 1.0 / (fVar1 * 0.1);
  *(float *)(param_1 + 0x144) = (float)fVar4;
  *(float *)(param_1 + 0x140) = (float)fVar4;
  local_14 = (undefined4)(longlong)ROUND(0.0 / *(float *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  *(float *)(param_1 + 0x13c) = -*(float *)(param_1 + 0x138);
  iVar3 = 3;
  do {
    iVar2 = iVar3;
    FUN_01413e00();
    iVar3 = iVar2 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

// 014137D0  FUN_014137d0  size=92  [run]
void __thiscall FUN_014137d0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 3);
  if ((*(char *)(param_1 + 0x38) != '\0') &&
     (uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc), uVar1 <= uVar2)) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    (**(code **)(param_1 + 0x7c))(*param_2,uVar2);
    *(short *)((int)param_2 + 0xe) = (short)uVar2;
  }
  if ((*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0xc)) && (*(char *)(param_1 + 0x38) != '\0')
     ) {
    param_2[2] = 0x11;
    return;
  }
  param_2[2] = 0x2d;
  return;
}

// 01413830  FUN_01413830  size=261  [run]
undefined4 * __fastcall FUN_01413830(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0180f02c;
  iVar1 = 2;
  do {
    FUN_01413e20();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[1] = 0;
  _memset(param_1 + 0x22,0,0x3c);
  _memset(param_1 + 0x31,0,0x6c);
  param_1[9] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}

// 01413940  FUN_01413940  size=34  [run]
undefined4 FUN_01413940(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))(0x150);
  if (iVar1 != 0) {
    uVar2 = FUN_01413830();
    return uVar2;
  }
  return 0;
}

// 01413980  FUN_01413980  size=140  [run]
undefined4 __thiscall FUN_01413980(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    param_1[2] = 0x43dc0000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0x3f800000;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x12] = 4;
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return uVar1;
}

// 01413A10  FUN_01413a10  size=291  [run]
undefined4 __thiscall FUN_01413a10(int param_1,undefined2 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    switch(param_2) {
    case 0:
      *(undefined4 *)(param_1 + 4) = *param_3;
      return 1;
    case 1:
      *(undefined4 *)(param_1 + 8) = *param_3;
      return 1;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = *param_3;
      return 1;
    case 3:
      *(undefined4 *)(param_1 + 0x14) = *param_3;
      return 1;
    case 4:
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)param_3;
      return 1;
    case 5:
      *(undefined4 *)(param_1 + 0x1c) = *param_3;
      return 1;
    case 6:
      *(undefined4 *)(param_1 + 0xc) = *param_3;
      return 1;
    case 7:
      *(undefined4 *)(param_1 + 0x20) = *param_3;
      return 1;
    case 8:
      *(undefined4 *)(param_1 + 0x24) = *param_3;
      return 1;
    case 9:
      *(undefined4 *)(param_1 + 0x28) = *param_3;
      return 1;
    case 10:
      *(undefined4 *)(param_1 + 0x2c) = *param_3;
      return 1;
    case 0xb:
      *(undefined4 *)(param_1 + 0x30) = *param_3;
      return 1;
    case 0xc:
      *(undefined4 *)(param_1 + 0x34) = *param_3;
      return 1;
    case 0xd:
      *(undefined4 *)(param_1 + 0x38) = *param_3;
      return 1;
    case 0xe:
      *(undefined4 *)(param_1 + 0x3c) = *param_3;
      return 1;
    case 0xf:
      *(undefined4 *)(param_1 + 0x40) = *param_3;
      return 1;
    case 0x10:
      *(undefined4 *)(param_1 + 0x44) = *param_3;
      return 1;
    case 0x11:
      *(undefined4 *)(param_1 + 0x48) = *param_3;
    }
    return 1;
  }
  return 0x1f;
}

// 01413B80  FUN_01413b80  size=35  [run]
void FUN_01413b80(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01413BB0  FUN_01413bb0  size=35  [run]
void __thiscall FUN_01413bb0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0x12;
  *param_1 = &PTR_FUN_0180f05c;
  while( true ) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *param_1 = *param_2;
  }
  return;
}

// 01413BE0  FUN_01413be0  size=34  [run]
undefined4 * __thiscall FUN_01413be0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01413C10  FUN_01413c10  size=55  [run]
undefined4 * __thiscall FUN_01413c10(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0x12;
    *puVar1 = &PTR_FUN_0180f05c;
    puVar3 = puVar1;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *puVar3 = *param_1;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01413C50  FUN_01413c50  size=39  [run]
undefined4 __thiscall FUN_01413c50(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01413C80  FUN_01413c80  size=170  [run]
undefined4 __thiscall FUN_01413c80(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = param_2[4];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)param_2 + 0x1d);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)param_2 + 0x25);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x29);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((int)param_2 + 0x2d);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((int)param_2 + 0x31);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((int)param_2 + 0x35);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((int)param_2 + 0x39);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((int)param_2 + 0x3d);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((int)param_2 + 0x41);
  return 1;
}

// 01413D40  FUN_01413d40  size=31  [run]
undefined4 * FUN_01413d40(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180f05c;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01413D60  FUN_01413d60  size=1  [run]
void FUN_01413d60(void)

{
  return;
}

// 01413D70  FUN_01413d70  size=142  [run]
void __thiscall FUN_01413d70(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float10)fptan(((float10)param_2 * (float10)3.1415927) / (float10)param_3);
  fVar1 = (float)((float10)1 / fVar2);
  fVar4 = fVar1 * fVar1;
  fVar3 = 1.0 / (fVar1 * 1.4142135 + 1.0 + fVar4);
  param_1[1] = fVar3 * 2.0;
  *param_1 = fVar3;
  param_1[2] = fVar3;
  param_1[3] = (1.0 - fVar4) * 2.0 * fVar3;
  param_1[4] = ((1.0 - fVar1 * 1.4142135) + fVar4) * fVar3;
  return;
}

// 01413E00  FUN_01413e00  size=24  [run]
void __fastcall FUN_01413e00(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 01413E20  FUN_01413e20  size=50  [run]
void __fastcall FUN_01413e20(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 01413EB0  FUN_01413eb0  size=112  [run]
float10 __thiscall FUN_01413eb0(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (param_1[1] * param_1[5] + *param_1 * param_2 + param_1[2] * param_1[6]) -
          (param_1[3] * param_1[7] + param_1[4] * param_1[8]);
  param_1[6] = param_1[5];
  param_1[5] = param_2;
  param_1[8] = param_1[7];
  param_1[7] = fVar1;
  return (float10)fVar1;
}

// 01413F90  FUN_01413f90  size=22  [run]
float10 FUN_01413f90(float param_1,float param_2,float param_3)

{
  return ((float10)param_2 - (float10)param_1) * (float10)param_3 + (float10)param_1;
}

// 01413FB0  FUN_01413fb0  size=49  [run]
void __thiscall FUN_01413fb0(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = 0.001;
  if (0.001 <= *param_2) {
    if (*param_2 < *(float *)(param_1 + 0x2c)) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x2c) - 1.0;
  }
  *param_2 = fVar1;
  return;
}

// 01413FF0  FUN_01413ff0  size=23  [run]
int FUN_01413ff0(float param_1)

{
  return (int)ROUND(param_1 - 0.5);
}

// 01414010  FUN_01414010  size=622  [run]
void __thiscall FUN_01414010(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_14;
  float local_8;
  
  fVar10 = *(float *)(*(int *)(param_1 + 0x130) + 8);
  fVar7 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar7;
  fVar9 = *(float *)(param_1 + 0x138);
  fVar8 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_14 = (undefined4)(longlong)ROUND(ABS(fVar8) / fVar9);
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  if (fVar8 <= 0.0) {
    fVar9 = -fVar9;
  }
  local_8 = 0.001;
  *(float *)(param_1 + 0x13c) = fVar9;
  fVar10 = *(float *)(param_1 + 0x28) + fVar10;
  if ((0.001 <= fVar10) && (local_8 = fVar10, *(float *)(param_1 + 0x2c) <= fVar10)) {
    local_8 = *(float *)(param_1 + 0x2c) - 1.0;
  }
  fVar10 = (float)*(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  fVar10 = (local_8 * 512.0) / fVar10;
  *(float *)(param_1 + 0x24) = fVar10;
  iVar1 = (int)ROUND(fVar10 - 0.5);
  fVar10 = (float)iVar1;
  if (iVar1 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  fVar9 = *(float *)(param_1 + 0x24);
  iVar6 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    fVar8 = *(float *)(param_1 + 0x20);
    uVar4 = *(uint *)(param_1 + 0x1c) & 0x1ff;
    fVar2 = *(float *)(*(int *)(param_1 + 0x80) + uVar4 * 4);
    fVar3 = *(float *)(*(int *)(param_1 + 0x80) + (uVar4 + 1 & 0x1ff) * 4);
    iVar5 = iVar1 + *(uint *)(param_1 + 0x1c);
    fVar11 = fVar8 + (fVar9 - fVar10);
    iVar6 = iVar6 + -1;
    *(int *)(param_1 + 0x1c) = iVar5;
    *(float *)(param_1 + 0x20) = fVar11;
    if (1.0 < fVar11) {
      *(int *)(param_1 + 0x1c) = iVar5 + 1;
      *(float *)(param_1 + 0x20) = fVar11 - 1.0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x1ff;
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar11 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
             *(float *)(param_1 + 0x78);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    *(float *)(param_1 + 0x78) = fVar11;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(float *)(param_1 + 0x144) * fVar11 * ((fVar3 - fVar2) * fVar8 + fVar2);
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (iVar6 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 01414280  FUN_01414280  size=738  [run]
void __thiscall FUN_01414280(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_14;
  float local_c;
  float local_8;
  
  local_8 = *(float *)(*(int *)(param_1 + 0x130) + 8);
  local_c = *(float *)(*(int *)(param_1 + 0x130) + 0xc);
  fVar6 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar6;
  fVar8 = *(float *)(param_1 + 0x138);
  fVar7 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_14 = (undefined4)(longlong)ROUND(ABS(fVar7) / fVar8);
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  if (fVar7 <= 0.0) {
    fVar8 = -fVar8;
  }
  *(float *)(param_1 + 0x13c) = fVar8;
  local_8 = *(float *)(param_1 + 0x28) + local_8;
  local_c = *(float *)(param_1 + 0x30) + local_c;
  if (0.001 <= local_8) {
    if (*(float *)(param_1 + 0x2c) <= local_8) {
      local_8 = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    local_8 = 0.001;
  }
  if (0.001 <= local_c) {
    if (*(float *)(param_1 + 0x2c) <= local_c) {
      local_c = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    local_c = 0.001;
  }
  fVar8 = (float)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0x34) = (local_c - local_8) / fVar8;
  iVar5 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    fVar8 = (float)*(int *)(param_1 + 0x10);
    iVar5 = iVar5 + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar7 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = ((fVar8 * *(float *)(param_1 + 0x34) + local_8) * 512.0) / fVar7;
    *(float *)(param_1 + 0x24) = fVar7;
    iVar1 = (int)ROUND(fVar7 - 0.5);
    fVar8 = *(float *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x1c) & 0x1ff;
    fVar7 = *(float *)(*(int *)(param_1 + 0x80) + uVar3 * 4);
    fVar2 = *(float *)(*(int *)(param_1 + 0x80) + (uVar3 + 1 & 0x1ff) * 4);
    iVar4 = *(uint *)(param_1 + 0x1c) + iVar1;
    fVar9 = (float)iVar1;
    *(int *)(param_1 + 0x1c) = iVar4;
    if (iVar1 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    fVar9 = (*(float *)(param_1 + 0x24) - fVar9) + fVar8;
    *(float *)(param_1 + 0x20) = fVar9;
    if (1.0 < fVar9) {
      *(int *)(param_1 + 0x1c) = iVar4 + 1;
      *(float *)(param_1 + 0x20) = fVar9 - 1.0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x1ff;
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar9 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
            *(float *)(param_1 + 0x78);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    *(float *)(param_1 + 0x78) = fVar9;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(float *)(param_1 + 0x144) * fVar9 * ((fVar2 - fVar7) * fVar8 + fVar7);
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (iVar5 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 01414570  FUN_01414570  size=828  [run]
void __thiscall FUN_01414570(int param_1,float *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_14;
  undefined4 local_10;
  
  fVar8 = *(float *)(*(int *)(param_1 + 0x130) + 8);
  fVar9 = *(float *)(*(int *)(param_1 + 0x130) + 0xc);
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar5;
  fVar7 = *(float *)(param_1 + 0x138);
  fVar6 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_10 = (undefined4)(longlong)ROUND(ABS(fVar6) / fVar7);
  *(undefined4 *)(param_1 + 0x14c) = local_10;
  if (fVar6 <= 0.0) {
    fVar7 = -fVar7;
  }
  *(float *)(param_1 + 0x13c) = fVar7;
  fVar8 = *(float *)(param_1 + 0x28) + fVar8;
  fVar9 = *(float *)(param_1 + 0x30) + fVar9;
  if (0.001 <= fVar8) {
    if (*(float *)(param_1 + 0x2c) <= fVar8) {
      fVar8 = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    fVar8 = 0.001;
  }
  if (0.001 <= fVar9) {
    if (*(float *)(param_1 + 0x2c) <= fVar9) {
      fVar9 = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    fVar9 = 0.001;
  }
  if (fVar8 < fVar9) {
    fVar7 = (float)*(int *)(param_1 + 0x18);
    bVar2 = false;
    if (*(int *)(param_1 + 0x18) < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar9 = (fVar9 - fVar8) / (fVar7 * fVar7);
  }
  else {
    bVar2 = true;
    fVar7 = (float)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar9 = (fVar9 - fVar8) / SQRT(fVar7);
  }
  *(float *)(param_1 + 0x34) = fVar9;
  local_14 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    local_14 = local_14 + -1;
    if (bVar2) {
      fVar9 = (float)*(int *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x10) < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      fVar9 = SQRT(fVar9);
    }
    else {
      fVar9 = (float)*(int *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x10) < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      fVar9 = fVar9 * fVar9;
    }
    fVar7 = (float)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = ((fVar9 * *(float *)(param_1 + 0x34) + fVar8) * 512.0) / fVar7;
    *(float *)(param_1 + 0x24) = fVar7;
    iVar1 = (int)ROUND(fVar7 - 0.5);
    fVar9 = *(float *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x1c) & 0x1ff;
    fVar7 = *(float *)(*(int *)(param_1 + 0x80) + uVar3 * 4);
    fVar6 = *(float *)(*(int *)(param_1 + 0x80) + (uVar3 + 1 & 0x1ff) * 4);
    iVar4 = *(uint *)(param_1 + 0x1c) + iVar1;
    fVar10 = (float)iVar1;
    *(int *)(param_1 + 0x1c) = iVar4;
    if (iVar1 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    fVar10 = (*(float *)(param_1 + 0x24) - fVar10) + fVar9;
    *(float *)(param_1 + 0x20) = fVar10;
    if (1.0 < fVar10) {
      *(int *)(param_1 + 0x1c) = iVar4 + 1;
      *(float *)(param_1 + 0x20) = fVar10 - 1.0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x1ff;
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar10 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
             *(float *)(param_1 + 0x78);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    *(float *)(param_1 + 0x78) = fVar10;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    uVar3 = *(uint *)(param_1 + 0x10);
    *param_2 = *(float *)(param_1 + 0x144) * fVar10 * ((fVar6 - fVar7) * fVar9 + fVar7);
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= uVar3) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (local_14 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 014148B0  FUN_014148b0  size=1024  [run]
void __thiscall FUN_014148b0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_14;
  int local_8;
  
  fVar9 = *(float *)(*(int *)(param_1 + 0x130) + 8);
  fVar6 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar6;
  fVar8 = *(float *)(param_1 + 0x138);
  fVar7 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_14 = (undefined4)(longlong)ROUND(ABS(fVar7) / fVar8);
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  if (fVar7 <= 0.0) {
    fVar8 = -fVar8;
  }
  fVar7 = 0.001;
  *(float *)(param_1 + 0x13c) = fVar8;
  fVar9 = *(float *)(param_1 + 0x28) + fVar9;
  if ((0.001 <= fVar9) && (fVar7 = fVar9, *(float *)(param_1 + 0x2c) <= fVar9)) {
    fVar7 = *(float *)(param_1 + 0x2c) - 1.0;
  }
  fVar9 = (fVar7 * 512.0) / *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x24) = fVar9;
  iVar2 = (int)ROUND(fVar9 - 0.5);
  fVar9 = (float)iVar2;
  if (iVar2 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  fVar8 = *(float *)(param_1 + 0x24);
  local_8 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    local_8 = local_8 + -1;
    iVar5 = 4;
    do {
      uVar4 = *(uint *)(param_1 + 0x1c) & 0x1ff;
      fVar7 = *(float *)(*(int *)(param_1 + 0x80) + uVar4 * 4);
      fVar10 = *(float *)(param_1 + 0x20) + (fVar8 - fVar9);
      iVar1 = *(uint *)(param_1 + 0x1c) + iVar2;
      fVar7 = (*(float *)(*(int *)(param_1 + 0x80) + (uVar4 + 1 & 0x1ff) * 4) - fVar7) *
              *(float *)(param_1 + 0x20) + fVar7;
      *(int *)(param_1 + 0x1c) = iVar1;
      *(float *)(param_1 + 0x20) = fVar10;
      if (1.0 < fVar10) {
        *(int *)(param_1 + 0x1c) = iVar1 + 1;
        *(float *)(param_1 + 0x20) = fVar10 - 1.0;
      }
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x1ff;
      iVar5 = iVar5 + -1;
      fVar10 = *(float *)(param_1 + 0xd8);
      *(float *)(param_1 + 0xd8) = fVar7;
      fVar3 = *(float *)(param_1 + 0xdc);
      fVar11 = *(float *)(param_1 + 0xe4);
      *(float *)(param_1 + 0xdc) = fVar10;
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe0);
      fVar11 = (*(float *)(param_1 + 200) * fVar10 + *(float *)(param_1 + 0xc4) * fVar7 +
               fVar3 * *(float *)(param_1 + 0xcc)) -
               (*(float *)(param_1 + 0xd4) * fVar11 +
               *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd0));
      *(float *)(param_1 + 0xe0) = fVar11;
      fVar7 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xfc) = fVar11;
      fVar10 = *(float *)(param_1 + 0x100);
      fVar3 = *(float *)(param_1 + 0x108);
      *(float *)(param_1 + 0x100) = fVar7;
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x104);
      fVar10 = (*(float *)(param_1 + 0xe8) * fVar11 + fVar7 * *(float *)(param_1 + 0xec) +
               *(float *)(param_1 + 0xf0) * fVar10) -
               (fVar3 * *(float *)(param_1 + 0xf8) +
               *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0x104));
      *(float *)(param_1 + 0x104) = fVar10;
      fVar7 = (*(float *)(param_1 + 0x10c) * fVar10 +
               *(float *)(param_1 + 0x120) * *(float *)(param_1 + 0x110) +
              *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x114)) -
              (*(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x118) +
              *(float *)(param_1 + 300) * *(float *)(param_1 + 0x11c));
      *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x120) = fVar10;
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x128) = fVar7;
    } while (iVar5 != 0);
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar10 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
             *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar10;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(float *)(param_1 + 0x144) * fVar10 * fVar7;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (local_8 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 01414CB0  FUN_01414cb0  size=1141  [run]
void __thiscall FUN_01414cb0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_14;
  float local_c;
  float local_8;
  
  local_8 = *(float *)(*(int *)(param_1 + 0x130) + 8);
  local_c = *(float *)(*(int *)(param_1 + 0x130) + 0xc);
  fVar6 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar6;
  fVar8 = *(float *)(param_1 + 0x138);
  fVar7 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_14 = (undefined4)(longlong)ROUND(ABS(fVar7) / fVar8);
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  if (fVar7 <= 0.0) {
    fVar8 = -fVar8;
  }
  *(float *)(param_1 + 0x13c) = fVar8;
  local_8 = *(float *)(param_1 + 0x28) + local_8;
  local_c = *(float *)(param_1 + 0x30) + local_c;
  if (0.001 <= local_8) {
    if (*(float *)(param_1 + 0x2c) <= local_8) {
      local_8 = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    local_8 = 0.001;
  }
  if (0.001 <= local_c) {
    if (*(float *)(param_1 + 0x2c) <= local_c) {
      local_c = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    local_c = 0.001;
  }
  fVar8 = local_c - local_8;
  iVar2 = *(int *)(param_1 + 0x18) * 4;
  fVar7 = (float)iVar2;
  if (iVar2 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  local_c = (float)param_3;
  *(float *)(param_1 + 0x34) = fVar8 / fVar7;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    local_c = (float)((int)local_c + -1);
    iVar2 = *(int *)(param_1 + 0x10) * 4;
    fVar8 = (float)iVar2;
    if (iVar2 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = ((fVar8 * *(float *)(param_1 + 0x34) + local_8) * 512.0) / *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x24) = fVar8;
    iVar2 = (int)ROUND(fVar8 - 0.5);
    fVar8 = (float)iVar2;
    if (iVar2 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    iVar5 = 4;
    do {
      uVar4 = *(uint *)(param_1 + 0x1c) & 0x1ff;
      fVar7 = *(float *)(*(int *)(param_1 + 0x80) + uVar4 * 4);
      fVar9 = *(float *)(param_1 + 0x20) + (*(float *)(param_1 + 0x24) - fVar8);
      iVar1 = *(uint *)(param_1 + 0x1c) + iVar2;
      fVar7 = (*(float *)(*(int *)(param_1 + 0x80) + (uVar4 + 1 & 0x1ff) * 4) - fVar7) *
              *(float *)(param_1 + 0x20) + fVar7;
      *(int *)(param_1 + 0x1c) = iVar1;
      *(float *)(param_1 + 0x20) = fVar9;
      if (1.0 < fVar9) {
        *(int *)(param_1 + 0x1c) = iVar1 + 1;
        *(float *)(param_1 + 0x20) = fVar9 - 1.0;
      }
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x1ff;
      iVar5 = iVar5 + -1;
      fVar9 = *(float *)(param_1 + 0xd8);
      fVar3 = *(float *)(param_1 + 0xe4);
      *(float *)(param_1 + 0xd8) = fVar7;
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe0);
      fVar10 = *(float *)(param_1 + 0xdc);
      *(float *)(param_1 + 0xdc) = fVar9;
      fVar10 = (*(float *)(param_1 + 0xc4) * fVar7 + fVar9 * *(float *)(param_1 + 200) +
               fVar10 * *(float *)(param_1 + 0xcc)) -
               (*(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd0) +
               fVar3 * *(float *)(param_1 + 0xd4));
      *(float *)(param_1 + 0xe0) = fVar10;
      fVar7 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xfc) = fVar10;
      fVar9 = *(float *)(param_1 + 0x100);
      fVar3 = *(float *)(param_1 + 0x108);
      *(float *)(param_1 + 0x100) = fVar7;
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x104);
      fVar7 = (fVar7 * *(float *)(param_1 + 0xec) + fVar10 * *(float *)(param_1 + 0xe8) +
              fVar9 * *(float *)(param_1 + 0xf0)) -
              (fVar3 * *(float *)(param_1 + 0xf8) +
              *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0xf4));
      *(float *)(param_1 + 0x104) = fVar7;
      fVar9 = (*(float *)(param_1 + 0x10c) * fVar7 +
               *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x120) +
              *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x114)) -
              (*(float *)(param_1 + 0x11c) * *(float *)(param_1 + 300) +
              *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x118));
      *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x120) = fVar7;
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x128) = fVar9;
    } while (iVar5 != 0);
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar8 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
            *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar8;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(float *)(param_1 + 0x144) * fVar8 * fVar9;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (local_c != 0.0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 01415130  FUN_01415130  size=1251  [run]
void __thiscall FUN_01415130(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_20;
  int local_10;
  
  fVar12 = *(float *)(*(int *)(param_1 + 0x130) + 8);
  fVar10 = *(float *)(*(int *)(param_1 + 0x130) + 0xc);
  fVar7 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar7;
  fVar9 = *(float *)(param_1 + 0x138);
  fVar8 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_20 = (undefined4)(longlong)ROUND(ABS(fVar8) / fVar9);
  *(undefined4 *)(param_1 + 0x14c) = local_20;
  if (fVar8 <= 0.0) {
    fVar9 = -fVar9;
  }
  *(float *)(param_1 + 0x13c) = fVar9;
  fVar12 = *(float *)(param_1 + 0x28) + fVar12;
  fVar10 = *(float *)(param_1 + 0x30) + fVar10;
  if (0.001 <= fVar12) {
    if (*(float *)(param_1 + 0x2c) <= fVar12) {
      fVar12 = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    fVar12 = 0.001;
  }
  if (0.001 <= fVar10) {
    if (*(float *)(param_1 + 0x2c) <= fVar10) {
      fVar10 = *(float *)(param_1 + 0x2c) - 1.0;
    }
  }
  else {
    fVar10 = 0.001;
  }
  if (fVar12 < fVar10) {
    fVar9 = (float)*(int *)(param_1 + 0x18);
    bVar4 = false;
    if (*(int *)(param_1 + 0x18) < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    fVar10 = (fVar10 - fVar12) / (fVar9 * 4.0 * fVar9 * 4.0);
  }
  else {
    bVar4 = true;
    fVar9 = (float)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    fVar10 = (fVar10 - fVar12) / SQRT(fVar9 * 4.0);
  }
  *(float *)(param_1 + 0x34) = fVar10;
  local_10 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    local_10 = local_10 + -1;
    iVar2 = *(int *)(param_1 + 0x10) * 4;
    fVar10 = (float)iVar2;
    if (iVar2 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    if (bVar4) {
      fVar10 = SQRT(fVar10) * *(float *)(param_1 + 0x34);
    }
    else {
      fVar10 = fVar10 * fVar10 * *(float *)(param_1 + 0x34);
    }
    fVar10 = ((fVar10 + fVar12) * 512.0) / *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x24) = fVar10;
    iVar2 = (int)ROUND(fVar10 - 0.5);
    fVar10 = (float)iVar2;
    if (iVar2 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    iVar6 = 4;
    do {
      uVar5 = *(uint *)(param_1 + 0x1c) & 0x1ff;
      fVar9 = *(float *)(*(int *)(param_1 + 0x80) + uVar5 * 4);
      fVar8 = *(float *)(param_1 + 0x20) + (*(float *)(param_1 + 0x24) - fVar10);
      iVar1 = *(uint *)(param_1 + 0x1c) + iVar2;
      fVar9 = (*(float *)(*(int *)(param_1 + 0x80) + (uVar5 + 1 & 0x1ff) * 4) - fVar9) *
              *(float *)(param_1 + 0x20) + fVar9;
      *(int *)(param_1 + 0x1c) = iVar1;
      *(float *)(param_1 + 0x20) = fVar8;
      if (1.0 < fVar8) {
        *(int *)(param_1 + 0x1c) = iVar1 + 1;
        *(float *)(param_1 + 0x20) = fVar8 - 1.0;
      }
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x1ff;
      iVar6 = iVar6 + -1;
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar3 = *(float *)(param_1 + 0xe4);
      *(float *)(param_1 + 0xd8) = fVar9;
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe0);
      fVar11 = *(float *)(param_1 + 0xdc);
      *(float *)(param_1 + 0xdc) = fVar8;
      fVar11 = (*(float *)(param_1 + 0xc4) * fVar9 + fVar8 * *(float *)(param_1 + 200) +
               fVar11 * *(float *)(param_1 + 0xcc)) -
               (*(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd0) +
               fVar3 * *(float *)(param_1 + 0xd4));
      *(float *)(param_1 + 0xe0) = fVar11;
      fVar9 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xfc) = fVar11;
      fVar8 = *(float *)(param_1 + 0x100);
      fVar3 = *(float *)(param_1 + 0x108);
      *(float *)(param_1 + 0x100) = fVar9;
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x104);
      fVar9 = (fVar9 * *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xe8) * fVar11 +
              fVar8 * *(float *)(param_1 + 0xf0)) -
              (fVar3 * *(float *)(param_1 + 0xf8) +
              *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0xf4));
      *(float *)(param_1 + 0x104) = fVar9;
      fVar8 = (*(float *)(param_1 + 0x10c) * fVar9 +
               *(float *)(param_1 + 0x120) * *(float *)(param_1 + 0x110) +
              *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x114)) -
              (*(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x118) +
              *(float *)(param_1 + 0x11c) * *(float *)(param_1 + 300));
      *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x120) = fVar9;
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x128) = fVar8;
    } while (iVar6 != 0);
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar10 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
             *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar10;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(float *)(param_1 + 0x144) * fVar10 * fVar8;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (local_10 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 01415620  FUN_01415620  size=448  [run]
void __thiscall FUN_01415620(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_14;
  
  fVar2 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar2;
  fVar4 = *(float *)(param_1 + 0x138);
  fVar3 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_14 = (undefined4)(longlong)ROUND(ABS(fVar3) / fVar4);
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  if (fVar3 <= 0.0) {
    fVar4 = -fVar4;
  }
  *(float *)(param_1 + 0x13c) = fVar4;
  iVar1 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  do {
    DAT_01b2b450 = DAT_01b2b450 * 0xbb38435 + 0x3619636b;
    fVar4 = (float)DAT_01b2b450;
    iVar1 = iVar1 + -1;
    if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
        *(uint *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
    }
    fVar3 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
            *(float *)(param_1 + 0x78);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    *(float *)(param_1 + 0x78) = fVar3;
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(float *)(param_1 + 0x144) * fVar3 * fVar4 * 4.656613e-10;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
  } while (iVar1 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

// 014157E0  FUN_014157e0  size=576  [run]
void __thiscall FUN_014157e0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_14;
  
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x140) = (float)fVar4;
  fVar6 = *(float *)(param_1 + 0x138);
  fVar5 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_14 = (undefined4)(longlong)ROUND(ABS(fVar5) / fVar6);
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  if (fVar5 <= 0.0) {
    fVar6 = -fVar6;
  }
  *(float *)(param_1 + 0x13c) = fVar6;
  iVar1 = param_3;
  if (param_3 != 0) {
    do {
      iVar3 = 0;
      iVar1 = iVar1 + -1;
      uVar2 = *(int *)(param_1 + 0x40) + 1U & *(uint *)(param_1 + 0x3c);
      *(uint *)(param_1 + 0x40) = uVar2;
      if (uVar2 != 0) {
        for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
          iVar3 = iVar3 + 1;
        }
        *(float *)(param_1 + 0x44) =
             *(float *)(param_1 + 0x44) - *(float *)(*(int *)(param_1 + 0x84) + iVar3 * 4);
        DAT_01b2b450 = DAT_01b2b450 * 0xbb38435 + 0x3619636b;
        fVar6 = (float)DAT_01b2b450;
        *(float *)(param_1 + 0x44) = fVar6 * 4.656613e-10 + *(float *)(param_1 + 0x44);
        *(float *)(*(int *)(param_1 + 0x84) + iVar3 * 4) = fVar6 * 4.656613e-10;
      }
      DAT_01b2b450 = DAT_01b2b450 * 0xbb38435 + 0x3619636b;
      fVar6 = (float)DAT_01b2b450;
      if (*(uint *)(param_1 + 100 + (uint)*(ushort *)(param_1 + 0x60) * 4) <=
          *(uint *)(param_1 + 0x74)) {
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) + 1;
      }
      fVar5 = *(float *)(param_1 + 0x50 + (uint)*(ushort *)(param_1 + 0x60) * 4) +
              *(float *)(param_1 + 0x78);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      *(float *)(param_1 + 0x78) = fVar5;
      if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x14c)) {
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) + 1;
        *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x144);
      }
      else {
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
      }
      fVar6 = fVar5 * (fVar6 * 4.656613e-10 + *(float *)(param_1 + 0x44)) *
                      *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x144);
      if (-1.0 < fVar6) {
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
      }
      else {
        fVar6 = -1.0;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      uVar2 = *(uint *)(param_1 + 0x10);
      *param_2 = fVar6;
      param_2 = param_2 + 1;
      if (*(uint *)(param_1 + 0x18) <= uVar2) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
        if ((*(int *)(param_1 + 0xa4) == 1) || (*(short *)(param_1 + 8) == 1)) {
          *(undefined4 *)(param_1 + 0x78) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
        }
      }
    } while (iVar1 != 0);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}

// 01415A20  FUN_01415a20  size=20  [run]
void FUN_01415a20(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01415A40  FUN_01415a40  size=20  [run]
void FUN_01415a40(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01415A60  FUN_01415a60  size=20  [run]
void FUN_01415a60(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01415A80  FUN_01415a80  size=27  [run]
undefined4 FUN_01415a80(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01415AC0  FUN_01415ac0  size=39  [run]
undefined4 __thiscall FUN_01415ac0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01415B10  FUN_01415b10  size=317  [run]
undefined4 * __fastcall FUN_01415b10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180f08c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  _memset(param_1 + 3,0,0x2c);
  _memset(param_1 + 0xe,0,0x2c);
  return param_1;
}

// 01415C50  FUN_01415c50  size=55  [run]
void __thiscall FUN_01415c50(int param_1,uint param_2)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (((byte)param_2 & 7) == 7)) {
    param_2 = param_2 & 0xfffffffb;
  }
  if (*(char *)(param_1 + 0x35) == '\0') {
    param_2 = param_2 & 0xfffffff7;
  }
  FUN_01417020(param_2,*(undefined4 *)(param_1 + 100),param_1 + 0x10);
  return;
}

// 01415C90  FUN_01415c90  size=74  [run]
void __thiscall FUN_01415c90(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x61) != *(char *)(param_1 + 0x35)) ||
     (*(char *)(param_1 + 0x60) != *(char *)(param_1 + 0x34))) {
    uVar1 = *(uint *)(param_2 + 4);
    if ((*(char *)(param_1 + 0x34) == '\0') && (((byte)uVar1 & 7) == 7)) {
      uVar1 = uVar1 & 0xfffffffb;
    }
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar1 = uVar1 & 0xfffffff7;
    }
    FUN_01417020(uVar1,*(undefined4 *)(param_1 + 100),param_1 + 0x10);
  }
  return;
}

// 01415CE0  FUN_01415ce0  size=2821  [run]
/* WARNING: Removing unreachable block (ram,0x01415d83) */

void __thiscall FUN_01415ce0(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_68;
  float local_5c;
  uint local_1c;
  int local_14;
  
  if (*(int *)(param_1 + 0xf8) != 0) {
    pfVar14 = *(float **)(param_1 + 4);
    pfVar15 = (float *)(param_1 + 0xc);
    pfVar16 = pfVar15;
    for (iVar11 = 0xb; pfVar14 = pfVar14 + 1, iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar16 = *pfVar14;
      pfVar16 = pfVar16 + 1;
    }
    FUN_01417110(0);
    if (*(char *)(param_1 + 0x36) != '\0') {
      FUN_01415c90(param_2);
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_01416e30(*(undefined4 *)(param_1 + 100),param_1 + 0x10);
    }
    uVar10 = param_2[1];
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar10 = uVar10 & 0xfffffff7;
    }
    if ((*(char *)(param_1 + 0x34) != '\0') || (bVar9 = true, ((byte)uVar10 & 7) != 7)) {
      bVar9 = false;
    }
    uVar4 = *(ushort *)((int)param_2 + 0xe);
    fVar2 = *(float *)(param_1 + 0x38);
    fVar24 = (float)uVar4;
    fVar3 = *(float *)(param_1 + 0x58);
    uVar12 = 0;
    fVar23 = (*pfVar15 - fVar2) / fVar24;
    fVar24 = (*(float *)(param_1 + 0x2c) - fVar3) / fVar24;
    for (; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
      uVar12 = uVar12 + 1;
    }
    local_14 = 0;
    local_1c = 0;
    if (uVar12 != 0) {
      do {
        if ((!bVar9) || (local_1c != 2)) {
          pfVar14 = (float *)(*param_2 + *(ushort *)(param_2 + 3) * local_1c * 4);
          pfVar16 = pfVar14 + uVar4;
          fVar5 = *(float *)(param_1 + 0x7c + local_14 * 0x18);
          pfVar1 = (float *)(param_1 + 0x68 + local_14 * 0x18);
          local_68 = *pfVar1;
          fVar6 = pfVar1[1];
          fVar7 = pfVar1[2];
          local_5c = pfVar1[3];
          fVar8 = pfVar1[4];
          switch(fVar5) {
          case 0.0:
            if (pfVar14 < pfVar16) {
              fVar20 = (float10)fVar2;
              fVar17 = (float10)fVar3;
              fVar18 = (float10)local_5c;
              do {
                pfVar13 = pfVar14 + 1;
                fVar20 = fVar20 + (float10)fVar23;
                fVar17 = fVar17 + (float10)fVar24;
                fVar18 = (float10)fVar8 + fVar18;
                fVar19 = (float10)fsin(fVar18);
                *pfVar14 = (float)((((float10)1 - fVar20) +
                                   (fVar19 + (float10)1) * fVar20 * (float10)0.5) * fVar17 *
                                  (float10)*pfVar14);
                pfVar14 = pfVar13;
              } while (pfVar13 < pfVar16);
              local_5c = (float)fVar18;
            }
            break;
          case 1.4013e-45:
            if (pfVar14 < pfVar16) {
              iVar11 = (int)pfVar16 + (3 - (int)pfVar14);
              fVar21 = fVar2;
              fVar25 = fVar3;
              if (3 < (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) {
                do {
                  local_5c = fVar8 + local_5c;
                  fVar21 = fVar21 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar22 = local_5c;
                  if (0.5 < local_5c) {
                    fVar22 = 1.0 - local_5c;
                  }
                  fVar26 = fVar22 * 2.0 * fVar21 * fVar6 - fVar7 * local_68;
                  fVar22 = fVar25 + fVar24 + fVar24;
                  local_5c = fVar8 + local_5c;
                  *pfVar14 = ((1.0 - fVar21) + fVar26) * (fVar25 + fVar24) * *pfVar14;
                  fVar21 = fVar21 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar25 = local_5c;
                  if (0.5 < local_5c) {
                    fVar25 = 1.0 - local_5c;
                  }
                  fVar25 = fVar25 * 2.0 * fVar21 * fVar6 - fVar7 * fVar26;
                  fVar26 = fVar21 + fVar23;
                  pfVar14[1] = ((1.0 - fVar21) + fVar25) * fVar22 * pfVar14[1];
                  local_5c = fVar8 + local_5c;
                  fVar22 = fVar22 + fVar24;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar21 = local_5c;
                  if (0.5 < local_5c) {
                    fVar21 = 1.0 - local_5c;
                  }
                  fVar27 = fVar21 * 2.0 * fVar26 * fVar6 - fVar7 * fVar25;
                  local_5c = fVar8 + local_5c;
                  pfVar14[2] = ((1.0 - fVar26) + fVar27) * fVar22 * pfVar14[2];
                  fVar21 = fVar26 + fVar23;
                  fVar25 = fVar22 + fVar24;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar22 = local_5c;
                  if (0.5 < local_5c) {
                    fVar22 = 1.0 - local_5c;
                  }
                  local_68 = fVar22 * 2.0 * fVar21 * fVar6 - fVar7 * fVar27;
                  pfVar14[3] = ((1.0 - fVar21) + local_68) * fVar25 * pfVar14[3];
                  pfVar14 = pfVar14 + 4;
                } while ((int)pfVar14 < (int)(pfVar16 + -3));
              }
              for (; pfVar14 < pfVar16; pfVar14 = pfVar14 + 1) {
                local_5c = fVar8 + local_5c;
                fVar21 = fVar21 + fVar23;
                if (1.0 <= local_5c) {
                  local_5c = local_5c - 1.0;
                }
                fVar22 = local_5c;
                if (0.5 < local_5c) {
                  fVar22 = 1.0 - local_5c;
                }
                local_68 = fVar22 * 2.0 * fVar21 * fVar6 - fVar7 * local_68;
                *pfVar14 = ((1.0 - fVar21) + local_68) * (fVar25 + fVar24) * *pfVar14;
                fVar25 = fVar25 + fVar24;
              }
            }
            break;
          case 2.8026e-45:
            fVar21 = *(float *)(param_1 + 0x1c);
            if (pfVar14 < pfVar16) {
              iVar11 = (int)pfVar16 + (3 - (int)pfVar14);
              fVar25 = fVar2;
              fVar22 = fVar3;
              if (3 < (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) {
                do {
                  local_5c = fVar8 + local_5c;
                  fVar25 = fVar25 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar26 = fVar25;
                  if (fVar21 < local_5c) {
                    fVar26 = 0.0;
                  }
                  fVar27 = fVar26 * fVar6 - fVar7 * local_68;
                  *pfVar14 = ((1.0 - fVar25) + fVar27) * (fVar22 + fVar24) * *pfVar14;
                  local_5c = fVar8 + local_5c;
                  fVar26 = fVar22 + fVar24 + fVar24;
                  fVar25 = fVar25 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar22 = fVar25;
                  if (fVar21 < local_5c) {
                    fVar22 = 0.0;
                  }
                  fVar27 = fVar22 * fVar6 - fVar27 * fVar7;
                  fVar22 = fVar26 + fVar24;
                  local_5c = fVar8 + local_5c;
                  pfVar14[1] = ((1.0 - fVar25) + fVar27) * fVar26 * pfVar14[1];
                  fVar25 = fVar25 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar26 = fVar25;
                  if (fVar21 < local_5c) {
                    fVar26 = 0.0;
                  }
                  fVar26 = fVar26 * fVar6 - fVar27 * fVar7;
                  pfVar14[2] = ((1.0 - fVar25) + fVar26) * fVar22 * pfVar14[2];
                  local_5c = fVar8 + local_5c;
                  fVar25 = fVar25 + fVar23;
                  fVar22 = fVar22 + fVar24;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar27 = fVar25;
                  if (fVar21 < local_5c) {
                    fVar27 = 0.0;
                  }
                  local_68 = fVar27 * fVar6 - fVar26 * fVar7;
                  pfVar14[3] = ((1.0 - fVar25) + local_68) * fVar22 * pfVar14[3];
                  pfVar14 = pfVar14 + 4;
                } while ((int)pfVar14 < (int)(pfVar16 + -3));
              }
              for (; pfVar14 < pfVar16; pfVar14 = pfVar14 + 1) {
                local_5c = fVar8 + local_5c;
                fVar25 = fVar25 + fVar23;
                if (1.0 <= local_5c) {
                  local_5c = local_5c - 1.0;
                }
                fVar26 = fVar25;
                if (fVar21 < local_5c) {
                  fVar26 = 0.0;
                }
                local_68 = fVar26 * fVar6 - fVar7 * local_68;
                *pfVar14 = ((1.0 - fVar25) + local_68) * (fVar22 + fVar24) * *pfVar14;
                fVar22 = fVar22 + fVar24;
              }
            }
            break;
          case 4.2039e-45:
            if (pfVar14 < pfVar16) {
              iVar11 = (int)pfVar16 + (3 - (int)pfVar14);
              fVar21 = fVar2;
              fVar25 = fVar3;
              if (3 < (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) {
                do {
                  local_5c = fVar8 + local_5c;
                  fVar21 = fVar21 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar26 = local_5c * fVar21 * fVar6 - fVar7 * local_68;
                  fVar22 = fVar21 + fVar23;
                  *pfVar14 = ((1.0 - fVar21) + fVar26) * (fVar25 + fVar24) * *pfVar14;
                  local_5c = fVar8 + local_5c;
                  fVar21 = fVar25 + fVar24 + fVar24;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar25 = local_5c * fVar22 * fVar6 - fVar26 * fVar7;
                  fVar26 = fVar21 + fVar24;
                  local_5c = fVar8 + local_5c;
                  pfVar14[1] = ((1.0 - fVar22) + fVar25) * fVar21 * pfVar14[1];
                  fVar22 = fVar22 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar27 = local_5c * fVar22 * fVar6 - fVar25 * fVar7;
                  fVar21 = fVar22 + fVar23;
                  fVar25 = fVar26 + fVar24;
                  pfVar14[2] = ((1.0 - fVar22) + fVar27) * fVar26 * pfVar14[2];
                  local_5c = fVar8 + local_5c;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  local_68 = local_5c * fVar21 * fVar6 - fVar27 * fVar7;
                  pfVar14[3] = ((1.0 - fVar21) + local_68) * fVar25 * pfVar14[3];
                  pfVar14 = pfVar14 + 4;
                } while ((int)pfVar14 < (int)(pfVar16 + -3));
              }
              for (; pfVar14 < pfVar16; pfVar14 = pfVar14 + 1) {
                local_5c = fVar8 + local_5c;
                fVar21 = fVar21 + fVar23;
                if (1.0 <= local_5c) {
                  local_5c = local_5c - 1.0;
                }
                local_68 = local_5c * fVar21 * fVar6 - fVar7 * local_68;
                *pfVar14 = ((1.0 - fVar21) + local_68) * (fVar25 + fVar24) * *pfVar14;
                fVar25 = fVar25 + fVar24;
              }
            }
            break;
          case 5.60519e-45:
            if (pfVar14 < pfVar16) {
              iVar11 = (int)pfVar16 + (3 - (int)pfVar14);
              fVar21 = fVar2;
              fVar25 = fVar3;
              if (3 < (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) {
                do {
                  local_5c = fVar8 + local_5c;
                  fVar21 = fVar21 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar26 = (1.0 - local_5c) * fVar21 * fVar6 - fVar7 * local_68;
                  fVar22 = fVar21 + fVar23;
                  *pfVar14 = ((1.0 - fVar21) + fVar26) * (fVar25 + fVar24) * *pfVar14;
                  local_5c = fVar8 + local_5c;
                  fVar21 = fVar25 + fVar24 + fVar24;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar25 = (1.0 - local_5c) * fVar22 * fVar6 - fVar26 * fVar7;
                  fVar26 = fVar21 + fVar24;
                  local_5c = fVar8 + local_5c;
                  pfVar14[1] = ((1.0 - fVar22) + fVar25) * fVar21 * pfVar14[1];
                  fVar22 = fVar22 + fVar23;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  fVar27 = (1.0 - local_5c) * fVar22 * fVar6 - fVar25 * fVar7;
                  fVar21 = fVar22 + fVar23;
                  fVar25 = fVar26 + fVar24;
                  pfVar14[2] = ((1.0 - fVar22) + fVar27) * fVar26 * pfVar14[2];
                  local_5c = fVar8 + local_5c;
                  if (1.0 <= local_5c) {
                    local_5c = local_5c - 1.0;
                  }
                  local_68 = (1.0 - local_5c) * fVar21 * fVar6 - fVar27 * fVar7;
                  pfVar14[3] = ((1.0 - fVar21) + local_68) * fVar25 * pfVar14[3];
                  pfVar14 = pfVar14 + 4;
                } while ((int)pfVar14 < (int)(pfVar16 + -3));
              }
              for (; pfVar14 < pfVar16; pfVar14 = pfVar14 + 1) {
                local_5c = fVar8 + local_5c;
                fVar21 = fVar21 + fVar23;
                if (1.0 <= local_5c) {
                  local_5c = local_5c - 1.0;
                }
                local_68 = (1.0 - local_5c) * fVar21 * fVar6 - fVar7 * local_68;
                *pfVar14 = ((1.0 - fVar21) + local_68) * (fVar25 + fVar24) * *pfVar14;
                fVar25 = fVar25 + fVar24;
              }
            }
          }
          *pfVar1 = local_68;
          pfVar1[1] = fVar6;
          pfVar1[2] = fVar7;
          pfVar1[3] = local_5c;
          pfVar1[4] = fVar8;
          pfVar1[5] = fVar5;
          fVar20 = (float10)FUN_00fe090a();
          pfVar1[3] = (float)fVar20;
          local_14 = local_14 + 1;
        }
        local_1c = local_1c + 1;
      } while (local_1c < uVar12);
    }
    pfVar14 = (float *)(param_1 + 0x38);
    for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar14 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      pfVar14 = pfVar14 + 1;
    }
  }
  return;
}

// 01416810  FUN_01416810  size=34  [run]
undefined4 FUN_01416810(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))(0xfc);
  if (iVar1 != 0) {
    uVar2 = FUN_01415b10();
    return uVar2;
  }
  return 0;
}

// 01416840  FUN_01416840  size=128  [run]
undefined4 __thiscall
FUN_01416840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 **)(param_1 + 4) = param_4;
  puVar3 = (undefined4 *)(param_1 + 0xc);
  for (iVar2 = 0xb; param_4 = param_4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    puVar3 = puVar3 + 1;
  }
  FUN_01417110(0);
  puVar3 = (undefined4 *)(param_1 + 0xc);
  puVar4 = (undefined4 *)(param_1 + 0x38);
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 100) = *param_5;
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = param_5[1] & 0x3ffff;
  if ((*(char *)(param_1 + 0x34) == '\0') && (((byte)uVar1 & 7) == 7)) {
    uVar1 = param_5[1] & 0x3fffb;
  }
  if (*(char *)(param_1 + 0x35) == '\0') {
    uVar1 = uVar1 & 0xfffffff7;
  }
  FUN_01417020(uVar1,*(undefined4 *)(param_1 + 100),param_1 + 0x10);
  return 1;
}

// 014168C0  FUN_014168c0  size=35  [run]
void __thiscall FUN_014168c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0xb; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_2 = param_2 + 1;
  }
  FUN_01417110(0);
  return;
}

// 014168F0  FUN_014168f0  size=48  [run]
float10 FUN_014168f0(int param_1,float param_2)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar2;
  fVar1 = (float10)fsin((float10)fVar2);
  return (fVar1 + (float10)1.0) * (float10)param_2 * (float10)0.5;
}

// 01416920  FUN_01416920  size=102  [run]
float10 FUN_01416920(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  fVar2 = fVar1;
  if (0.5 < fVar1) {
    fVar2 = 1.0 - fVar1;
  }
  param_1[3] = fVar1;
  fVar1 = fVar2 * 2.0 * param_2 * param_1[1] - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 01416990  FUN_01416990  size=88  [run]
float10 FUN_01416990(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  if (param_3 < fVar1) {
    param_2 = 0.0;
  }
  param_1[3] = fVar1;
  fVar1 = param_1[1] * param_2 - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 014169F0  FUN_014169f0  size=75  [run]
float10 FUN_014169f0(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  param_1[3] = fVar1;
  fVar1 = fVar1 * param_2 * param_1[1] - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 01416A40  FUN_01416a40  size=79  [run]
float10 FUN_01416a40(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  param_1[3] = fVar1;
  fVar1 = (1.0 - fVar1) * param_2 * param_1[1] - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 01416AC0  FUN_01416ac0  size=16  [run]
int __thiscall FUN_01416ac0(int param_1,int param_2)

{
  return param_1 + param_2 * 0x18;
}

// 01416AD0  FUN_01416ad0  size=44  [run]
void __thiscall FUN_01416ad0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  return;
}

// 01416B00  FUN_01416b00  size=86  [run]
void __thiscall FUN_01416b00(undefined4 *param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  if (param_2[5] == 0) {
    fVar1 = (float10)FUN_00fe090a();
    param_1[3] = (float)fVar1;
    return;
  }
  fVar1 = (float10)FUN_00fe090a();
  param_1[3] = (float)fVar1;
  return;
}

// 01416B90  FUN_01416b90  size=168  [run]
void __thiscall
FUN_01416b90(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)param_2;
  if (param_2 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar1 = (float)param_3[1];
  *(float *)(param_1 + 0x10) = fVar1 / fVar3;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = (fVar1 / fVar3) * 6.2831855;
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  iVar2 = *param_3;
  if (*(int *)(param_1 + 0x14) == iVar2) {
    *(int *)(param_1 + 0x14) = iVar2;
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.15915494;
    *(int *)(param_1 + 0x14) = *param_3;
    return;
  }
  if (iVar2 == 0) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 6.2831855;
    *(int *)(param_1 + 0x14) = *param_3;
    return;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}

// 01416C40  FUN_01416c40  size=154  [run]
void __thiscall
FUN_01416c40(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(float *)(param_3 + 8) == (float)(undefined *)0x0) {
    FUN_01358a40(0,0,0,param_4,param_5,param_1);
    return;
  }
  fVar1 = (float10)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  fVar2 = (float10)log2((fVar1 * (float10)0.5) / (float10)*(float *)(param_3 + 4));
  fVar3 = (float10)1.4426950408889634 *
          -((float10)0.6931471805599453 * fVar2 * (float10)*(float *)(param_3 + 8));
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  FUN_01358a40(1,(float)(fVar2 * fVar1 * (float10)0.5),param_2,param_4,param_5);
  return;
}

// 01416CE0  FUN_01416ce0  size=61  [run]
void FUN_01416ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  uVar1 = param_1;
  FUN_01416c40(param_1,param_2,&param_1,&param_2);
  FUN_01416b90(uVar1,uVar2,param_1,param_2);
  return;
}

// 01416D20  FUN_01416d20  size=35  [run]
void FUN_01416d20(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01416E30  FUN_01416e30  size=209  [run]
void __thiscall FUN_01416e30(float param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float local_8;
  
  pfVar2 = param_3;
  local_8 = param_1;
  FUN_01416c40(param_2,param_3,&local_8,&param_3);
  uVar4 = 0;
  if (*(int *)((int)param_1 + 0x90) != 0) {
    fVar1 = (float)param_2;
    if (param_2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    pfVar3 = (float *)((int)param_1 + 0xc);
    do {
      fVar5 = pfVar2[1] * (1.0 / fVar1);
      pfVar3[1] = fVar5;
      if (*pfVar2 == 0.0) {
        pfVar3[1] = fVar5 * 6.2831855;
      }
      pfVar3[-2] = local_8;
      pfVar3[-1] = (float)param_3;
      if (pfVar3[2] != *pfVar2) {
        if (pfVar3[2] == 0.0) {
          fVar5 = *pfVar3 * 0.15915494;
        }
        else {
          if (*pfVar2 != 0.0) goto LAB_01416eed;
          fVar5 = *pfVar3 * 6.2831855;
        }
        *pfVar3 = fVar5;
      }
LAB_01416eed:
      pfVar3[2] = *pfVar2;
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 6;
    } while (uVar4 < *(uint *)((int)param_1 + 0x90));
  }
  return;
}

// 01416F10  FUN_01416f10  size=260  [run]
void __thiscall FUN_01416f10(undefined4 *param_1,undefined4 param_2,int *param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  float fVar5;
  float local_10;
  
  piVar3 = param_3;
  uVar2 = param_2;
  FUN_01416c40(param_2,param_3,&param_2,&param_3);
  FUN_01416b90(uVar2,piVar3,param_2,param_3);
  iVar1 = param_1[5];
  if (*piVar3 == 0) {
    fVar5 = 6.2831855;
  }
  else {
    fVar5 = 1.0;
  }
  local_10 = fVar5 * param_4 * 0.0027777778;
  if (iVar1 == 1) {
    local_10 = local_10 + 0.25;
  }
  else if (iVar1 == 3) {
    local_10 = local_10 + 0.5;
  }
  if (local_10 < 0.0) {
    local_10 = local_10 + fVar5;
  }
  if (fVar5 <= local_10) {
    local_10 = local_10 - fVar5;
  }
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = local_10;
  param_1[4] = param_1[4];
  param_1[5] = iVar1;
  if (iVar1 != 0) {
    fVar4 = (float10)FUN_00fe090a();
    param_1[3] = (float)fVar4;
    return;
  }
  fVar4 = (float10)FUN_00fe090a();
  param_1[3] = (float)fVar4;
  return;
}

// 01417020  FUN_01417020  size=127  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_01417020(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 extraout_ECX_00;
  uint auStack_20 [4];
  
  iVar1 = 0;
  for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x90) = iVar1;
  if (iVar1 != 0) {
    auStack_20[3] = 0x141704e;
    auStack_20[3 - iVar1] = (uint)(&stack0xfffffff0 + iVar1 * -4);
    auStack_20[2 - iVar1] = param_4 + 0x10;
    auStack_20[1 - iVar1] = param_2;
    auStack_20[-iVar1] = 0x1417061;
    FUN_01358b40();
    uVar2 = 0;
    uVar3 = extraout_ECX;
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        auStack_20[3 - iVar1] = uVar3;
        auStack_20[3 - iVar1] = *(undefined4 *)(&stack0xfffffff0 + uVar2 * 4 + iVar1 * -4);
        auStack_20[2 - iVar1] = param_4;
        auStack_20[1 - iVar1] = param_3;
        auStack_20[-iVar1] = 0x1417089;
        FUN_01416f10();
        uVar2 = uVar2 + 1;
        uVar3 = extraout_ECX_00;
      } while (uVar2 < *(uint *)(param_1 + 0x90));
    }
  }
  return;
}

// 014170B0  FUN_014170b0  size=34  [run]
undefined4 * __thiscall FUN_014170b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 014170E0  FUN_014170e0  size=13  [run]
void __thiscall FUN_014170e0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}

// 014170F0  FUN_014170f0  size=13  [run]
void __thiscall FUN_014170f0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}

// 01417110  FUN_01417110  size=16  [run]
void __thiscall FUN_01417110(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2e) = param_2;
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}

// 01417120  FUN_01417120  size=109  [run]
void __thiscall FUN_01417120(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    param_1[1] = 0x3f800000;
    param_1[2] = 0;
    param_1[3] = 0x3f800000;
    param_1[4] = 0;
    param_1[5] = 0x3f000000;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[9] = 0x3f800000;
    *(undefined2 *)(param_1 + 0xb) = 0x101;
    *(undefined1 *)((int)param_1 + 0x2e) = 1;
    *(undefined1 *)(param_1 + 10) = 1;
    return;
  }
  (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return;
}

// 01417190  FUN_01417190  size=361  [run]
undefined4 __thiscall FUN_01417190(int param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  undefined4 local_c;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 1:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(float *)(param_1 + 4) = fVar1 * 0.01;
      return 1;
    case 2:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(float *)(param_1 + 0xc) = fVar1;
      return 1;
    case 3:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      local_c = (undefined4)(longlong)ROUND(fVar1);
      *(undefined4 *)(param_1 + 8) = local_c;
      return 1;
    case 4:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(float *)(param_1 + 0x10) = fVar1 * 0.01;
      return 1;
    case 5:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(float *)(param_1 + 0x14) = fVar1 * 0.01;
      return 1;
    case 6:
      *(float *)(param_1 + 0x18) = *param_3;
      return 1;
    case 7:
      local_c = (undefined4)(longlong)ROUND(*param_3);
      *(undefined4 *)(param_1 + 0x20) = local_c;
      return 1;
    case 8:
      *(float *)(param_1 + 0x1c) = *param_3;
      return 1;
    case 9:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x24) = (float)fVar3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return 1;
    case 10:
      cVar2 = *(char *)param_3;
      *(undefined1 *)(param_1 + 0x2e) = 1;
      *(bool *)(param_1 + 0x2c) = cVar2 != '\0';
      return 1;
    case 0xb:
      cVar2 = *(char *)param_3;
      *(undefined1 *)(param_1 + 0x2e) = 1;
      *(bool *)(param_1 + 0x2d) = cVar2 != '\0';
    }
    return 1;
  }
  return 0x1f;
}

// 01417330  FUN_01417330  size=43  [run]
void __thiscall FUN_01417330(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0xb;
  *param_1 = &PTR_FUN_0180f0c4;
  puVar2 = param_1;
  while( true ) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar2 = *param_2;
  }
  *(undefined1 *)((int)param_1 + 0x2e) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}

// 01417360  FUN_01417360  size=63  [run]
undefined4 * __thiscall FUN_01417360(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0xb;
    *puVar1 = &PTR_FUN_0180f0c4;
    puVar3 = puVar1;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *puVar3 = *param_1;
    }
    *(undefined1 *)((int)puVar1 + 0x2e) = 1;
    *(undefined1 *)(puVar1 + 10) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 014173A0  FUN_014173a0  size=39  [run]
undefined4 __thiscall FUN_014173a0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 014173D0  FUN_014173d0  size=207  [run]
void __thiscall FUN_014173d0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  float10 fVar5;
  
  fVar1 = *param_2;
  *(float *)(param_1 + 4) = fVar1;
  *(float *)(param_1 + 0xc) = param_2[1];
  *(float *)(param_1 + 8) = param_2[2];
  fVar2 = param_2[3];
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = param_2[4];
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = param_2[5];
  *(float *)(param_1 + 0x20) = param_2[6];
  *(float *)(param_1 + 0x1c) = param_2[7];
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x24) = (float)fVar5;
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 9);
  uVar4 = *(undefined1 *)((int)param_2 + 0x25);
  *(float *)(param_1 + 4) = fVar1 * 0.01;
  *(float *)(param_1 + 0x10) = fVar2 * 0.01;
  *(undefined1 *)(param_1 + 0x2d) = uVar4;
  *(float *)(param_1 + 0x14) = fVar3 * 0.01;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}

// 014174B0  FUN_014174b0  size=31  [run]
undefined4 * FUN_014174b0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180f0c4;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 014174D0  FUN_014174d0  size=35  [run]
void FUN_014174d0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01417500  FUN_01417500  size=34  [run]
undefined4 * __thiscall FUN_01417500(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01417540  FUN_01417540  size=11  [run]
undefined2 FUN_01417540(undefined2 *param_1)

{
  return *param_1;
}

// 01417550  FUN_01417550  size=28  [run]
void FUN_01417550(ushort *param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  *param_4 = param_2;
  param_4[1] = (uint)uVar1;
  *(undefined1 *)(param_4 + 2) = param_3;
  return;
}

// 01417570  FUN_01417570  size=183  [run]
undefined4 FUN_01417570(int param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    *param_3 = 0;
    *param_4 = *(int *)(param_1 + 0x8c);
    return 1;
  }
  puVar2 = *(ushort **)(param_1 + 0xa8);
  uVar5 = *(uint *)(param_1 + 0x88) >> 2;
  if ((puVar2 == (ushort *)0x0) || (uVar5 == 0)) {
    return 2;
  }
  iVar4 = 0;
  uVar3 = 0;
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      uVar1 = *puVar2 + uVar6;
      if (param_2 < uVar1) break;
      iVar4 = iVar4 + (uint)puVar2[1];
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 2;
      uVar6 = uVar1;
    } while (uVar3 < uVar5);
    if (uVar3 != 0) {
      *param_4 = *(uint *)(param_1 + 0x88) + iVar4;
      *param_3 = uVar6;
      return 1;
    }
  }
  *param_4 = *(int *)(param_1 + 0x8c);
  *param_3 = 0;
  return 1;
}

// 01417630  FUN_01417630  size=58  [run]
void __thiscall FUN_01417630(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x30) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xe6);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xda);
  }
  FUN_014190a0(param_1 + 100,param_2,uVar1);
  *(undefined4 *)(param_1 + 0x5c) = 3;
  return;
}

// 01417670  FUN_01417670  size=98  [run]
void __thiscall FUN_01417670(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(int *)(param_2 + 0x330) = iVar1;
  if (iVar1 != 2) {
    FUN_013fc440(*(undefined4 *)(param_1 + 0xbc),*(undefined2 *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xc0),param_2);
    if ((*(int *)(param_2 + 0x330) == 0x2e) && (*(int *)(param_1 + 0x38) != 0)) {
      *(uint *)(param_2 + 0x330) = (-(uint)(*(int *)(param_1 + 0x60) != 0) & 0x2b) + 2;
    }
  }
  return;
}

// 014176E0  FUN_014176e0  size=118  [run]
int __thiscall FUN_014176e0(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  }
  if (1 < *(ushort *)(param_1 + 0x30)) {
    *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) - 1;
  }
  if (param_2 == '\0') {
    if (*(short *)(param_1 + 0x30) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xe6);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xda);
    }
    FUN_014190a0(param_1 + 100,*(undefined2 *)(param_1 + 0xd8),uVar1);
    *(undefined4 *)(param_1 + 0x5c) = 3;
    *(undefined4 *)(param_1 + 0x58) = 0x2d;
  }
  return (-(uint)(param_2 != '\0') & 0xffffffe4) + 0x2d;
}

// 01417760  FUN_01417760  size=73  [run]
void __fastcall FUN_01417760(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar1 = 0;
    for (uVar2 = *(uint *)(param_1 + 0xc0); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      iVar1 = iVar1 + 1;
    }
    FUN_013c4c40(iVar1 << 0xb,*(int *)(param_1 + 0xbc));
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}

// 014177E0  FUN_014177e0  size=127  [run]
undefined4 __thiscall FUN_014177e0(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_013fd210(param_2,param_3);
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar2 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar2 + 0x11e) & 0x10) == 0) {
      iVar4 = *(int *)(iVar2 + 0x114);
    }
    else {
      iVar4 = 0;
    }
    *(byte *)(iVar2 + 0x11e) = *(byte *)(iVar2 + 0x11e) & 0x8f;
    *(undefined4 *)(iVar2 + 0x114) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar4;
    if (*(short *)(param_1 + 0x30) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xe6);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xda);
    }
    FUN_014190a0(param_1 + 100,iVar4,uVar1);
    *(undefined4 *)(param_1 + 0x5c) = 3;
  }
  return uVar3;
}

// 01417890  FUN_01417890  size=55  [run]
undefined4 __fastcall FUN_01417890(int param_1)

{
  void *pvVar1;
  
  if (*(uint *)(param_1 + 0xdc) != 0) {
    pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,*(uint *)(param_1 + 0xdc));
    *(void **)(param_1 + 0xfc) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return 1;
}

// 014178D0  FUN_014178d0  size=474  [run]
int __thiscall FUN_014178d0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  float local_24 [3];
  undefined1 local_17;
  undefined1 local_14 [4];
  short *local_10;
  short *local_c;
  short *local_8;
  
  iVar3 = FUN_013fc700(param_2,*(undefined4 *)(param_1 + 0x3c),local_14,param_1 + 0x28,
                       param_1 + 0x20,param_1 + 0x24,param_1 + 0x18,param_1 + 0x1c,0);
  if (iVar3 == 1) {
    if (*local_10 != -1) {
      return 7;
    }
    local_8 = local_10 + 2;
    uVar1 = local_10[1];
    uVar2 = *(uint *)(local_10 + 10);
    iVar3 = *(int *)(param_1 + 8);
    local_c = local_10;
    *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(local_10 + 2);
    *(uint *)(iVar3 + 0x74) = (uVar1 & 0xf) << 0x19 | uVar2 & 0x3ffff | 0x400000;
    FUN_013a13f0();
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(local_10 + 0xc);
    if (local_10 == (short *)0xffffffe8) {
      psVar6 = (short *)0x0;
    }
    else {
      psVar6 = local_10 + 0xe;
    }
    iVar3 = *(int *)(param_1 + 0x20);
    psVar7 = (short *)(param_1 + 0xd0);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      psVar7 = psVar7 + 2;
    }
    *psVar7 = *psVar6;
    *(uint *)(param_1 + 0xc0) = *(uint *)(local_10 + 10);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)local_8;
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x24) == 0)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x10) + -1;
    }
    if (*(short *)(param_1 + 0x30) == 1) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    }
    else {
      *(int *)(param_1 + 0x48) =
           *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xd0);
      *(int *)(param_1 + 0x4c) =
           *(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xdc);
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(local_24);
    FUN_013fcc60(*(short *)(param_1 + 0x30) != 1,local_24);
    local_24[0] = (float)*(int *)(local_c + 4);
    if (*(int *)(local_c + 4) < 0) {
      local_24[0] = local_24[0] + 4.2949673e+09;
    }
    local_24[0] = local_24[0] * 0.001;
    local_17 = (undefined1)(int)*(float *)(*(int *)(param_1 + 8) + 0x120);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(local_24);
    if (*(uint *)(param_1 + 0xdc) != 0) {
      pvVar4 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,*(uint *)(param_1 + 0xdc));
      *(void **)(param_1 + 0xfc) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 0x34;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 1;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x18))((uint)*(ushort *)(param_1 + 0xe4) * 2);
  }
  return iVar3;
}

// 01417AB0  FUN_01417ab0  size=58  [run]
undefined4 __thiscall FUN_01417ab0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_01417570(param_1 + 0x54,param_2,param_3,param_4);
  if (iVar1 == 2) {
    return 2;
  }
  *param_4 = *param_4 + *(int *)(param_1 + 0x1c);
  return 1;
}

// 01417AF0  FUN_01417af0  size=57  [run]
void __fastcall FUN_01417af0(int param_1)

{
  if (*(void **)(param_1 + 0x104) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined2 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10a) = 0;
  }
  return;
}

// 01417B30  FUN_01417b30  size=398  [run]
int __thiscall FUN_01417b30(int param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  
  do {
    if (*(int *)(param_1 + 0x3c) == 0) {
      bVar1 = *(byte *)(param_1 + 0x52);
      if ((bVar1 & 1) != 0) {
        return 0x11;
      }
      if ((bVar1 & 2) == 0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 0x40))();
      }
      else {
        *(byte *)(param_1 + 0x52) = bVar1 & 0xfd;
      }
      iVar4 = FUN_013fcf30();
      if (iVar4 != 0x2d) {
        return iVar4;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x118);
    if (uVar3 < 2) {
      uVar7 = *(uint *)(param_1 + 0x3c);
      if (uVar7 != 0) {
        if (2 - uVar3 <= uVar7) {
          uVar7 = 2 - uVar3;
        }
        FID_conflict__memcpy((void *)(uVar3 + 0x10e + param_1),*(void **)(param_1 + 0x38),uVar7);
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + uVar7;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar7;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - uVar7;
        if (*(int *)(param_1 + 0x118) == 2) goto LAB_01417bc8;
      }
    }
    else {
LAB_01417bc8:
      if (*(int *)(param_1 + 0x114) == 0) {
        if (*(void **)(param_1 + 0x110) != (void *)0x0) {
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x110));
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
        pvVar5 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(uint)*(ushort *)(param_1 + 0x10e));
        *(void **)(param_1 + 0x110) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          return 0x34;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x114);
      if ((uVar3 < *(ushort *)(param_1 + 0x10e)) && (uVar7 = *(uint *)(param_1 + 0x3c), uVar7 != 0))
      {
        uVar6 = *(ushort *)(param_1 + 0x10e) - uVar3;
        if (uVar6 <= uVar7) {
          uVar7 = uVar6;
        }
        FID_conflict__memcpy
                  ((void *)(*(int *)(param_1 + 0x110) + uVar3),*(void **)(param_1 + 0x38),uVar7);
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + uVar7;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar7;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - uVar7;
      }
    }
    if ((*(int *)(param_1 + 0x118) == 2) &&
       (*(uint *)(param_1 + 0x114) == (uint)*(ushort *)(param_1 + 0x10e))) {
      uVar2 = *(ushort *)(param_1 + 0x10e);
      *param_2 = *(undefined4 *)(param_1 + 0x110);
      param_2[1] = (uint)uVar2;
      *(undefined1 *)(param_2 + 2) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      return 0x2d;
    }
  } while( true );
}

// 01417CE0  FUN_01417ce0  size=163  [run]
int __fastcall FUN_01417ce0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_013fd0a0();
  if (iVar3 == 1) {
    if (*(void **)(param_1 + 0x104) != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x104));
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined2 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10a) = 0;
    }
    iVar2 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar2 + 0x11e) & 0x10) == 0) {
      iVar4 = *(int *)(iVar2 + 0x114);
    }
    else {
      iVar4 = 0;
    }
    *(byte *)(iVar2 + 0x11e) = *(byte *)(iVar2 + 0x11e) & 0x8f;
    *(undefined4 *)(iVar2 + 0x114) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar4;
    if (*(short *)(param_1 + 0x30) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xe6);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xda);
    }
    FUN_014190a0(param_1 + 100,iVar4,uVar1);
    *(undefined4 *)(param_1 + 0x5c) = 3;
  }
  return iVar3;
}

// 01417D90  FUN_01417d90  size=86  [run]
undefined4 * __thiscall FUN_01417d90(undefined4 *param_1,undefined4 param_2)

{
  FUN_013fca30(param_2);
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *param_1 = &PTR_FUN_0180f0e0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  _memset(param_1 + 0x15,0,0xb0);
  return param_1;
}

// 01417DF0  FUN_01417df0  size=42  [run]
void __fastcall FUN_01417df0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180f0e0;
  FUN_01417760();
  if (param_1[0x1d] != 0) {
    FUN_01419760(param_1 + 0x15);
  }
  FUN_013fcc90();
  return;
}

// 01417E20  FUN_01417e20  size=666  [run]
void __thiscall FUN_01417e20(int param_1,int param_2)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    iVar4 = FUN_013f42e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c));
    if (iVar4 != 0x2d) {
      *(int *)(param_2 + 0x330) = iVar4;
      return;
    }
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfd;
  }
  *(uint *)(param_1 + 0xc4) = (uint)*(ushort *)(param_2 + 0xc);
  uVar7 = *(uint *)(param_1 + 0x3c);
  if ((uVar7 < *(ushort *)(param_1 + 0xe4) + 2) && ((*(byte *)(param_1 + 0x52) & 1) == 0)) {
    if ((uVar7 != 0) && ((*(int *)(param_1 + 0x104) == 0 && (*(short *)(param_1 + 0x50) == 0)))) {
      _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,*(ushort *)(param_1 + 0xe4) + 2 + uVar7);
      *(void **)(param_1 + 0x104) = _Dst;
      if (_Dst == (void *)0x0) goto LAB_01417f9e;
      uVar1 = *(undefined2 *)(param_1 + 0x3c);
      *(undefined2 *)(param_1 + 0x108) = uVar1;
      *(undefined2 *)(param_1 + 0x10c) = uVar1;
      *(undefined2 *)(param_1 + 0x10a) = uVar1;
      FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x38),*(size_t *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      if ((*(byte *)(param_1 + 0x52) & 2) == 0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 0x40))();
      }
      else {
        *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfd;
      }
      iVar4 = FUN_013fcf30();
      *(int *)(param_2 + 0x330) = iVar4;
      if (iVar4 == 2) {
        return;
      }
      if ((iVar4 == 0x2d) && (*(int *)(param_1 + 0x104) != 0)) {
        uVar5 = *(ushort *)(param_1 + 0xe4) + 2;
        uVar7 = *(uint *)(param_1 + 0x3c);
        if (uVar5 < *(uint *)(param_1 + 0x3c)) {
          uVar7 = uVar5;
        }
        FID_conflict__memcpy
                  ((void *)((uint)*(ushort *)(param_1 + 0x108) + *(int *)(param_1 + 0x104)),
                   *(void **)(param_1 + 0x38),uVar7);
        *(short *)(param_1 + 0x10c) = *(short *)(param_1 + 0x10c) + (short)uVar7;
        *(short *)(param_1 + 0x10a) = *(short *)(param_1 + 0x10a) + (short)uVar7;
      }
    }
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar4 = FUN_013c4bf0(*(int *)(param_1 + 0x70) << 0xb);
    *(int *)(param_1 + 0xbc) = iVar4;
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (iVar4 == 0) {
LAB_01417f9e:
      *(undefined4 *)(param_2 + 0x330) = 2;
      return;
    }
  }
  if ((*(short *)(param_1 + 0x50) == 0) && ((*(byte *)(param_1 + 0x52) & 1) == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(param_1 + 0xcc) = cVar2;
  if (*(int *)(param_1 + 0x104) == 0) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x3c);
    FUN_01419a90(param_1 + 0x54,*(undefined2 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0xbc));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x60);
  }
  else {
    if ((cVar2 == '\0') ||
       (((uint)*(ushort *)(param_1 + 0x108) - (uint)*(ushort *)(param_1 + 0x10a)) +
        *(int *)(param_1 + 0x3c) != 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0xcc) = uVar3;
    *(uint *)(param_1 + 200) = (uint)*(ushort *)(param_1 + 0x10c);
    FUN_01419a90(param_1 + 0x54,*(undefined2 *)(param_1 + 0xe4),
                 ((uint)*(ushort *)(param_1 + 0x10a) - (uint)*(ushort *)(param_1 + 0x10c)) +
                 *(int *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0xbc));
    *(short *)(param_1 + 0x10c) = *(short *)(param_1 + 0x10c) - *(short *)(param_1 + 0x60);
    uVar6 = *(short *)(param_1 + 0x10a) - *(short *)(param_1 + 0x10c);
    if (*(ushort *)(param_1 + 0x108) <= uVar6) {
      iVar4 = (uint)uVar6 - (uint)*(ushort *)(param_1 + 0x108);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar4;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar4;
      FUN_01417af0();
      FUN_01417670(param_2);
      return;
    }
  }
  FUN_01417670(param_2);
  return;
}

// 014180C0  FUN_014180c0  size=156  [run]
void __fastcall FUN_014180c0(int *param_1)

{
  FUN_01419190(param_1 + 0x19);
  (**(code **)(*param_1 + 8))();
  if ((void *)param_1[0x3f] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x3f]);
    param_1[0x3f] = 0;
  }
  if ((void *)param_1[0x41] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x41]);
    param_1[0x41] = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined4 *)((int)param_1 + 0x10a) = 0;
  }
  if ((void *)param_1[0x44] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x44]);
    param_1[0x44] = 0;
  }
  FUN_013fcb40();
  return;
}

// 01418160  FUN_01418160  size=83  [run]
void __thiscall FUN_01418160(int param_1,int param_2)

{
  FUN_013fcbb0(param_2);
  if (((param_2 == 0) || (param_2 == 1)) && (*(void **)(param_1 + 0x104) != (void *)0x0)) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined2 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10a) = 0;
  }
  return;
}

// 014181C0  FUN_014181c0  size=281  [run]
char __fastcall FUN_014181c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 local_10 [12];
  
  iVar3 = *(int *)(param_1 + 0x5c);
  do {
    if (2 < iVar3) {
      iVar3 = 0;
      for (uVar5 = *(uint *)(param_1 + 0xc0); uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = FUN_014190d0(param_1 + 100,iVar3);
      return (iVar3 != 0) + '\x01';
    }
    uVar5 = *(uint *)(param_1 + 0x3c);
    if (uVar5 == 0) {
      return '?';
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    if (1 < iVar3) goto joined_r0x01418240;
    uVar1 = *(uint *)(param_1 + 0x100);
    if (uVar1 < *(uint *)(param_1 + 0xdc)) {
      uVar2 = *(uint *)(param_1 + 0xdc) - uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = uVar2;
      }
      FID_conflict__memcpy
                ((void *)(*(int *)(param_1 + 0xfc) + uVar1),*(void **)(param_1 + 0x38),uVar5);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + uVar5;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar5;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - uVar5;
    }
    if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 0xdc)) {
      iVar3 = *(int *)(param_1 + 0x5c);
      goto joined_r0x01418240;
    }
    *(undefined4 *)(param_1 + 0x5c) = 2;
    do {
      iVar3 = FUN_01417b30(local_10);
      if (iVar3 == 0x2e) {
        return '?';
      }
      if ((((iVar3 == 2) || (iVar3 == 0x11)) || (iVar3 == 0x34)) ||
         (puVar4 = (undefined4 *)FUN_01419830(param_1 + 0x54,*(undefined4 *)(param_1 + 8),local_10),
         puVar4 == (undefined4 *)0x0)) {
        return '\x02';
      }
      *(undefined4 *)(param_1 + 0x74) = *puVar4;
      *(undefined4 *)(param_1 + 0x5c) = 3;
      iVar3 = *(int *)(param_1 + 0x5c);
joined_r0x01418240:
    } while (iVar3 == 2);
    iVar3 = *(int *)(param_1 + 0x5c);
  } while( true );
}

// 014182E0  FUN_014182e0  size=347  [run]
int __fastcall FUN_014182e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_8;
  
  *(byte *)(param_1 + 3) =
       *(byte *)(param_1 + 3) ^
       (*(char *)(param_1[2] + 0x11e) * '\x02' ^ *(byte *)(param_1 + 3)) & 2;
  piVar1 = param_1 + 0xf;
  local_8 = param_1;
  iVar3 = (**(code **)(*(int *)param_1[0xd] + 0x3c))(&local_8,piVar1,0);
  if (iVar3 == 0x2e) {
    return 0x3f;
  }
  if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
    return 2;
  }
  if (param_1[0x17] == 0) {
    iVar3 = (**(code **)(*param_1 + 0x44))(local_8);
    if (iVar3 != 1) {
      return iVar3;
    }
    param_1[5] = 0;
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1[2] + 0x118);
    iVar3 = FUN_013fccc0(local_8);
    if (iVar3 != 1) {
      return iVar3;
    }
    param_1[0xe] = param_1[0xe] + param_1[7];
    *piVar1 = *piVar1 - param_1[7];
  }
  else {
    iVar3 = FUN_013fccc0(local_8);
    if (iVar3 != 1) {
      return iVar3;
    }
  }
  iVar3 = FUN_014181c0();
  if (iVar3 == 1) {
    iVar4 = 0;
    if ((*(byte *)(param_1[2] + 0x11e) & 0x10) != 0) {
      iVar3 = FUN_013fd050();
      if (*piVar1 != 0) {
        FUN_013f4330();
        param_1[0xe] = 0;
        *piVar1 = 0;
      }
      iVar2 = param_1[2];
      if ((*(byte *)(iVar2 + 0x11e) & 0x10) == 0) {
        iVar4 = *(int *)(iVar2 + 0x114);
      }
      else {
        iVar4 = 0;
      }
      *(byte *)(iVar2 + 0x11e) = *(byte *)(iVar2 + 0x11e) & 0x8f;
      *(undefined4 *)(iVar2 + 0x114) = 0;
      param_1[5] = param_1[5] + iVar4;
    }
    FUN_01417630(iVar4);
    *(byte *)((int)param_1 + 0x52) = *(byte *)((int)param_1 + 0x52) | 4;
  }
  else if ((iVar3 == 0x3f) && (*piVar1 == 0)) {
    FUN_013f4330();
    param_1[0xe] = 0;
    return 0x3f;
  }
  return iVar3;
}

// 01418440  FUN_01418440  size=119  [run]
undefined4 * FUN_01418440(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x11c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_013fca30(param_1);
    *puVar1 = &PTR_FUN_0180f0e0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    _memset(puVar1 + 0x15,0,0xb0);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 014184C0  FUN_014184c0  size=66  [run]
undefined4 * __thiscall FUN_014184c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0180f0e0;
  FUN_01417760();
  if (param_1[0x1d] != 0) {
    FUN_01419760(param_1 + 0x15);
  }
  FUN_013fcc90();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01418510  FUN_01418510  size=266  [run]
int __fastcall FUN_01418510(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  if ((*(byte *)(param_1 + 0x52) & 4) == 0) {
    if ((*(int *)(param_1 + 0x34) == 0) || (2 < *(int *)(param_1 + 0x5c))) {
      local_14 = 0;
      local_10 = 0x800;
      local_c = 0;
      iVar1 = FUN_013fca70(&local_14,0);
      if ((iVar1 == 1) &&
         ((iVar1 = FUN_013fce90(&local_5), iVar1 == 1 &&
          (iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x2c))(), iVar1 == 1)))) {
        if (local_5 == '\0') {
          iVar1 = FUN_014182e0();
          if (iVar1 == 1) {
            iVar1 = FUN_013fca00();
            return iVar1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x118);
          iVar1 = FUN_014181c0();
          if (iVar1 == 1) {
            FUN_01417630(0);
          }
        }
      }
    }
    else {
      iVar1 = FUN_014182e0();
      if (iVar1 == 1) {
        iVar1 = FUN_013fca00();
        return iVar1;
      }
    }
    return iVar1;
  }
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    iVar1 = FUN_013f42e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0x2e) {
      return 0x3f;
    }
    if (iVar1 != 0x2d) {
      return iVar1;
    }
  }
  return 1;
}

// 01418620  FUN_01418620  size=183  [run]
undefined4 FUN_01418620(int param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    *param_3 = 0;
    *param_4 = *(int *)(param_1 + 0x8c);
    return 1;
  }
  puVar2 = *(ushort **)(param_1 + 0xa8);
  uVar5 = *(uint *)(param_1 + 0x88) >> 2;
  if ((puVar2 == (ushort *)0x0) || (uVar5 == 0)) {
    return 2;
  }
  iVar4 = 0;
  uVar3 = 0;
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      uVar1 = *puVar2 + uVar6;
      if (param_2 < uVar1) break;
      iVar4 = iVar4 + (uint)puVar2[1];
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 2;
      uVar6 = uVar1;
    } while (uVar3 < uVar5);
    if (uVar3 != 0) {
      *param_4 = *(uint *)(param_1 + 0x88) + iVar4;
      *param_3 = uVar6;
      return 1;
    }
  }
  *param_4 = *(int *)(param_1 + 0x8c);
  *param_3 = 0;
  return 1;
}

// 014186E0  FUN_014186e0  size=58  [run]
void __thiscall FUN_014186e0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x30) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xc6);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xba);
  }
  FUN_014190a0(param_1 + 0x44,param_2,uVar1);
  *(undefined4 *)(param_1 + 0x3c) = 3;
  return;
}

// 01418720  FUN_01418720  size=37  [run]
void __fastcall FUN_01418720(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180f130;
  if (param_1[0x15] != 0) {
    FUN_01419760(param_1 + 0xd);
  }
  FUN_013fc290();
  return;
}

// 01418750  FUN_01418750  size=73  [run]
void __fastcall FUN_01418750(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar1 = 0;
    for (uVar2 = *(uint *)(param_1 + 0xa0); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      iVar1 = iVar1 + 1;
    }
    FUN_013c4c40(iVar1 << 0xb,*(int *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}

// 014187C0  FUN_014187c0  size=69  [run]
undefined4 __thiscall FUN_014187c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01418620(param_1 + 0x34,*param_2,param_2,&param_2);
  if (iVar1 != 1) {
    return 2;
  }
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe8) + (int)param_2;
  return 1;
}

// 01418840  FUN_01418840  size=55  [run]
undefined4 __fastcall FUN_01418840(int param_1)

{
  void *pvVar1;
  
  if (*(uint *)(param_1 + 0xbc) != 0) {
    pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,*(uint *)(param_1 + 0xbc));
    *(void **)(param_1 + 0xdc) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  return 1;
}

// 014188D0  FUN_014188d0  size=143  [run]
undefined4 __fastcall FUN_014188d0(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    return 2;
  }
  uVar2 = FUN_013fc4f0();
  if ((uVar2 < *(uint *)(param_1 + 0x10)) &&
     (local_8 = uVar2, iVar3 = FUN_01418620(param_1 + 0x34,uVar2,&local_8,&local_c), iVar3 == 1)) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe8) + local_c;
    *(uint *)(param_1 + 0x14) = local_8;
    iVar3 = *(int *)(param_1 + 8);
    pbVar1 = (byte *)(iVar3 + 0x11e);
    *pbVar1 = *pbVar1 & 0x8f;
    *(uint *)(iVar3 + 0x114) = uVar2 - local_8;
    return 1;
  }
  return 2;
}

// 01418960  FUN_01418960  size=102  [run]
undefined4 __fastcall FUN_01418960(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_014188d0();
  iVar2 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar2 + 0x11e) & 0x10) == 0) {
    iVar4 = *(int *)(iVar2 + 0x114);
  }
  else {
    iVar4 = 0;
  }
  *(byte *)(iVar2 + 0x11e) = *(byte *)(iVar2 + 0x11e) & 0x8f;
  *(undefined4 *)(iVar2 + 0x114) = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar4;
  if (*(short *)(param_1 + 0x30) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xc6);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xba);
  }
  FUN_014190a0(param_1 + 0x44,iVar4,uVar1);
  *(undefined4 *)(param_1 + 0x3c) = 3;
  return uVar3;
}

// 014189D0  FUN_014189d0  size=129  [run]
int __thiscall FUN_014189d0(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (1 < *(ushort *)(param_1 + 0x30)) {
    *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) - 1;
  }
  if (param_2 == '\0') {
    *(int *)(param_1 + 0xe4) =
         *(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xb0);
    if (*(short *)(param_1 + 0x30) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xc6);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xba);
    }
    FUN_014190a0(param_1 + 0x44,*(undefined2 *)(param_1 + 0xb8),uVar1);
    *(undefined4 *)(param_1 + 0x3c) = 3;
    *(undefined4 *)(param_1 + 0x38) = 0x2d;
  }
  return (-(uint)(param_2 != '\0') & 0xffffffe4) + 0x2d;
}

// 01418A60  FUN_01418a60  size=60  [run]
undefined4 * __thiscall FUN_01418a60(undefined4 *param_1,undefined4 param_2)

{
  FUN_013fc630(param_2);
  *param_1 = &PTR_FUN_0180f130;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  _memset(param_1 + 0xd,0,0xb0);
  return param_1;
}

// 01418AA0  FUN_01418aa0  size=61  [run]
undefined4 * __thiscall FUN_01418aa0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0180f130;
  if (param_1[0x15] != 0) {
    FUN_01419760(param_1 + 0xd);
  }
  FUN_013fc290();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01418AE0  FUN_01418ae0  size=225  [run]
void __thiscall FUN_01418ae0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar1 = FUN_013c4bf0(*(int *)(param_1 + 0x50) << 0xb);
    *(int *)(param_1 + 0x9c) = iVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x330) = 2;
      return;
    }
  }
  *(uint *)(param_1 + 0xa4) = (uint)*(ushort *)(param_2 + 0xc);
  if (*(short *)(param_1 + 0x30) == 1) {
    iVar1 = *(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0x18);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xb4);
  }
  *(int *)(param_1 + 0xa8) = iVar1 - *(int *)(param_1 + 0xe4);
  *(undefined1 *)(param_1 + 0xac) = 1;
  FUN_01419a90((undefined2 *)(param_1 + 0x34),*(undefined2 *)(param_1 + 0xc4),
               *(int *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x9c));
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_2 + 0x330) = iVar1;
  if (iVar1 != 2) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0x40);
    FUN_013fc440(*(undefined4 *)(param_1 + 0x9c),*(undefined2 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xa0),param_2);
  }
  return;
}

// 01418BD0  FUN_01418bd0  size=68  [run]
void __fastcall FUN_01418bd0(int *param_1)

{
  FUN_01419190(param_1 + 0x11);
  (**(code **)(*param_1 + 8))();
  if ((void *)param_1[0x37] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x37]);
    param_1[0x37] = 0;
  }
  FUN_013fc050();
  return;
}

// 01418C20  FUN_01418c20  size=237  [run]
undefined4 __thiscall FUN_01418c20(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar4 = 0;
  if (param_2 == 1) {
    if ((char)param_3 == '\0') {
      puVar1 = (undefined4 *)(param_1 + 0x14);
      iVar4 = FUN_01418620(param_1 + 0x34,*(undefined4 *)(param_1 + 0x14),puVar1,&param_3);
      if (iVar4 == 1) {
        uVar5 = 1;
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe8) + param_3;
      }
      else {
        *puVar1 = 0;
        uVar5 = FUN_014187c0(puVar1);
      }
    }
    else {
      uVar5 = FUN_014188d0();
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar3 + 0x11e) & 0x10) == 0) {
      iVar4 = *(int *)(iVar3 + 0x114);
    }
    else {
      iVar4 = 0;
    }
    *(byte *)(iVar3 + 0x11e) = *(byte *)(iVar3 + 0x11e) & 0x8f;
    *(undefined4 *)(iVar3 + 0x114) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar4;
  }
  else {
    if (param_2 != 0) {
      return 1;
    }
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x118);
  }
  if (*(short *)(param_1 + 0x30) == 1) {
    uVar2 = *(undefined2 *)(param_1 + 0xc6);
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + 0xba);
  }
  FUN_014190a0(param_1 + 0x44,iVar4,uVar2);
  *(undefined4 *)(param_1 + 0x3c) = 3;
  return uVar5;
}

// 01418D10  FUN_01418d10  size=234  [run]
undefined4 __fastcall FUN_01418d10(int param_1)

{
  ushort *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  ushort *local_10;
  uint local_c;
  undefined1 local_8;
  
  if (*(uint *)(param_1 + 0xbc) != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,*(uint *)(param_1 + 0xbc));
    *(void **)(param_1 + 0xdc) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0x34;
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (*(size_t *)(param_1 + 0xbc) != 0) {
    FID_conflict__memcpy
              (*(void **)(param_1 + 0xdc),*(void **)(param_1 + 0xe4),*(size_t *)(param_1 + 0xbc));
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xbc);
  }
  puVar1 = *(ushort **)(param_1 + 0xe4);
  local_c = (uint)*puVar1;
  local_10 = puVar1 + 1;
  *(uint *)(param_1 + 0xe4) = (int)puVar1 + local_c + 2;
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_01419830(param_1 + 0x34,*(undefined4 *)(param_1 + 8),&local_10);
  if (puVar3 != (undefined4 *)0x0) {
    uVar4 = *(uint *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x54) = *puVar3;
    iVar5 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = FUN_014190d0(param_1 + 0x44,iVar5);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 3;
      return 1;
    }
  }
  return 2;
}

// 01418E00  FUN_01418e00  size=95  [run]
undefined4 * FUN_01418e00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0xec);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_013fc630(param_1);
    *puVar1 = &PTR_FUN_0180f130;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    _memset(puVar1 + 0xd,0,0xb0);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01418E60  FUN_01418e60  size=406  [run]
int __fastcall FUN_01418e60(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  undefined1 local_20 [4];
  short *local_1c;
  int local_18;
  uint *local_14;
  short *local_10;
  short *local_c;
  int local_8;
  
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x138);
  local_8 = *(int *)(*(int *)(param_1 + 8) + 0x13c);
  if (iVar5 == 0) {
    return 2;
  }
  iVar4 = FUN_013fc700(iVar5,local_8,local_20,param_1 + 0x28,param_1 + 0x20,param_1 + 0x24,
                       param_1 + 0x18,(int *)(param_1 + 0x1c),0);
  if (iVar4 == 1) {
    if (*local_1c != -1) {
      return 7;
    }
    local_10 = local_1c + 2;
    local_c = local_1c;
    local_14 = (uint *)(local_1c + 10);
    uVar2 = local_1c[1];
    uVar3 = *local_14;
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(local_1c + 2);
    *(uint *)(iVar4 + 0x74) = (uVar2 & 0xf) << 0x19 | uVar3 & 0x3ffff | 0x400000;
    FUN_013a13f0();
    local_18 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0xe8) = local_18 + iVar5;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(local_c + 0xc);
    if (local_c + 0xc == (short *)0x0) {
      psVar7 = (short *)0x0;
    }
    else {
      psVar7 = local_c + 0xe;
    }
    iVar4 = *(int *)(param_1 + 0x24);
    psVar8 = (short *)(param_1 + 0xb0);
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
      psVar7 = psVar7 + 2;
      psVar8 = psVar8 + 2;
    }
    *psVar8 = *psVar7;
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)local_10;
    *(uint *)(param_1 + 0xa0) = *local_14;
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x10) + -1;
    }
    if (((*(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 0x24)) &&
        (*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x10))) &&
       (local_8 == *(int *)(param_1 + 0x18) + local_18)) {
      *(int *)(param_1 + 0xe4) = local_18 + iVar5;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x118);
      iVar5 = FUN_01418d10();
      if (iVar5 == 1) {
        iVar4 = 0;
        if ((*(byte *)(*(int *)(param_1 + 8) + 0x11e) & 0x10) != 0) {
          iVar5 = FUN_014188d0();
          iVar6 = *(int *)(param_1 + 8);
          iVar4 = FUN_013eb9a0();
          pbVar1 = (byte *)(iVar6 + 0x11e);
          *pbVar1 = *pbVar1 & 0x8f;
          *(undefined4 *)(iVar6 + 0x114) = 0;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar4;
        }
        FUN_014186e0(iVar4);
      }
      return iVar5;
    }
    iVar4 = 2;
  }
  return iVar4;
}

// 014190A0  FUN_014190a0  size=35  [run]
undefined4 FUN_014190a0(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x54) = param_2;
  *(undefined2 *)(param_1 + 0x56) = param_3;
  return 0;
}

// 014190D0  FUN_014190d0  size=188  [run]
undefined4 FUN_014190d0(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0xc) = param_2;
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  uVar1 = (iVar4 >> 1) * param_2 * 4 + 0xf;
  uVar3 = (iVar4 >> 2) * param_2 * 4 + 0xfU & 0xfffffff0;
  uVar6 = uVar1 & 0xfffffff0;
  if (uVar3 + uVar6 != 0) {
    _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,uVar3 + uVar6);
    if (_Dst != (void *)0x0) {
      local_8 = (int)_Dst + uVar6;
      _memset(_Dst,0,uVar3 + uVar6);
      lVar2 = (longlong)param_2;
      iVar4 = (int)uVar3 / param_2;
      if (0 < param_2) {
        piVar5 = (int *)(param_1 + 0x2c);
        do {
          piVar5[-6] = (int)_Dst;
          *piVar5 = local_8;
          local_8 = local_8 + iVar4;
          _Dst = (void *)((int)_Dst +
                         (int)((longlong)((longlong)(int)uVar1 & 0xfffffffffffffff0U) / lVar2));
          piVar5 = piVar5 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

// 01419190  FUN_01419190  size=39  [run]
void FUN_01419190(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 014191C0  FUN_014191c0  size=70  [run]
undefined * FUN_014191c0(void)

{
  int in_EAX;
  
  if (in_EAX < 0x201) {
    if (in_EAX == 0x200) {
      return &DAT_01b2ba58;
    }
    if (in_EAX == 0x80) {
      return &DAT_01b2b458;
    }
    if (in_EAX == 0x100) {
      return &DAT_01b2b658;
    }
  }
  else {
    if (in_EAX == 0x400) {
      return &DAT_01b2c258;
    }
    if (in_EAX == 0x800) {
      return &DAT_01b2d258;
    }
  }
  return (undefined *)0x0;
}

// 01419210  FUN_01419210  size=195  [run]
int FUN_01419210(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x48)) {
    iVar3 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44);
    if (param_2 != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x10);
      param_1 = iVar3;
      if (param_3 < iVar3) {
        param_1 = param_3;
      }
      uVar4 = FUN_014191c0();
      uVar5 = FUN_014191c0();
      iVar3 = *(int *)(iVar2 + 0xc);
      local_c = 0;
      puVar6 = (undefined4 *)(iVar2 + 0x14);
      local_8 = extraout_ECX;
      do {
        FUN_0141b8f0(*puVar1,puVar1[1],*(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50),
                     *puVar6,puVar6[6],uVar4,uVar5,local_8,iVar3,*(int *)(iVar2 + 0x44),
                     param_1 + *(int *)(iVar2 + 0x44));
        iVar3 = *(int *)(iVar2 + 0xc);
        local_8 = local_8 + 2;
        local_c = local_c + 1;
        puVar6 = puVar6 + 1;
      } while (local_c < iVar3);
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + param_1;
      iVar3 = param_1;
    }
    param_1 = iVar3;
    return param_1;
  }
  return 0;
}

// 014192E0  FUN_014192e0  size=305  [run]
void FUN_014192e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort uVar6;
  undefined4 *puVar7;
  
  puVar4 = param_1;
  iVar1 = param_1[4];
  *param_1 = 0;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  iVar5 = FUN_0141c270(param_1,1);
  iVar2 = param_1[0x14];
  param_1[0x13] = iVar2;
  param_1[0x14] = (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + iVar5 * 2);
  iVar2 = *(int *)(iVar1 + iVar2 * 4);
  param_1 = (undefined4 *)0x0;
  puVar7 = puVar4 + 5;
  do {
    FUN_0141b8c0(iVar2,*puVar7,puVar7[6]);
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar7 = puVar7 + 1;
  } while ((int)param_1 < (int)puVar4[3]);
  if (puVar4[0x11] == -1) {
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    if (*(int *)(iVar1 + 4) / 2 <= (int)(uint)*(ushort *)(puVar4 + 0x15)) {
      return;
    }
  }
  else {
    puVar4[0x11] = 0;
    iVar3 = *(int *)(iVar1 + puVar4[0x14] * 4);
    puVar4[0x12] = ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                   ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
    uVar6 = *(ushort *)(puVar4 + 0x15);
    if (uVar6 != 0) {
      iVar2 = puVar4[0x12];
      puVar4[0x11] = (uint)uVar6;
      if (iVar2 < (int)(uint)uVar6) {
        uVar6 = uVar6 - (short)iVar2;
        puVar4[0x11] = iVar2;
        *(ushort *)(puVar4 + 0x15) = uVar6;
        if (*(int *)(iVar1 + 4) / 2 <= (int)(uint)uVar6) {
          return;
        }
      }
      else {
        *(undefined2 *)(puVar4 + 0x15) = 0;
      }
    }
    if (*(char *)(param_2 + 2) != '\0') {
      puVar4[0x12] = puVar4[0x12] - (uint)*(ushort *)((int)puVar4 + 0x56);
      if ((int)puVar4[0x12] < (int)puVar4[0x11]) {
        puVar4[0x12] = puVar4[0x11];
      }
    }
  }
  FUN_0141bee0(puVar4,*(int *)(iVar1 + 0x20) +
                      (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + 1 + iVar5 * 2) * 0x14);
  return;
}

// 01419430  FUN_01419430  size=46  [run]
bool __thiscall FUN_01419430(undefined4 *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,param_2);
  param_1[3] = param_2;
  *param_1 = pvVar1;
  param_1[1] = pvVar1;
  return pvVar1 != (void *)0x0;
}

// 01419460  FUN_01419460  size=53  [run]
void __fastcall FUN_01419460(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)*param_1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
  }
  return;
}

// 014194A0  FUN_014194a0  size=50  [run]
int __thiscall FUN_014194a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar2 = param_2 + 3U & 0xfffffffc;
    uVar3 = *(int *)(param_1 + 8) + uVar2;
    if (uVar3 <= *(uint *)(param_1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 8) = uVar3;
      *(uint *)(param_1 + 4) = uVar2 + iVar1;
      return iVar1;
    }
  }
  return 0;
}

// 01419520  FUN_01419520  size=17  [run]
void FUN_01419520(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 01419570  FUN_01419570  size=21  [run]
undefined4 __thiscall FUN_01419570(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 8) != *(int *)(param_2 + 8));
}

// 01419590  FUN_01419590  size=45  [run]
void __thiscall FUN_01419590(int param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    return;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_3 + 4);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
  return;
}

// 014195C0  FUN_014195c0  size=8  [run]
undefined4 FUN_014195c0(undefined4 param_1)

{
  return param_1;
}

// 014195D0  FUN_014195d0  size=25  [run]
void FUN_014195d0(long param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    AK::MemoryMgr::Free(param_1,param_2);
  }
  return;
}

// 01419610  FUN_01419610  size=92  [run]
int * __thiscall FUN_01419610(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  param_2[1] = param_3 % 0x1f;
  uVar1 = *(uint *)(param_1 + (param_3 % 0x1f) * 4);
  *param_2 = param_1;
  param_2[2] = uVar1;
  param_2[3] = 0;
  while ((uVar1 != 0 && (puVar2 = (uint *)param_2[2], *puVar2 != param_3))) {
    param_2[3] = (int)puVar2;
    uVar1 = puVar2[1];
    param_2[2] = uVar1;
  }
  return param_2;
}

// 01419670  FUN_01419670  size=55  [run]
void __thiscall FUN_01419670(int param_1,uint *param_2)

{
  param_2[1] = *(uint *)(param_1 + (*param_2 % 0x1f) * 4);
  *(uint **)(param_1 + (*param_2 % 0x1f) * 4) = param_2;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  return;
}

// 014196B0  FUN_014196b0  size=122  [run]
void __thiscall FUN_014196b0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3[2];
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = *param_3;
  iVar4 = param_3[1];
  iVar5 = param_3[3];
  *param_2 = iVar3;
  param_2[1] = iVar4;
  param_2[2] = iVar2;
  param_2[3] = iVar5;
  while (iVar2 == 0) {
    param_2[1] = param_2[1] + 1;
    if (0x1e < (uint)param_2[1]) break;
    iVar2 = *(int *)(iVar3 + param_2[1] * 4);
    param_2[3] = 0;
    param_2[2] = iVar2;
  }
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    return;
  }
  *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(iVar1 + 4);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
  return;
}

// 01419730  FUN_01419730  size=33  [run]
int * __thiscall FUN_01419730(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + param_3 * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = (int *)piVar1[1];
  }
  return piVar1;
}

// 01419760  FUN_01419760  size=123  [run]
void FUN_01419760(int param_1)

{
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  void *local_c;
  
  FUN_01419610(local_14,*(undefined4 *)(param_1 + 0x9c));
  if ((local_c != (void *)0x0) &&
     (*(int *)((int)local_c + 0x18) = *(int *)((int)local_c + 0x18) + -1,
     *(int *)((int)local_c + 0x18) < 1)) {
    FUN_014196b0(local_24,local_14);
    if (*(void **)((int)local_c + 8) != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)((int)local_c + 8));
      *(undefined4 *)((int)local_c + 0xc) = 0;
      *(undefined4 *)((int)local_c + 0x10) = 0;
      *(undefined4 *)((int)local_c + 0x14) = 0;
      *(undefined4 *)((int)local_c + 8) = 0;
    }
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,local_c);
  }
  return;
}

// 014197E0  FUN_014197e0  size=63  [run]
uint * __thiscall FUN_014197e0(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + (param_2 % 0x1f) * 4);
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    if (*puVar1 == param_2) break;
    puVar1 = (uint *)puVar1[1];
  }
  return puVar1;
}

// 01419830  FUN_01419830  size=398  [run]
uint * __thiscall FUN_01419830(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puVar1 = *(uint **)(param_1 + (*(uint *)(param_2 + 0x9c) % 0x1f) * 4);
  do {
    if (puVar1 == (uint *)0x0) {
LAB_0141987f:
      local_c = param_1;
      puVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x1c);
      if (puVar3 == (undefined4 *)0x0) {
        return (uint *)0x0;
      }
      puVar1 = puVar3 + 2;
      *puVar1 = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      uVar2 = *(uint *)(param_2 + 0x94);
      local_8 = 0;
      for (uVar4 = *(uint *)(param_2 + 0x6c); uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        local_8 = local_8 + 1;
      }
      pvVar5 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,uVar2);
      puVar3[5] = uVar2;
      iVar7 = 0;
      *puVar1 = (uint)pvVar5;
      puVar3[3] = pvVar5;
      if (pvVar5 != (void *)0x0) {
        if (puVar3[4] + 0x30 <= (uint)puVar3[5]) {
          iVar7 = puVar3[3];
          puVar3[3] = iVar7 + 0x30;
          puVar3[4] = puVar3[4] + 0x30;
        }
        iVar6 = FUN_0141c310(iVar7,*(undefined1 *)(param_2 + 0xa0),*(undefined1 *)(param_2 + 0xa1));
        if (iVar6 == 0) {
          local_14 = *param_4;
          local_10 = param_4[1];
          local_18 = iVar6;
          iVar7 = FUN_0141c360(iVar7,local_8,&local_18,puVar1);
          if (iVar7 == 0) {
            puVar3[6] = puVar3[6] + 1;
            *puVar3 = *(undefined4 *)(param_2 + 0x9c);
            FUN_01419670(puVar3);
            return puVar1;
          }
        }
      }
      if ((void *)*puVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)*puVar1);
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *puVar1 = 0;
      }
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar3);
      return (uint *)0x0;
    }
    if (*puVar1 == *(uint *)(param_2 + 0x9c)) {
      if (puVar1 != (uint *)0x0) {
        puVar1[6] = puVar1[6] + 1;
        return puVar1 + 2;
      }
      goto LAB_0141987f;
    }
    puVar1 = (uint *)puVar1[1];
  } while( true );
}

// 014199C0  FUN_014199c0  size=27  [run]
void __thiscall FUN_014199c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  return;
}

// 01419A00  FUN_01419a00  size=142  [run]
undefined4 __thiscall
FUN_01419a00(int *param_1,int *param_2,ushort param_3,char param_4,int *param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = param_1[1];
  if ((uint)param_1[2] < iVar3 + 2U) {
    return 0x2b;
  }
  uVar2 = *(ushort *)(*param_1 + iVar3);
  if (param_3 < uVar2) {
    return 2;
  }
  if ((*param_2 != 4) && (uVar1 = uVar2 + 2 + iVar3, uVar1 <= (uint)param_1[2])) {
    param_1[1] = uVar1;
    *param_5 = *param_1 + iVar3 + 2;
    param_5[1] = (uint)uVar2;
    if ((param_1[1] == param_1[2]) && (param_4 != '\0')) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
    *(char *)(param_5 + 2) = cVar4;
    if (cVar4 != '\0') {
      *param_2 = 4;
    }
    return 0x2d;
  }
  return 0x2b;
}

// 01419A90  FUN_01419a90  size=215  [run]
void FUN_01419a90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [12];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1[0x1d];
  iVar2 = param_1[0x1c];
  local_10 = param_3;
  local_c = 0;
  do {
    iVar1 = FUN_01419210(param_1 + 4,param_4,iVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_01419a00(param_1 + 2,param_2,(char)param_1[0x1e],local_1c);
      if (iVar1 == 2) {
        *param_1 = 0;
        param_1[1] = 2;
        return;
      }
      if (iVar1 == 0x2b) break;
      FUN_014192e0(param_1 + 4,local_1c);
    }
    else {
      param_4 = param_4 + param_1[7] * iVar1 * 2;
      iVar2 = iVar2 - iVar1;
    }
  } while (iVar2 != 0);
  *param_1 = param_1[0x1c] - iVar2;
  param_1[3] = local_c;
  if (param_1[2] == 4) {
    iVar2 = FUN_01419210(param_1 + 4,0,0);
    if (iVar2 == 0) {
      param_1[1] = 0x11;
      return;
    }
  }
  param_1[1] = 0x2e - (uint)(*param_1 != 0);
  return;
}

// 01419C00  FUN_01419c00  size=301  [run]
void __fastcall FUN_01419c00(undefined4 param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  
  pfVar8 = param_2 + param_3 + -3;
  pfVar9 = (float *)&DAT_01b2f260;
  pfVar1 = param_2 + (param_3 >> 1);
  do {
    fVar2 = *pfVar9;
    fVar3 = pfVar9[1];
    fVar4 = *pfVar8;
    *pfVar8 = fVar3 * pfVar8[2] + fVar2 * fVar4;
    pfVar8[2] = fVar2 * pfVar8[2] - fVar3 * fVar4;
    pfVar8 = pfVar8 + -4;
    pfVar9 = pfVar9 + param_4;
  } while (pfVar1 <= pfVar8);
  do {
    fVar2 = pfVar9[1];
    fVar3 = *pfVar9;
    fVar4 = *pfVar8;
    *pfVar8 = fVar3 * pfVar8[2] + fVar2 * fVar4;
    pfVar8[2] = fVar2 * pfVar8[2] - fVar3 * fVar4;
    pfVar8 = pfVar8 + -4;
    pfVar9 = pfVar9 + -param_4;
  } while (param_2 <= pfVar8);
  pfVar8 = param_2 + param_3 + -4;
  pfVar9 = (float *)&DAT_01b2f260;
  do {
    fVar2 = pfVar9[1];
    fVar3 = *pfVar9;
    fVar4 = *param_2;
    fVar5 = param_2[2];
    fVar6 = *pfVar8;
    fVar7 = pfVar8[2];
    pfVar8[2] = fVar3 * fVar5 + fVar2 * fVar4;
    pfVar9 = pfVar9 + param_4;
    *pfVar8 = fVar2 * fVar5 - fVar3 * fVar4;
    fVar2 = *pfVar9;
    fVar3 = pfVar9[1];
    *param_2 = fVar2 * fVar7 - fVar3 * fVar6;
    param_2[2] = fVar3 * fVar7 + fVar2 * fVar6;
    pfVar8 = pfVar8 + -4;
    param_2 = param_2 + 4;
  } while (pfVar1 <= pfVar8);
  return;
}

// 0141A1E0  FUN_0141a1e0  size=268  [run]
void __fastcall FUN_0141a1e0(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar7 = (float *)(param_2 + -0x10 + in_EAX * 4);
  pfVar8 = (float *)(param_2 + -0x10 + (in_EAX >> 1) * 4);
  iVar5 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
  pfVar6 = (float *)&DAT_01b2f260;
  do {
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    fVar4 = pfVar8[3];
    fVar9 = *pfVar7 - pfVar7[1];
    fVar10 = pfVar7[3] - pfVar7[2];
    fVar11 = fVar2 - fVar1;
    fVar12 = fVar4 - fVar3;
    *pfVar7 = pfVar7[1] + *pfVar7;
    pfVar7[1] = fVar1 + fVar2;
    pfVar7[2] = pfVar7[3] + pfVar7[2];
    pfVar7[3] = fVar3 + fVar4;
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    *pfVar8 = fVar2 * fVar9 * 1.0 + fVar1 * fVar10;
    pfVar8[1] = fVar2 * fVar12 * 1.0 + fVar1 * fVar11;
    pfVar8[2] = fVar2 * fVar10 * -1.0 + fVar1 * fVar9;
    pfVar8[3] = fVar2 * fVar11 * -1.0 + fVar1 * fVar12;
    pfVar6 = pfVar6 + iVar5 * 4;
    pfVar7 = pfVar7 + -4;
    pfVar8 = pfVar8 + -4;
  } while (pfVar6 < &DAT_01b30260);
  do {
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    fVar4 = pfVar8[3];
    fVar9 = *pfVar7 - pfVar7[1];
    fVar10 = pfVar7[2] - pfVar7[3];
    fVar11 = fVar1 - fVar2;
    fVar12 = fVar4 - fVar3;
    *pfVar7 = pfVar7[1] + *pfVar7;
    pfVar7[1] = fVar1 + fVar2;
    pfVar7[2] = pfVar7[3] + pfVar7[2];
    pfVar7[3] = fVar3 + fVar4;
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    *pfVar8 = fVar2 * fVar10 * -1.0 + fVar1 * fVar9;
    pfVar8[1] = fVar2 * fVar11 * -1.0 + fVar1 * fVar12;
    pfVar8[2] = fVar2 * fVar9 * 1.0 + fVar1 * fVar10;
    pfVar8[3] = fVar2 * fVar12 * 1.0 + fVar1 * fVar11;
    pfVar6 = pfVar6 + iVar5 * -4;
    pfVar7 = pfVar7 + -4;
    pfVar8 = pfVar8 + -4;
  } while (&DAT_01b2f260 < pfVar6);
  return;
}

// 0141A2F0  FUN_0141a2f0  size=1240  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0141a2f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_10;
  uint local_c;
  int local_8;
  
  bVar4 = 0;
  local_c = 1;
  fVar9 = fRam01b3127c;
  fVar12 = fRam01b31278;
  fVar15 = fRam01b31274;
  fVar18 = _DAT_01b31270;
  for (iVar1 = 7 - param_3; _DAT_01b31270 = fVar18, fRam01b31274 = fVar15, fRam01b31278 = fVar12,
      fRam01b3127c = fVar9, 0 < iVar1; iVar1 = iVar1 + -1) {
    if (0 < (int)local_c) {
      iVar7 = param_2 >> (bVar4 & 0x1f);
      iVar2 = 4 << (bVar4 + (char)param_3 & 0x1f);
      iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
      local_8 = param_1;
      local_10 = local_c;
      do {
        pfVar3 = (float *)(local_8 + -0x10 + iVar7 * 4);
        pfVar6 = (float *)(local_8 + -0x10 + (iVar7 >> 1) * 4);
        pfVar5 = (float *)&DAT_01b2f260;
        do {
          fVar9 = *pfVar6;
          fVar12 = pfVar6[1];
          fVar15 = pfVar6[2];
          fVar18 = pfVar6[3];
          fVar8 = *pfVar3 - pfVar3[1];
          fVar10 = pfVar3[3] - pfVar3[2];
          fVar13 = fVar12 - fVar9;
          fVar16 = fVar18 - fVar15;
          *pfVar3 = pfVar3[1] + *pfVar3;
          pfVar3[1] = fVar9 + fVar12;
          pfVar3[2] = pfVar3[3] + pfVar3[2];
          pfVar3[3] = fVar15 + fVar18;
          fVar9 = *pfVar5;
          fVar12 = pfVar5[1];
          *pfVar6 = fVar12 * fVar8 * 1.0 + fVar9 * fVar10;
          pfVar6[1] = fVar12 * fVar16 * 1.0 + fVar9 * fVar13;
          pfVar6[2] = fVar12 * fVar10 * -1.0 + fVar9 * fVar8;
          pfVar6[3] = fVar12 * fVar13 * -1.0 + fVar9 * fVar16;
          pfVar5 = pfVar5 + iVar2 * 4;
          pfVar3 = pfVar3 + -4;
          pfVar6 = pfVar6 + -4;
        } while (pfVar5 < &DAT_01b30260);
        do {
          fVar9 = *pfVar6;
          fVar12 = pfVar6[1];
          fVar15 = pfVar6[2];
          fVar18 = pfVar6[3];
          fVar8 = *pfVar3 - pfVar3[1];
          fVar10 = pfVar3[2] - pfVar3[3];
          fVar13 = fVar9 - fVar12;
          fVar16 = fVar18 - fVar15;
          *pfVar3 = pfVar3[1] + *pfVar3;
          pfVar3[1] = fVar9 + fVar12;
          pfVar3[2] = pfVar3[3] + pfVar3[2];
          pfVar3[3] = fVar15 + fVar18;
          fVar9 = *pfVar5;
          fVar12 = pfVar5[1];
          *pfVar6 = fVar12 * fVar10 * -1.0 + fVar9 * fVar8;
          pfVar6[1] = fVar12 * fVar13 * -1.0 + fVar9 * fVar16;
          pfVar6[2] = fVar12 * fVar8 * 1.0 + fVar9 * fVar10;
          pfVar6[3] = fVar12 * fVar16 * 1.0 + fVar9 * fVar13;
          pfVar5 = pfVar5 + iVar2 * -4;
          pfVar3 = pfVar3 + -4;
          pfVar6 = pfVar6 + -4;
        } while (&DAT_01b2f260 < pfVar5);
        local_8 = local_8 + iVar7 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    bVar4 = bVar4 + 1;
    local_c = local_c << 1 | (uint)((int)local_c < 0);
    fVar9 = fRam01b3127c;
    fVar12 = fRam01b31278;
    fVar15 = fRam01b31274;
    fVar18 = _DAT_01b31270;
  }
  if (0 < param_2) {
    pfVar3 = (float *)(param_1 + 0x30);
    iVar1 = (param_2 - 1U >> 5) + 1;
    do {
      fVar8 = pfVar3[-0xc];
      fVar10 = pfVar3[-0xb];
      fVar13 = pfVar3[-10];
      fVar16 = pfVar3[-9];
      fVar19 = pfVar3[4] - pfVar3[5];
      fVar20 = pfVar3[6] - pfVar3[7];
      fVar21 = fVar10 - fVar8;
      fVar23 = fVar16 - fVar13;
      fVar11 = fVar21 * fRam01b31284;
      fVar14 = fVar20 * fRam01b31288;
      fVar17 = fVar23 * fRam01b3128c;
      fVar23 = fVar23 * fRam01b312b4;
      fVar22 = fVar19 * fRam01b312b8;
      fVar21 = fVar21 * fRam01b312bc;
      pfVar3[-0xc] = fVar19 * _DAT_01b31280 + fVar20 * _DAT_01b312b0;
      pfVar3[-0xb] = fVar11 + fVar23;
      pfVar3[-10] = fVar14 + fVar22;
      pfVar3[-9] = fVar17 + fVar21;
      pfVar3[4] = pfVar3[5] + pfVar3[4];
      pfVar3[5] = fVar8 + fVar10;
      pfVar3[6] = pfVar3[7] + pfVar3[6];
      pfVar3[7] = fVar13 + fVar16;
      fVar8 = pfVar3[8] - pfVar3[9];
      fVar10 = pfVar3[10] - pfVar3[0xb];
      fVar13 = pfVar3[-7] - pfVar3[-8];
      fVar16 = pfVar3[-5] - pfVar3[-6];
      pfVar3[8] = pfVar3[9] + pfVar3[8];
      pfVar3[9] = pfVar3[-8] + pfVar3[-7];
      pfVar3[10] = pfVar3[0xb] + pfVar3[10];
      pfVar3[0xb] = pfVar3[-6] + pfVar3[-5];
      pfVar3[-8] = (fVar10 * -1.0 + fVar8) * fVar18;
      pfVar3[-7] = (fVar13 * 1.0 + fVar16) * fVar15;
      pfVar3[-6] = (fVar10 * 1.0 + fVar8) * fVar12;
      pfVar3[-5] = (fVar13 * -1.0 + fVar16) * fVar9;
      fVar8 = pfVar3[0xc] - pfVar3[0xd];
      fVar10 = pfVar3[0xe] - pfVar3[0xf];
      fVar16 = pfVar3[-3] - pfVar3[-4];
      fVar13 = pfVar3[-1] - pfVar3[-2];
      fVar9 = fVar8 * _DAT_01b312a0;
      fVar12 = fVar16 * fRam01b312a4;
      fVar15 = fVar10 * fRam01b312a8;
      fVar18 = fVar13 * fRam01b312ac;
      pfVar3[0xc] = pfVar3[0xd] + pfVar3[0xc];
      pfVar3[0xd] = pfVar3[-4] + pfVar3[-3];
      pfVar3[0xe] = pfVar3[0xf] + pfVar3[0xe];
      pfVar3[0xf] = pfVar3[-2] + pfVar3[-1];
      fVar13 = fVar13 * fRam01b31294;
      fVar8 = fVar8 * fRam01b31298;
      fVar16 = fVar16 * fRam01b3129c;
      pfVar3[-4] = fVar9 + fVar10 * _DAT_01b31290;
      pfVar3[-3] = fVar12 + fVar13;
      pfVar3[-2] = fVar15 + fVar8;
      pfVar3[-1] = fVar18 + fVar16;
      fVar20 = pfVar3[0x10] - pfVar3[0x11];
      fVar23 = pfVar3[0x12] - pfVar3[0x13];
      fVar21 = *pfVar3 - pfVar3[1];
      fVar22 = pfVar3[3] - pfVar3[2];
      fVar8 = pfVar3[-0xc];
      fVar10 = pfVar3[-0xb];
      fVar13 = pfVar3[-10];
      fVar16 = pfVar3[-9];
      pfVar3[0x10] = pfVar3[0x11] + pfVar3[0x10];
      pfVar3[0x11] = *pfVar3 + pfVar3[1];
      pfVar3[0x12] = pfVar3[0x13] + pfVar3[0x12];
      pfVar3[0x13] = pfVar3[2] + pfVar3[3];
      fVar9 = fRam01b3127c;
      fVar12 = fRam01b31278;
      fVar15 = fRam01b31274;
      fVar18 = _DAT_01b31270;
      fVar11 = pfVar3[-4] - pfVar3[-3];
      fVar14 = pfVar3[-2] - pfVar3[-1];
      fVar17 = fVar10 - fVar8;
      fVar19 = fVar16 - fVar13;
      fVar24 = (fVar19 * 1.0 + fVar17) * fRam01b31274;
      fVar25 = (fVar14 * 1.0 + fVar11) * fRam01b31278;
      fVar17 = (fVar17 * -1.0 + fVar19) * fRam01b3127c;
      pfVar3[-0xc] = (fVar14 * -1.0 + fVar11) * _DAT_01b31270;
      pfVar3[-0xb] = fVar24;
      pfVar3[-10] = fVar25;
      pfVar3[-9] = fVar17;
      pfVar3[-4] = pfVar3[-3] + pfVar3[-4];
      pfVar3[-3] = fVar8 + fVar10;
      pfVar3[-2] = pfVar3[-1] + pfVar3[-2];
      pfVar3[-1] = fVar13 + fVar16;
      fVar8 = pfVar3[-8] - pfVar3[-7];
      fVar13 = pfVar3[-5] - pfVar3[-6];
      fVar11 = fVar20 - fVar22;
      fVar14 = fVar23 - fVar21;
      *pfVar3 = fVar22 + fVar20;
      pfVar3[1] = pfVar3[-8] + pfVar3[-7];
      pfVar3[2] = fVar21 + fVar23;
      pfVar3[3] = pfVar3[-6] + pfVar3[-5];
      fVar17 = pfVar3[-0xc] - pfVar3[-0xb];
      fVar19 = pfVar3[-10] - pfVar3[-9];
      fVar20 = fVar11 - fVar13;
      fVar23 = fVar14 - fVar8;
      fVar10 = pfVar3[-0xc] + pfVar3[-0xb];
      fVar16 = pfVar3[-10] + pfVar3[-9];
      fVar11 = fVar11 + fVar13;
      fVar14 = fVar14 + fVar8;
      pfVar3[-0xc] = fVar19 * 1.0 + fVar20;
      pfVar3[-0xb] = fVar17 * -1.0 + fVar23;
      pfVar3[-10] = fVar19 * -1.0 + fVar20;
      pfVar3[-9] = fVar17 * 1.0 + fVar23;
      pfVar3[-8] = fVar10 * -1.0 + fVar11;
      pfVar3[-7] = fVar16 * -1.0 + fVar14;
      pfVar3[-6] = fVar10 * 1.0 + fVar11;
      pfVar3[-5] = fVar16 * 1.0 + fVar14;
      fVar11 = pfVar3[-4] - pfVar3[-3];
      fVar14 = pfVar3[-2] - pfVar3[-1];
      fVar17 = *pfVar3 - pfVar3[1];
      fVar19 = pfVar3[2] - pfVar3[3];
      fVar8 = pfVar3[-4] + pfVar3[-3];
      fVar10 = pfVar3[-2] + pfVar3[-1];
      fVar13 = *pfVar3 + pfVar3[1];
      fVar16 = pfVar3[2] + pfVar3[3];
      *pfVar3 = fVar8 * -1.0 + fVar13;
      pfVar3[1] = fVar10 * -1.0 + fVar16;
      pfVar3[2] = fVar8 * 1.0 + fVar13;
      pfVar3[3] = fVar10 * 1.0 + fVar16;
      pfVar3[-4] = fVar14 * 1.0 + fVar17;
      pfVar3[-3] = fVar11 * -1.0 + fVar19;
      pfVar3[-2] = fVar14 * -1.0 + fVar17;
      pfVar3[-1] = fVar11 * 1.0 + fVar19;
      fVar8 = pfVar3[0xc] - pfVar3[0xd];
      fVar10 = pfVar3[0xe] - pfVar3[0xf];
      fVar13 = pfVar3[5] - pfVar3[4];
      fVar16 = pfVar3[7] - pfVar3[6];
      pfVar3[0xc] = pfVar3[0xd] + pfVar3[0xc];
      pfVar3[0xd] = pfVar3[4] + pfVar3[5];
      pfVar3[0xe] = pfVar3[0xf] + pfVar3[0xe];
      pfVar3[0xf] = pfVar3[6] + pfVar3[7];
      pfVar3[4] = (fVar10 * -1.0 + fVar8) * fVar18;
      pfVar3[5] = (fVar16 * 1.0 + fVar13) * fVar15;
      pfVar3[6] = (fVar10 * 1.0 + fVar8) * fVar12;
      pfVar3[7] = (fVar13 * -1.0 + fVar16) * fVar9;
      fVar8 = pfVar3[8] - pfVar3[9];
      fVar13 = pfVar3[0xb] - pfVar3[10];
      fVar11 = pfVar3[0x10] - pfVar3[0x11];
      fVar14 = pfVar3[0x12] - pfVar3[0x13];
      pfVar3[0x10] = pfVar3[0x11] + pfVar3[0x10];
      pfVar3[0x11] = pfVar3[8] + pfVar3[9];
      pfVar3[0x12] = pfVar3[0x13] + pfVar3[0x12];
      pfVar3[0x13] = pfVar3[10] + pfVar3[0xb];
      fVar17 = pfVar3[4] - pfVar3[5];
      fVar19 = pfVar3[6] - pfVar3[7];
      fVar20 = fVar11 - fVar13;
      fVar23 = fVar14 - fVar8;
      fVar10 = pfVar3[4] + pfVar3[5];
      fVar16 = pfVar3[6] + pfVar3[7];
      fVar11 = fVar11 + fVar13;
      fVar14 = fVar14 + fVar8;
      pfVar3[4] = fVar19 * 1.0 + fVar20;
      pfVar3[5] = fVar17 * -1.0 + fVar23;
      pfVar3[6] = fVar19 * -1.0 + fVar20;
      pfVar3[7] = fVar17 * 1.0 + fVar23;
      pfVar3[8] = fVar10 * -1.0 + fVar11;
      pfVar3[9] = fVar16 * -1.0 + fVar14;
      pfVar3[10] = fVar10 * 1.0 + fVar11;
      pfVar3[0xb] = fVar16 * 1.0 + fVar14;
      fVar11 = pfVar3[0xc] - pfVar3[0xd];
      fVar14 = pfVar3[0xe] - pfVar3[0xf];
      fVar17 = pfVar3[0x10] - pfVar3[0x11];
      fVar19 = pfVar3[0x12] - pfVar3[0x13];
      fVar8 = pfVar3[0xc] + pfVar3[0xd];
      fVar10 = pfVar3[0xe] + pfVar3[0xf];
      fVar13 = pfVar3[0x10] + pfVar3[0x11];
      fVar16 = pfVar3[0x12] + pfVar3[0x13];
      pfVar3[0xc] = fVar14 * 1.0 + fVar17;
      pfVar3[0xd] = fVar11 * -1.0 + fVar19;
      pfVar3[0xe] = fVar14 * -1.0 + fVar17;
      pfVar3[0xf] = fVar11 * 1.0 + fVar19;
      pfVar3[0x10] = fVar8 * -1.0 + fVar13;
      pfVar3[0x11] = fVar10 * -1.0 + fVar16;
      pfVar3[0x12] = fVar8 * 1.0 + fVar13;
      pfVar3[0x13] = fVar10 * 1.0 + fVar16;
      pfVar3 = pfVar3 + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 0141A820  FUN_0141a820  size=117  [run]
void FUN_0141a820(byte param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *unaff_EDI;
  
  uVar8 = 0;
  puVar6 = unaff_EDI + (in_EAX >> 1);
  do {
    uVar4 = (int)uVar8 >> 4;
    uVar5 = uVar8 & 0xf;
    iVar3 = (int)uVar8 >> 8;
    puVar7 = puVar6 + -2;
    uVar8 = uVar8 + 1;
    puVar1 = unaff_EDI +
             ((int)(((uint)(byte)(&DAT_01b312c0)[uVar4 & 0xf] |
                    (uint)(byte)(&DAT_01b312c0)[uVar5] << 4) << 4 |
                   (uint)(byte)(&DAT_01b312c0)[iVar3]) >> (param_1 & 0x1f));
    if (puVar1 < puVar7) {
      uVar2 = *puVar1;
      *puVar1 = *puVar7;
      *puVar7 = uVar2;
      uVar2 = puVar1[1];
      puVar1[1] = puVar6[-1];
      puVar6[-1] = uVar2;
    }
    puVar6 = puVar7;
  } while (unaff_EDI < puVar7);
  return;
}

// 0141A8A0  FUN_0141a8a0  size=371  [run]
void __thiscall FUN_0141a8a0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_2 < 4) {
    pfVar6 = (float *)&DAT_01b30270;
  }
  else {
    pfVar6 = (float *)(&DAT_01b2f260 + (param_2 >> 1));
  }
  pfVar5 = pfVar6 + 0x400;
  pfVar3 = param_1 + (in_EAX >> 1);
  do {
    fVar9 = *param_1;
    fVar7 = pfVar6[1];
    fVar1 = *pfVar6;
    pfVar4 = pfVar3 + -2;
    fVar12 = pfVar3[-1] - param_1[1];
    fVar11 = fVar9 + *pfVar4;
    fVar2 = *pfVar4;
    fVar8 = (fVar1 * fVar12 + fVar7 * fVar11) * 0.5;
    fVar10 = (param_1[1] + pfVar3[-1]) * 0.5;
    *param_1 = fVar8 + fVar10;
    fVar7 = (fVar7 * fVar12 - fVar1 * fVar11) * 0.5;
    fVar9 = (fVar9 - fVar2) * 0.5;
    param_1[1] = fVar7 + fVar9;
    pfVar6 = pfVar6 + param_2;
    param_1 = param_1 + 2;
    *pfVar4 = fVar10 - fVar8;
    pfVar3[-1] = fVar7 - fVar9;
    pfVar3 = pfVar4;
  } while (pfVar6 < pfVar5);
  do {
    fVar9 = *param_1;
    pfVar5 = pfVar4 + -2;
    fVar12 = pfVar4[-1] - param_1[1];
    pfVar6 = pfVar6 + -param_2;
    fVar7 = pfVar6[1];
    fVar1 = *pfVar6;
    fVar11 = fVar9 + *pfVar5;
    fVar2 = *pfVar5;
    fVar8 = (fVar7 * fVar12 + fVar1 * fVar11) * 0.5;
    fVar10 = (param_1[1] + pfVar4[-1]) * 0.5;
    *param_1 = fVar8 + fVar10;
    fVar7 = (fVar1 * fVar12 - fVar7 * fVar11) * 0.5;
    fVar9 = (fVar9 - fVar2) * 0.5;
    param_1[1] = fVar7 + fVar9;
    param_1 = param_1 + 2;
    *pfVar5 = fVar10 - fVar8;
    pfVar4[-1] = fVar7 - fVar9;
    pfVar4 = pfVar5;
  } while (param_1 < pfVar5);
  return;
}

// 0141AA20  FUN_0141aa20  size=820  [run]
void __fastcall FUN_0141aa20(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar5 = param_2 >> 2;
  pfVar2 = param_3 + (param_1 >> 1);
  if (iVar5 == 0) {
    pfVar4 = (float *)&DAT_01b30270;
    pfVar6 = (float *)&DAT_01b2f268;
    pfVar3 = param_3 + 2;
    fVar13 = DAT_01b2f260;
    fVar14 = DAT_01b2f264;
    do {
      fVar7 = *pfVar4;
      fVar10 = pfVar4[1];
      fVar8 = (fVar7 - fVar13) * 0.25;
      fVar13 = fVar8 + fVar13;
      fVar11 = (fVar10 - fVar14) * 0.25;
      fVar9 = pfVar3[-1];
      fVar14 = fVar11 + fVar14;
      pfVar3[-1] = -fVar9 * fVar13 - pfVar3[-2] * fVar14;
      fVar12 = pfVar3[1];
      fVar8 = fVar7 - fVar8;
      pfVar3[-2] = -fVar9 * fVar14 + pfVar3[-2] * fVar13;
      fVar11 = fVar10 - fVar11;
      pfVar3[1] = -fVar12 * fVar8 - *pfVar3 * fVar11;
      *pfVar3 = -fVar12 * fVar11 + *pfVar3 * fVar8;
      fVar13 = *pfVar6;
      fVar14 = pfVar6[1];
      fVar9 = (fVar13 - fVar7) * 0.25;
      fVar12 = (fVar14 - fVar10) * 0.25;
      fVar8 = fVar13 - fVar9;
      pfVar3[2] = -pfVar3[3] * (fVar12 + fVar10) + pfVar3[2] * (fVar9 + fVar7);
      fVar12 = fVar14 - fVar12;
      pfVar4 = pfVar4 + 2;
      pfVar6 = pfVar6 + 2;
      pfVar3[3] = -pfVar3[5] * fVar12 + pfVar3[4] * fVar8;
      pfVar3[4] = -pfVar3[5] * fVar8 - pfVar3[4] * fVar12;
      pfVar1 = pfVar3 + 6;
      pfVar3 = pfVar3 + 8;
    } while (pfVar1 < pfVar2);
    return;
  }
  if (iVar5 != 1) {
    if (iVar5 < 4) {
      pfVar3 = (float *)&DAT_01b30270;
    }
    else {
      pfVar3 = &DAT_01b2f260 + (param_2 >> 3);
    }
    do {
      fVar13 = *pfVar3;
      fVar14 = pfVar3[1];
      fVar7 = *param_3;
      *param_3 = fVar14 * -param_3[1] + fVar13 * fVar7;
      param_3[1] = fVar13 * -param_3[1] - fVar14 * fVar7;
      param_3 = param_3 + 2;
      pfVar3 = pfVar3 + iVar5;
    } while (param_3 < pfVar2);
    return;
  }
  pfVar4 = (float *)&DAT_01b30270;
  fVar13 = DAT_01b2f260 * 0.5;
  fVar14 = DAT_01b2f264 * 0.5;
  pfVar6 = (float *)&DAT_01b2f268;
  pfVar3 = param_3 + 2;
  do {
    fVar7 = *pfVar4;
    fVar10 = pfVar4[1];
    fVar9 = pfVar3[-2];
    fVar13 = fVar7 * 0.5 + fVar13;
    fVar14 = fVar10 * 0.5 + fVar14;
    pfVar3[-2] = -pfVar3[-1] * fVar14 + fVar9 * fVar13;
    fVar12 = *pfVar3;
    pfVar3[-1] = -pfVar3[-1] * fVar13 - fVar9 * fVar14;
    fVar14 = pfVar6[1] * 0.5;
    fVar10 = fVar10 * 0.5 + fVar14;
    fVar13 = *pfVar6 * 0.5;
    fVar7 = fVar7 * 0.5 + fVar13;
    *pfVar3 = fVar10 * -pfVar3[1] + fVar7 * fVar12;
    pfVar3[1] = fVar7 * -pfVar3[1] - fVar10 * fVar12;
    pfVar1 = pfVar3 + 2;
    pfVar4 = pfVar4 + 2;
    pfVar6 = pfVar6 + 2;
    pfVar3 = pfVar3 + 4;
  } while (pfVar1 < pfVar2);
  return;
}

// 0141AD60  FUN_0141ad60  size=2880  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0141ad60(uint param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_18;
  float *local_10;
  uint local_8;
  
  iVar14 = 4;
  uVar8 = 0x10;
  uVar1 = param_1 & 0x10;
  while (uVar1 == 0) {
    iVar14 = iVar14 + 1;
    uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    uVar1 = param_1 & uVar8;
  }
  iVar2 = (int)param_1 >> 1;
  bVar6 = (byte)(0xd - iVar14);
  iVar12 = 2 << (bVar6 & 0x1f);
  pfVar4 = param_2 + iVar2 + -3;
  pfVar9 = &DAT_01b2f260;
  do {
    fVar17 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar23 = *pfVar4;
    *pfVar4 = fVar20 * pfVar4[2] + fVar17 * fVar23;
    pfVar4[2] = fVar17 * pfVar4[2] - fVar20 * fVar23;
    pfVar4 = pfVar4 + -4;
    pfVar9 = pfVar9 + iVar12;
  } while (param_2 + ((int)param_1 >> 2) <= pfVar4);
  do {
    fVar17 = pfVar9[1];
    fVar20 = *pfVar9;
    fVar23 = *pfVar4;
    *pfVar4 = fVar20 * pfVar4[2] + fVar17 * fVar23;
    pfVar4[2] = fVar17 * pfVar4[2] - fVar20 * fVar23;
    pfVar4 = pfVar4 + -4;
    pfVar9 = pfVar9 + -iVar12;
  } while (param_2 <= pfVar4);
  pfVar4 = param_2 + iVar2 + -4;
  pfVar10 = &DAT_01b2f260;
  pfVar9 = param_2;
  do {
    fVar17 = pfVar10[1];
    fVar20 = *pfVar10;
    fVar23 = *pfVar9;
    fVar26 = pfVar9[2];
    fVar16 = *pfVar4;
    fVar18 = pfVar4[2];
    pfVar4[2] = fVar20 * fVar26 + fVar17 * fVar23;
    pfVar10 = pfVar10 + iVar12;
    *pfVar4 = fVar17 * fVar26 - fVar20 * fVar23;
    fVar17 = *pfVar10;
    fVar20 = pfVar10[1];
    *pfVar9 = fVar17 * fVar18 - fVar20 * fVar16;
    pfVar9[2] = fVar20 * fVar18 + fVar17 * fVar16;
    pfVar4 = pfVar4 + -4;
    pfVar9 = pfVar9 + 4;
  } while (param_2 + ((int)param_1 >> 2) <= pfVar4);
  iVar14 = 7 - (0xd - iVar14);
  local_8 = 1;
  if (0 < iVar14) {
    bVar7 = 0;
    do {
      if (0 < (int)local_8) {
        iVar15 = iVar2 >> (bVar7 & 0x1f);
        iVar3 = 4 << (bVar7 + bVar6 & 0x1f);
        local_10 = param_2;
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        local_18 = local_8;
        do {
          pfVar4 = local_10 + iVar15 + -4;
          pfVar9 = local_10 + (iVar15 >> 1) + -4;
          pfVar10 = &DAT_01b2f260;
          do {
            fVar17 = *pfVar9;
            fVar20 = pfVar9[1];
            fVar23 = pfVar9[2];
            fVar26 = pfVar9[3];
            fVar16 = *pfVar4 - pfVar4[1];
            fVar18 = pfVar4[3] - pfVar4[2];
            fVar21 = fVar20 - fVar17;
            fVar24 = fVar26 - fVar23;
            *pfVar4 = pfVar4[1] + *pfVar4;
            pfVar4[1] = fVar17 + fVar20;
            pfVar4[2] = pfVar4[3] + pfVar4[2];
            pfVar4[3] = fVar23 + fVar26;
            fVar17 = *pfVar10;
            fVar20 = pfVar10[1];
            *pfVar9 = fVar20 * fVar16 * 1.0 + fVar17 * fVar18;
            pfVar9[1] = fVar20 * fVar24 * 1.0 + fVar17 * fVar21;
            pfVar9[2] = fVar20 * fVar18 * -1.0 + fVar17 * fVar16;
            pfVar9[3] = fVar20 * fVar21 * -1.0 + fVar17 * fVar24;
            pfVar10 = pfVar10 + iVar3 * 4;
            pfVar4 = pfVar4 + -4;
            pfVar9 = pfVar9 + -4;
          } while (pfVar10 < &DAT_01b30260);
          do {
            fVar17 = *pfVar9;
            fVar20 = pfVar9[1];
            fVar23 = pfVar9[2];
            fVar26 = pfVar9[3];
            fVar16 = *pfVar4 - pfVar4[1];
            fVar18 = pfVar4[2] - pfVar4[3];
            fVar21 = fVar17 - fVar20;
            fVar24 = fVar26 - fVar23;
            *pfVar4 = pfVar4[1] + *pfVar4;
            pfVar4[1] = fVar17 + fVar20;
            pfVar4[2] = pfVar4[3] + pfVar4[2];
            pfVar4[3] = fVar23 + fVar26;
            fVar17 = *pfVar10;
            fVar20 = pfVar10[1];
            *pfVar9 = fVar20 * fVar18 * -1.0 + fVar17 * fVar16;
            pfVar9[1] = fVar20 * fVar21 * -1.0 + fVar17 * fVar24;
            pfVar9[2] = fVar20 * fVar16 * 1.0 + fVar17 * fVar18;
            pfVar9[3] = fVar20 * fVar24 * 1.0 + fVar17 * fVar21;
            pfVar10 = pfVar10 + iVar3 * -4;
            pfVar4 = pfVar4 + -4;
            pfVar9 = pfVar9 + -4;
          } while (&DAT_01b2f260 < pfVar10);
          local_10 = local_10 + iVar15;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      bVar7 = bVar7 + 1;
      iVar14 = iVar14 + -1;
      local_8 = local_8 << 1 | (uint)((int)local_8 < 0);
    } while (0 < iVar14);
  }
  if (0 < iVar2) {
    pfVar4 = param_2 + 0xc;
    iVar14 = (iVar2 - 1U >> 5) + 1;
    fVar17 = _DAT_01b31270;
    fVar20 = fRam01b31274;
    fVar23 = fRam01b31278;
    fVar26 = fRam01b3127c;
    do {
      fVar16 = pfVar4[-0xc];
      fVar18 = pfVar4[-0xb];
      fVar21 = pfVar4[-10];
      fVar24 = pfVar4[-9];
      fVar27 = pfVar4[4] - pfVar4[5];
      fVar28 = pfVar4[6] - pfVar4[7];
      fVar29 = fVar18 - fVar16;
      fVar31 = fVar24 - fVar21;
      fVar19 = fVar29 * fRam01b31284;
      fVar22 = fVar28 * fRam01b31288;
      fVar25 = fVar31 * fRam01b3128c;
      fVar31 = fVar31 * fRam01b312b4;
      fVar30 = fVar27 * fRam01b312b8;
      fVar29 = fVar29 * fRam01b312bc;
      pfVar4[-0xc] = fVar27 * _DAT_01b31280 + fVar28 * _DAT_01b312b0;
      pfVar4[-0xb] = fVar19 + fVar31;
      pfVar4[-10] = fVar22 + fVar30;
      pfVar4[-9] = fVar25 + fVar29;
      pfVar4[4] = pfVar4[5] + pfVar4[4];
      pfVar4[5] = fVar16 + fVar18;
      pfVar4[6] = pfVar4[7] + pfVar4[6];
      pfVar4[7] = fVar21 + fVar24;
      fVar16 = pfVar4[8] - pfVar4[9];
      fVar18 = pfVar4[10] - pfVar4[0xb];
      fVar21 = pfVar4[-7] - pfVar4[-8];
      fVar24 = pfVar4[-5] - pfVar4[-6];
      pfVar4[8] = pfVar4[9] + pfVar4[8];
      pfVar4[9] = pfVar4[-8] + pfVar4[-7];
      pfVar4[10] = pfVar4[0xb] + pfVar4[10];
      pfVar4[0xb] = pfVar4[-6] + pfVar4[-5];
      pfVar4[-8] = (fVar18 * -1.0 + fVar16) * fVar17;
      pfVar4[-7] = (fVar21 * 1.0 + fVar24) * fVar20;
      pfVar4[-6] = (fVar18 * 1.0 + fVar16) * fVar23;
      pfVar4[-5] = (fVar21 * -1.0 + fVar24) * fVar26;
      fVar16 = pfVar4[0xc] - pfVar4[0xd];
      fVar18 = pfVar4[0xe] - pfVar4[0xf];
      fVar24 = pfVar4[-3] - pfVar4[-4];
      fVar21 = pfVar4[-1] - pfVar4[-2];
      fVar17 = fVar16 * _DAT_01b312a0;
      fVar20 = fVar24 * fRam01b312a4;
      fVar23 = fVar18 * fRam01b312a8;
      fVar26 = fVar21 * fRam01b312ac;
      pfVar4[0xc] = pfVar4[0xd] + pfVar4[0xc];
      pfVar4[0xd] = pfVar4[-4] + pfVar4[-3];
      pfVar4[0xe] = pfVar4[0xf] + pfVar4[0xe];
      pfVar4[0xf] = pfVar4[-2] + pfVar4[-1];
      fVar21 = fVar21 * fRam01b31294;
      fVar16 = fVar16 * fRam01b31298;
      fVar24 = fVar24 * fRam01b3129c;
      pfVar4[-4] = fVar17 + fVar18 * _DAT_01b31290;
      pfVar4[-3] = fVar20 + fVar21;
      pfVar4[-2] = fVar23 + fVar16;
      pfVar4[-1] = fVar26 + fVar24;
      fVar28 = pfVar4[0x10] - pfVar4[0x11];
      fVar31 = pfVar4[0x12] - pfVar4[0x13];
      fVar29 = *pfVar4 - pfVar4[1];
      fVar30 = pfVar4[3] - pfVar4[2];
      fVar16 = pfVar4[-0xc];
      fVar18 = pfVar4[-0xb];
      fVar21 = pfVar4[-10];
      fVar24 = pfVar4[-9];
      pfVar4[0x10] = pfVar4[0x11] + pfVar4[0x10];
      pfVar4[0x11] = *pfVar4 + pfVar4[1];
      pfVar4[0x12] = pfVar4[0x13] + pfVar4[0x12];
      pfVar4[0x13] = pfVar4[2] + pfVar4[3];
      fVar26 = fRam01b3127c;
      fVar23 = fRam01b31278;
      fVar20 = fRam01b31274;
      fVar17 = _DAT_01b31270;
      fVar19 = pfVar4[-4] - pfVar4[-3];
      fVar22 = pfVar4[-2] - pfVar4[-1];
      fVar25 = fVar18 - fVar16;
      fVar27 = fVar24 - fVar21;
      fVar32 = (fVar27 * 1.0 + fVar25) * fRam01b31274;
      fVar33 = (fVar22 * 1.0 + fVar19) * fRam01b31278;
      fVar25 = (fVar25 * -1.0 + fVar27) * fRam01b3127c;
      pfVar4[-0xc] = (fVar22 * -1.0 + fVar19) * _DAT_01b31270;
      pfVar4[-0xb] = fVar32;
      pfVar4[-10] = fVar33;
      pfVar4[-9] = fVar25;
      pfVar4[-4] = pfVar4[-3] + pfVar4[-4];
      pfVar4[-3] = fVar16 + fVar18;
      pfVar4[-2] = pfVar4[-1] + pfVar4[-2];
      pfVar4[-1] = fVar21 + fVar24;
      fVar16 = pfVar4[-8] - pfVar4[-7];
      fVar21 = pfVar4[-5] - pfVar4[-6];
      fVar19 = fVar28 - fVar30;
      fVar22 = fVar31 - fVar29;
      *pfVar4 = fVar30 + fVar28;
      pfVar4[1] = pfVar4[-8] + pfVar4[-7];
      pfVar4[2] = fVar29 + fVar31;
      pfVar4[3] = pfVar4[-6] + pfVar4[-5];
      fVar25 = pfVar4[-0xc] - pfVar4[-0xb];
      fVar27 = pfVar4[-10] - pfVar4[-9];
      fVar28 = fVar19 - fVar21;
      fVar31 = fVar22 - fVar16;
      fVar18 = pfVar4[-0xc] + pfVar4[-0xb];
      fVar24 = pfVar4[-10] + pfVar4[-9];
      fVar19 = fVar19 + fVar21;
      fVar22 = fVar22 + fVar16;
      pfVar4[-0xc] = fVar27 * 1.0 + fVar28;
      pfVar4[-0xb] = fVar25 * -1.0 + fVar31;
      pfVar4[-10] = fVar27 * -1.0 + fVar28;
      pfVar4[-9] = fVar25 * 1.0 + fVar31;
      pfVar4[-8] = fVar18 * -1.0 + fVar19;
      pfVar4[-7] = fVar24 * -1.0 + fVar22;
      pfVar4[-6] = fVar18 * 1.0 + fVar19;
      pfVar4[-5] = fVar24 * 1.0 + fVar22;
      fVar19 = pfVar4[-4] - pfVar4[-3];
      fVar22 = pfVar4[-2] - pfVar4[-1];
      fVar25 = *pfVar4 - pfVar4[1];
      fVar27 = pfVar4[2] - pfVar4[3];
      fVar16 = pfVar4[-4] + pfVar4[-3];
      fVar18 = pfVar4[-2] + pfVar4[-1];
      fVar21 = *pfVar4 + pfVar4[1];
      fVar24 = pfVar4[2] + pfVar4[3];
      *pfVar4 = fVar16 * -1.0 + fVar21;
      pfVar4[1] = fVar18 * -1.0 + fVar24;
      pfVar4[2] = fVar16 * 1.0 + fVar21;
      pfVar4[3] = fVar18 * 1.0 + fVar24;
      pfVar4[-4] = fVar22 * 1.0 + fVar25;
      pfVar4[-3] = fVar19 * -1.0 + fVar27;
      pfVar4[-2] = fVar22 * -1.0 + fVar25;
      pfVar4[-1] = fVar19 * 1.0 + fVar27;
      fVar16 = pfVar4[0xc] - pfVar4[0xd];
      fVar18 = pfVar4[0xe] - pfVar4[0xf];
      fVar21 = pfVar4[5] - pfVar4[4];
      fVar24 = pfVar4[7] - pfVar4[6];
      pfVar4[0xc] = pfVar4[0xd] + pfVar4[0xc];
      pfVar4[0xd] = pfVar4[4] + pfVar4[5];
      pfVar4[0xe] = pfVar4[0xf] + pfVar4[0xe];
      pfVar4[0xf] = pfVar4[6] + pfVar4[7];
      pfVar4[4] = (fVar18 * -1.0 + fVar16) * fVar17;
      pfVar4[5] = (fVar24 * 1.0 + fVar21) * fVar20;
      pfVar4[6] = (fVar18 * 1.0 + fVar16) * fVar23;
      pfVar4[7] = (fVar21 * -1.0 + fVar24) * fVar26;
      fVar16 = pfVar4[8] - pfVar4[9];
      fVar21 = pfVar4[0xb] - pfVar4[10];
      fVar19 = pfVar4[0x10] - pfVar4[0x11];
      fVar22 = pfVar4[0x12] - pfVar4[0x13];
      pfVar4[0x10] = pfVar4[0x11] + pfVar4[0x10];
      pfVar4[0x11] = pfVar4[8] + pfVar4[9];
      pfVar4[0x12] = pfVar4[0x13] + pfVar4[0x12];
      pfVar4[0x13] = pfVar4[10] + pfVar4[0xb];
      fVar25 = pfVar4[4] - pfVar4[5];
      fVar27 = pfVar4[6] - pfVar4[7];
      fVar28 = fVar19 - fVar21;
      fVar31 = fVar22 - fVar16;
      fVar18 = pfVar4[4] + pfVar4[5];
      fVar24 = pfVar4[6] + pfVar4[7];
      fVar19 = fVar19 + fVar21;
      fVar22 = fVar22 + fVar16;
      pfVar4[4] = fVar27 * 1.0 + fVar28;
      pfVar4[5] = fVar25 * -1.0 + fVar31;
      pfVar4[6] = fVar27 * -1.0 + fVar28;
      pfVar4[7] = fVar25 * 1.0 + fVar31;
      pfVar4[8] = fVar18 * -1.0 + fVar19;
      pfVar4[9] = fVar24 * -1.0 + fVar22;
      pfVar4[10] = fVar18 * 1.0 + fVar19;
      pfVar4[0xb] = fVar24 * 1.0 + fVar22;
      fVar19 = pfVar4[0xc] - pfVar4[0xd];
      fVar22 = pfVar4[0xe] - pfVar4[0xf];
      fVar25 = pfVar4[0x10] - pfVar4[0x11];
      fVar27 = pfVar4[0x12] - pfVar4[0x13];
      fVar16 = pfVar4[0xc] + pfVar4[0xd];
      fVar18 = pfVar4[0xe] + pfVar4[0xf];
      fVar21 = pfVar4[0x10] + pfVar4[0x11];
      fVar24 = pfVar4[0x12] + pfVar4[0x13];
      pfVar4[0xc] = fVar22 * 1.0 + fVar25;
      pfVar4[0xd] = fVar19 * -1.0 + fVar27;
      pfVar4[0xe] = fVar22 * -1.0 + fVar25;
      pfVar4[0xf] = fVar19 * 1.0 + fVar27;
      pfVar4[0x10] = fVar16 * -1.0 + fVar21;
      pfVar4[0x11] = fVar18 * -1.0 + fVar24;
      pfVar4[0x12] = fVar16 * 1.0 + fVar21;
      pfVar4[0x13] = fVar18 * 1.0 + fVar24;
      pfVar4 = pfVar4 + 0x20;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  pfVar4 = param_2 + iVar2;
  uVar8 = 0;
  pfVar9 = pfVar4;
  do {
    pfVar13 = pfVar9 + -2;
    pfVar10 = param_2 + ((int)(((uint)(byte)(&DAT_01b312c0)[(int)uVar8 >> 4 & 0xf] |
                               (uint)(byte)(&DAT_01b312c0)[uVar8 & 0xf] << 4) << 4 |
                              (uint)(byte)(&DAT_01b312c0)[(int)uVar8 >> 8]) >> (bVar6 & 0x1f));
    if (pfVar10 < pfVar13) {
      fVar17 = *pfVar10;
      *pfVar10 = *pfVar13;
      *pfVar13 = fVar17;
      fVar17 = pfVar10[1];
      pfVar10[1] = pfVar9[-1];
      pfVar9[-1] = fVar17;
    }
    uVar8 = uVar8 + 1;
    pfVar9 = pfVar13;
  } while (param_2 < pfVar13);
  if (iVar12 < 4) {
    pfVar9 = (float *)&DAT_01b30270;
  }
  else {
    pfVar9 = &DAT_01b2f260 + (iVar12 >> 1);
  }
  pfVar10 = pfVar9 + 0x400;
  pfVar13 = pfVar4;
  pfVar11 = param_2;
  do {
    fVar17 = *pfVar11;
    fVar20 = pfVar9[1];
    fVar23 = *pfVar9;
    pfVar5 = pfVar13 + -2;
    fVar24 = pfVar13[-1] - pfVar11[1];
    fVar21 = fVar17 + *pfVar5;
    fVar26 = *pfVar5;
    fVar16 = (fVar23 * fVar24 + fVar20 * fVar21) * 0.5;
    fVar18 = (pfVar11[1] + pfVar13[-1]) * 0.5;
    *pfVar11 = fVar16 + fVar18;
    fVar20 = (fVar20 * fVar24 - fVar23 * fVar21) * 0.5;
    fVar17 = (fVar17 - fVar26) * 0.5;
    pfVar11[1] = fVar20 + fVar17;
    pfVar9 = pfVar9 + iVar12;
    pfVar11 = pfVar11 + 2;
    *pfVar5 = fVar18 - fVar16;
    pfVar13[-1] = fVar20 - fVar17;
    pfVar13 = pfVar5;
  } while (pfVar9 < pfVar10);
  do {
    fVar17 = *pfVar11;
    pfVar10 = pfVar5 + -2;
    pfVar9 = pfVar9 + -iVar12;
    fVar20 = *pfVar9;
    fVar24 = pfVar5[-1] - pfVar11[1];
    fVar16 = fVar17 + *pfVar10;
    fVar23 = *pfVar10;
    fVar26 = pfVar9[1];
    fVar18 = (fVar24 * pfVar9[1] + fVar20 * fVar16) * 0.5;
    fVar21 = (pfVar11[1] + pfVar5[-1]) * 0.5;
    *pfVar11 = fVar18 + fVar21;
    fVar20 = (fVar20 * fVar24 - fVar16 * fVar26) * 0.5;
    fVar17 = (fVar17 - fVar23) * 0.5;
    pfVar11[1] = fVar20 + fVar17;
    pfVar11 = pfVar11 + 2;
    *pfVar10 = fVar21 - fVar18;
    pfVar5[-1] = fVar20 - fVar17;
    pfVar5 = pfVar10;
  } while (pfVar11 < pfVar10);
  iVar14 = iVar12 >> 2;
  if (iVar14 == 0) {
    pfVar10 = (float *)&DAT_01b30270;
    pfVar13 = (float *)&DAT_01b2f268;
    pfVar9 = param_2 + 2;
    fVar17 = DAT_01b2f260;
    fVar20 = DAT_01b2f264;
    do {
      fVar23 = *pfVar10;
      fVar26 = pfVar10[1];
      fVar21 = (fVar23 - fVar17) * 0.25;
      fVar17 = fVar21 + fVar17;
      fVar24 = (fVar26 - fVar20) * 0.25;
      fVar16 = pfVar9[-1];
      fVar20 = fVar24 + fVar20;
      pfVar9[-1] = -fVar16 * fVar17 - pfVar9[-2] * fVar20;
      fVar18 = pfVar9[1];
      fVar21 = fVar23 - fVar21;
      pfVar9[-2] = -fVar16 * fVar20 + pfVar9[-2] * fVar17;
      fVar24 = fVar26 - fVar24;
      pfVar9[1] = -fVar18 * fVar21 - *pfVar9 * fVar24;
      *pfVar9 = -fVar18 * fVar24 + *pfVar9 * fVar21;
      fVar17 = *pfVar13;
      fVar20 = pfVar13[1];
      fVar16 = (fVar17 - fVar23) * 0.25;
      fVar18 = (fVar20 - fVar26) * 0.25;
      fVar21 = fVar17 - fVar16;
      pfVar9[2] = -pfVar9[3] * (fVar18 + fVar26) + pfVar9[2] * (fVar16 + fVar23);
      fVar18 = fVar20 - fVar18;
      pfVar10 = pfVar10 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar9[3] = -pfVar9[5] * fVar18 + pfVar9[4] * fVar21;
      pfVar9[4] = -pfVar9[5] * fVar21 - pfVar9[4] * fVar18;
      pfVar11 = pfVar9 + 6;
      pfVar9 = pfVar9 + 8;
    } while (pfVar11 < pfVar4);
    return;
  }
  if (iVar14 == 1) {
    pfVar10 = (float *)&DAT_01b30270;
    fVar17 = DAT_01b2f260 * 0.5;
    fVar20 = DAT_01b2f264 * 0.5;
    pfVar13 = (float *)&DAT_01b2f268;
    pfVar9 = param_2 + 2;
    do {
      fVar23 = *pfVar10;
      fVar26 = pfVar10[1];
      fVar16 = pfVar9[-2];
      fVar17 = fVar23 * 0.5 + fVar17;
      fVar20 = fVar26 * 0.5 + fVar20;
      pfVar9[-2] = -pfVar9[-1] * fVar20 + fVar16 * fVar17;
      fVar18 = *pfVar9;
      pfVar9[-1] = -pfVar9[-1] * fVar17 - fVar16 * fVar20;
      fVar20 = pfVar13[1] * 0.5;
      fVar26 = fVar26 * 0.5 + fVar20;
      fVar17 = *pfVar13 * 0.5;
      fVar23 = fVar23 * 0.5 + fVar17;
      *pfVar9 = fVar26 * -pfVar9[1] + fVar23 * fVar18;
      pfVar9[1] = fVar23 * -pfVar9[1] - fVar26 * fVar18;
      pfVar11 = pfVar9 + 2;
      pfVar10 = pfVar10 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar9 = pfVar9 + 4;
    } while (pfVar11 < pfVar4);
    return;
  }
  if (iVar14 < 4) {
    pfVar9 = (float *)&DAT_01b30270;
  }
  else {
    pfVar9 = &DAT_01b2f260 + (iVar12 >> 3);
  }
  do {
    fVar17 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar23 = *param_2;
    *param_2 = fVar20 * -param_2[1] + fVar17 * fVar23;
    param_2[1] = fVar17 * -param_2[1] - fVar20 * fVar23;
    param_2 = param_2 + 2;
    pfVar9 = pfVar9 + iVar14;
  } while (param_2 < pfVar4);
  return;
}

// 0141B8C0  FUN_0141b8c0  size=39  [run]
void FUN_0141b8c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1 >> 2) {
    do {
      *(undefined4 *)(param_3 + iVar1 * 4) = *(undefined4 *)(param_2 + 4 + iVar1 * 8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1 >> 2);
  }
  return;
}

// 0141B8F0  FUN_0141b8f0  size=908  [run]
void FUN_0141b8f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,short *param_9,int param_10,int param_11,int param_12)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int local_10;
  
  if ((param_4 == 0) || (iVar9 = param_2, param_3 == 0)) {
    iVar9 = param_1;
  }
  iVar10 = param_2;
  if (param_3 == 0) {
    iVar10 = param_1;
  }
  uVar4 = param_6 + (iVar10 >> 2) * 4;
  if ((param_4 == 0) || (param_3 == 0)) {
    iVar10 = param_7 + (param_1 >> 1) * 4;
  }
  else {
    iVar10 = param_8 + (param_2 >> 1) * 4;
  }
  local_10 = param_2 >> 2;
  if ((((param_4 == 0) || (param_3 == 0)) && (param_8 = param_7, param_3 == 0)) ||
     (param_7 = param_8, param_4 != 0)) {
    iVar7 = 0;
    param_8 = param_7;
  }
  else {
    iVar7 = local_10 - (param_1 >> 2);
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    param_2 = param_1;
  }
  param_2 = param_2 >> 2;
  if ((param_3 == 0) && (param_4 != 0)) {
    local_10 = local_10 - (param_1 >> 2);
  }
  else {
    local_10 = 0;
  }
  if (iVar7 != 0) {
    iVar12 = param_12;
    if (iVar7 <= param_12) {
      iVar12 = iVar7;
    }
    iVar14 = param_11;
    if (iVar7 <= param_11) {
      iVar14 = iVar7;
    }
    param_11 = param_11 - iVar14;
    param_12 = param_12 - iVar12;
    uVar8 = uVar4 + iVar12 * -4;
    for (uVar4 = uVar4 + iVar14 * -4; uVar8 < uVar4; uVar4 = uVar4 - 4) {
      iVar7 = (int)(*(float *)(uVar4 - 4) * 0.001953125);
      sVar3 = (short)iVar7;
      *param_9 = (sVar3 - ((-0x8001 < iVar7) - 1 & sVar3 + 0x8000U)) -
                 ((iVar7 < 0x8000) - 1 & sVar3 + 0x8001U);
      param_9 = param_9 + param_10;
    }
  }
  iVar7 = param_2;
  if (param_12 < param_2) {
    iVar7 = param_12;
  }
  iVar12 = param_2;
  if (param_11 < param_2) {
    iVar12 = param_11;
  }
  param_11 = param_11 - iVar12;
  pfVar5 = (float *)(uVar4 + iVar12 * -4);
  pfVar13 = (float *)(iVar10 + iVar12 * -4);
  iVar9 = param_5 + (iVar9 >> 1) * 4 + iVar12 * -8;
  param_12 = param_12 - iVar7;
  pfVar15 = (float *)(param_8 + iVar12 * 4);
  while ((float *)(uVar4 + iVar7 * -4) < pfVar5) {
    pfVar11 = (float *)(iVar9 + -8);
    fVar2 = *pfVar15;
    pfVar13 = pfVar13 + -1;
    iVar9 = iVar9 + -8;
    pfVar5 = pfVar5 + -1;
    pfVar15 = pfVar15 + 1;
    iVar10 = (int)((*pfVar11 * fVar2 + *pfVar13 * *pfVar5) * 0.001953125);
    sVar3 = (short)iVar10;
    *param_9 = (sVar3 - ((-0x8001 < iVar10) - 1 & sVar3 + 0x8000U)) -
               ((iVar10 < 0x8000) - 1 & sVar3 + 0x8001U);
    param_9 = param_9 + param_10;
  }
  param_4 = param_12;
  if (param_2 <= param_12) {
    param_4 = param_2;
  }
  if (param_11 < param_2) {
    param_2 = param_11;
  }
  pfVar11 = (float *)(iVar9 + param_2 * 8);
  pfVar13 = pfVar13 + -param_2;
  pfVar15 = pfVar15 + param_2;
  for (pfVar6 = pfVar5 + param_2; pfVar6 < pfVar5 + param_4; pfVar6 = pfVar6 + 1) {
    pfVar1 = pfVar13 + -1;
    fVar2 = *pfVar15;
    pfVar13 = pfVar13 + -1;
    pfVar15 = pfVar15 + 1;
    iVar9 = (int)((*pfVar1 * *pfVar6 - *pfVar11 * fVar2) * 0.001953125);
    sVar3 = (short)iVar9;
    *param_9 = (sVar3 - ((-0x8001 < iVar9) - 1 & sVar3 + 0x8000U)) -
               ((iVar9 < 0x8000) - 1 & sVar3 + 0x8001U);
    param_9 = param_9 + param_10;
    pfVar11 = pfVar11 + 2;
  }
  if (local_10 != 0) {
    iVar9 = param_12 - param_4;
    if (local_10 <= param_12 - param_4) {
      iVar9 = local_10;
    }
    if (param_11 - param_2 < local_10) {
      local_10 = param_11 - param_2;
    }
    for (pfVar13 = pfVar11 + local_10 * 2; pfVar13 < pfVar11 + iVar9 * 2; pfVar13 = pfVar13 + 2) {
      iVar10 = (int)(*pfVar13 * -0.001953125);
      sVar3 = (short)iVar10;
      *param_9 = (sVar3 - ((-0x8001 < iVar10) - 1 & sVar3 + 0x8000U)) -
                 ((iVar10 < 0x8000) - 1 & sVar3 + 0x8001U);
      param_9 = param_9 + param_10;
    }
  }
  return;
}

// 0141BC90  FUN_0141bc90  size=11  [run]
undefined4 FUN_0141bc90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 0141BCA0  FUN_0141bca0  size=22  [run]
int __fastcall FUN_0141bca0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (uVar2 = param_1 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

// 0141BCC0  FUN_0141bcc0  size=532  [run]
undefined4 FUN_0141bcc0(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar4 = FUN_0141c270(param_4,1);
  if (iVar4 == 0) {
    *param_1 = 1;
  }
  else {
    iVar4 = FUN_0141c270(param_4,4);
    *param_1 = iVar4 + 1;
  }
  iVar4 = FUN_0141c270(param_4,1);
  if (iVar4 != 0) {
    iVar4 = FUN_0141c270(param_4,8);
    param_1[3] = iVar4 + 1;
    iVar4 = (iVar4 + 1) * 2;
    if (iVar4 == 0) {
LAB_0141bd4b:
      iVar4 = 0;
    }
    else {
      uVar5 = iVar4 + 3U & 0xfffffffc;
      uVar7 = uVar5 + *(int *)(param_5 + 8);
      if (*(uint *)(param_5 + 0xc) < uVar7) goto LAB_0141bd4b;
      iVar4 = *(int *)(param_5 + 4);
      *(uint *)(param_5 + 4) = uVar5 + iVar4;
      *(uint *)(param_5 + 8) = uVar7;
    }
    iVar8 = 0;
    param_1[4] = iVar4;
    if (0 < param_1[3]) {
      uVar6 = FUN_0141bca0();
      do {
        bVar1 = FUN_0141c270(param_4,uVar6);
        *(byte *)(param_1[4] + iVar8 * 2) = bVar1;
        bVar2 = FUN_0141c270(param_4,uVar6);
        *(byte *)(param_1[4] + 1 + iVar8 * 2) = bVar2;
        if ((uint)bVar1 == (uint)bVar2) {
          return 0xffffffff;
        }
        if (param_3 <= (int)(uint)bVar1) {
          return 0xffffffff;
        }
        if (param_3 <= (int)(uint)bVar2) {
          return 0xffffffff;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1[3]);
    }
  }
  iVar4 = FUN_0141c270(param_4,2);
  if (0 < iVar4) {
    return 0xffffffff;
  }
  if (1 < *param_1) {
    if (param_3 == 0) {
LAB_0141be07:
      iVar4 = 0;
    }
    else {
      uVar7 = param_3 + 3U & 0xfffffffc;
      uVar5 = *(int *)(param_5 + 8) + uVar7;
      if (*(uint *)(param_5 + 0xc) < uVar5) goto LAB_0141be07;
      iVar4 = *(int *)(param_5 + 4);
      *(uint *)(param_5 + 4) = uVar7 + iVar4;
      *(uint *)(param_5 + 8) = uVar5;
    }
    param_1[1] = iVar4;
    local_8 = 0;
    if (0 < param_3) {
      do {
        uVar3 = FUN_0141c270(param_4,4);
        *(undefined1 *)(local_8 + param_1[1]) = uVar3;
        if (*param_1 <= (int)(uint)*(byte *)(param_1[1] + local_8)) {
          return 0xffffffff;
        }
        local_8 = local_8 + 1;
      } while (local_8 < param_3);
    }
  }
  if (*param_1 * 2 != 0) {
    uVar5 = *param_1 * 2 + 3U & 0xfffffffc;
    uVar7 = uVar5 + *(int *)(param_5 + 8);
    if (uVar7 <= *(uint *)(param_5 + 0xc)) {
      iVar4 = *(int *)(param_5 + 4);
      *(uint *)(param_5 + 4) = uVar5 + iVar4;
      *(uint *)(param_5 + 8) = uVar7;
      goto LAB_0141be69;
    }
  }
  iVar4 = 0;
LAB_0141be69:
  iVar8 = 0;
  param_1[2] = iVar4;
  if (0 < *param_1) {
    do {
      FUN_0141c270(param_4,8);
      uVar3 = FUN_0141c270(param_4,8);
      *(undefined1 *)(param_1[2] + iVar8 * 2) = uVar3;
      if (*(int *)(param_2 + 0x10) <= (int)*(char *)(param_1[2] + iVar8 * 2)) {
        return 0xffffffff;
      }
      uVar3 = FUN_0141c270(param_4,8);
      *(undefined1 *)(param_1[2] + 1 + iVar8 * 2) = uVar3;
      if (*(int *)(param_2 + 0x14) <= (int)*(char *)(param_1[2] + 1 + iVar8 * 2)) {
        return 0xffffffff;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *param_1);
  }
  return 0;
}

// 0141BEE0  FUN_0141bee0  size=737  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0141bee0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int iVar21;
  undefined4 uStack_38;
  undefined4 *local_8;
  
  iVar9 = (int)param_1;
  iVar21 = *(int *)((int)param_1 + 0x10);
  uVar4 = *(uint *)(iVar21 + *(int *)((int)param_1 + 0x50) * 4);
  iVar5 = *(int *)((int)param_1 + 0xc);
  uStack_38 = 0x141bf0c;
  puVar20 = (uint *)(&stack0xffffffcc + iVar5 * -0xc);
  puVar19 = &stack0xffffffcc + iVar5 * -0x10;
  (&uStack_38)[-iVar5] = 0x141bf16;
  (&uStack_38)[iVar5 * -2] = 0x141bf20;
  (&uStack_38)[iVar5 * -3] = 0x141bf2c;
  piVar15 = (int *)((int)param_1 + 0xc);
  param_1 = (byte *)0x0;
  if (0 < *piVar15) {
    local_8 = (undefined4 *)(iVar9 + 0x14);
    puVar18 = &stack0xffffffcc + iVar5 * -0x10;
    do {
      uVar10 = 0;
      if (1 < *param_2) {
        uVar10 = (uint)*(byte *)(param_2[1] + (int)param_1);
      }
      iVar11 = (int)*(char *)(param_2[2] + uVar10 * 2);
      iVar12 = *(int *)(iVar21 + 0x24);
      iVar16 = *(int *)(iVar12 + 0x1c + iVar11 * 0x24);
      *(undefined4 *)(puVar18 + -4) = 0x141bf91;
      iVar16 = iVar16 * -4;
      puVar19 = puVar18 + iVar16;
      *(undefined1 **)(puVar18 + iVar16 + -4) = puVar18 + iVar16;
      *(int *)(puVar18 + iVar16 + -8) = iVar12 + iVar11 * 0x24;
      *(int *)(puVar18 + iVar16 + -0xc) = iVar9;
      *(undefined4 *)(puVar18 + iVar16 + -0x10) = 0x141bf99;
      uVar10 = FUN_0141cdf0();
      puVar20[-iVar5] = uVar10;
      uVar6 = *local_8;
      *(uint *)(puVar18 + iVar16 + -0x10) = (uVar4 & 0x3fffffff) << 1;
      *(undefined4 *)(puVar18 + iVar16 + -0x14) = 0;
      *(undefined4 *)(puVar18 + iVar16 + -0x18) = uVar6;
      *puVar20 = (uint)(uVar10 != 0);
      *(undefined4 *)(puVar18 + iVar16 + -0x1c) = 0x141bfb9;
      _memset(*(void **)(puVar18 + iVar16 + -0x18),*(int *)(puVar18 + iVar16 + -0x14),
              *(size_t *)(puVar18 + iVar16 + -0x10));
      param_1 = (byte *)((int)param_1 + 1);
      local_8 = local_8 + 1;
      puVar20 = puVar20 + 1;
      puVar18 = puVar18 + iVar16;
    } while ((int)param_1 < *(int *)(iVar9 + 0xc));
  }
  iVar12 = 0;
  if (0 < param_2[3]) {
    param_1 = (byte *)(param_2[4] + 1);
    do {
      if ((*(int *)(&stack0xffffffcc + (uint)*(byte *)(param_2[4] + iVar12 * 2) * 4 + iVar5 * -0xc)
           != 0) || (*(int *)(&stack0xffffffcc + (uint)*param_1 * 4 + iVar5 * -0xc) != 0)) {
        bVar2 = *(byte *)(param_2[4] + iVar12 * 2 + 1);
        *(undefined4 *)
         (&stack0xffffffcc + (uint)*(byte *)(param_2[4] + iVar12 * 2) * 4 + iVar5 * -0xc) = 1;
        *(undefined4 *)(&stack0xffffffcc + (uint)bVar2 * 4 + iVar5 * -0xc) = 1;
      }
      param_1 = param_1 + 2;
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_2[3]);
  }
  param_1 = (byte *)0x0;
  if (0 < *param_2) {
    do {
      iVar12 = 0;
      local_8 = (undefined4 *)0x0;
      if (0 < *(int *)(iVar9 + 0xc)) {
        puVar20 = (uint *)(iVar9 + 0x14);
        puVar13 = (uint *)(&stack0xffffffcc + iVar5 * -8);
        do {
          if ((param_2[1] == 0) ||
             (puVar14 = puVar13, (byte *)(uint)*(byte *)(param_2[1] + iVar12) == param_1)) {
            local_8 = (undefined4 *)((int)local_8 + 1);
            puVar14 = puVar13 + 1;
            *puVar13 = (uint)(*(int *)(&stack0xffffffcc + iVar12 * 4 + iVar5 * -0xc) != 0);
            puVar14[iVar5 + -1] = *puVar20;
          }
          iVar12 = iVar12 + 1;
          puVar20 = puVar20 + 1;
          puVar13 = puVar14;
        } while (iVar12 < *(int *)(iVar9 + 0xc));
      }
      *(undefined4 **)(puVar19 + -4) = local_8;
      cVar3 = *(char *)(param_2[2] + 1 + (int)param_1 * 2);
      *(undefined1 **)(puVar19 + -8) = &stack0xffffffcc + iVar5 * -8;
      *(undefined1 **)(puVar19 + -0xc) = &stack0xffffffcc + iVar5 * -4;
      *(int *)(puVar19 + -0x10) = *(int *)(iVar21 + 0x28) + cVar3 * 0x1c;
      *(int *)(puVar19 + -0x14) = iVar9;
      *(undefined4 *)(puVar19 + -0x18) = 0x141c0bb;
      FUN_0141d490();
      param_1 = (byte *)((int)param_1 + 1);
    } while ((int)param_1 < *param_2);
  }
  iVar12 = param_2[3] + -1;
  if (-1 < iVar12) {
    do {
      pbVar1 = (byte *)(param_2[4] + iVar12 * 2);
      piVar15 = *(int **)(iVar9 + 0x14 + (uint)*pbVar1 * 4);
      if (0 < (int)uVar4 / 2) {
        iVar11 = *(int *)(iVar9 + 0x14 + (uint)pbVar1[1] * 4) - (int)piVar15;
        iVar16 = (int)uVar4 / 2;
        do {
          iVar7 = *piVar15;
          iVar8 = *(int *)(iVar11 + (int)piVar15);
          if (iVar7 < 1) {
            if (iVar8 < 1) {
              *(int *)(iVar11 + (int)piVar15) = iVar7;
              *piVar15 = iVar7 - iVar8;
            }
            else {
              *(int *)(iVar11 + (int)piVar15) = iVar8 + iVar7;
            }
          }
          else if (iVar8 < 1) {
            *(int *)(iVar11 + (int)piVar15) = iVar7;
            *piVar15 = iVar8 + iVar7;
          }
          else {
            *(int *)(iVar11 + (int)piVar15) = iVar7 - iVar8;
          }
          piVar15 = piVar15 + 1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  iVar12 = 0;
  if (0 < *(int *)(iVar9 + 0xc)) {
    puVar17 = (undefined4 *)(iVar9 + 0x14);
    do {
      uVar10 = 0;
      if (1 < *param_2) {
        uVar10 = (uint)*(byte *)(param_2[1] + iVar12);
      }
      cVar3 = *(char *)(param_2[2] + uVar10 * 2);
      *(undefined4 *)(puVar19 + -4) = *puVar17;
      *(undefined4 *)(puVar19 + -8) = *(undefined4 *)(&stack0xffffffcc + iVar12 * 4 + iVar5 * -0x10)
      ;
      *(int *)(puVar19 + -0xc) = *(int *)(iVar21 + 0x24) + cVar3 * 0x24;
      *(int *)(puVar19 + -0x10) = iVar9;
      *(undefined4 *)(puVar19 + -0x14) = 0x141c185;
      FUN_0141d080();
      iVar12 = iVar12 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar12 < *(int *)(iVar9 + 0xc));
  }
  iVar21 = 0;
  if (0 < *(int *)(iVar9 + 0xc)) {
    puVar17 = (undefined4 *)(iVar9 + 0x14);
    do {
      *(undefined4 *)(puVar19 + -4) = *puVar17;
      *(uint *)(puVar19 + -8) = uVar4;
      *(undefined4 *)(puVar19 + -0xc) = 0x141c1ac;
      FUN_0141ad60();
      iVar21 = iVar21 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar21 < *(int *)(iVar9 + 0xc));
  }
  return 0;
}

// 0141C1D0  FUN_0141c1d0  size=128  [run]
uint FUN_0141c1d0(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)param_1;
  pbVar2 = *(byte **)(param_1 + 4);
  iVar5 = param_2 + iVar1;
  uVar4 = (uint)(*pbVar2 >> (*param_1 & 0x1f));
  if (8 < iVar5) {
    cVar3 = (char)iVar1;
    uVar4 = uVar4 | (uint)pbVar2[1] << (8U - cVar3 & 0x1f);
    if ((((0x10 < iVar5) &&
         (uVar4 = uVar4 | (uint)pbVar2[2] << (0x10U - cVar3 & 0x1f), 0x18 < iVar5)) &&
        (uVar4 = uVar4 | (uint)pbVar2[3] << (0x18U - cVar3 & 0x1f), 0x20 < iVar5)) && (iVar1 != 0))
    {
      uVar4 = uVar4 | (uint)pbVar2[4] << (0x20U - cVar3 & 0x1f);
    }
  }
  return uVar4 & *(uint *)(&DAT_01b312d0 + param_2 * 4);
}

// 0141C250  FUN_0141c250  size=29  [run]
void FUN_0141c250(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + *param_1) >> 3;
  param_1[2] = param_1[2] - iVar1;
  param_1[1] = param_1[1] + iVar1;
  *param_1 = param_2 + *param_1 & 7;
  return;
}

// 0141C270  FUN_0141c270  size=45  [run]
void FUN_0141c270(uint *param_1,int param_2)

{
  int iVar1;
  
  FUN_0141c1d0(param_1,param_2);
  iVar1 = (int)(*param_1 + param_2) >> 3;
  param_1[2] = param_1[2] - iVar1;
  param_1[1] = param_1[1] + iVar1;
  *param_1 = *param_1 + param_2 & 7;
  return;
}

// 0141C2A0  FUN_0141c2a0  size=70  [run]
void * __thiscall FUN_0141c2a0(int param_1,size_t param_2)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = param_2 + 3 & 0xfffffffc;
    uVar2 = *(int *)(param_1 + 8) + uVar1;
    if (uVar2 <= *(uint *)(param_1 + 0xc)) {
      _Dst = *(void **)(param_1 + 4);
      *(uint *)(param_1 + 4) = uVar1 + (int)_Dst;
      *(uint *)(param_1 + 8) = uVar2;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,param_2);
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}

// 0141C310  FUN_0141c310  size=74  [run]
undefined4 FUN_0141c310(int *param_1,byte param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  _memset(param_1,0,0x30);
  iVar1 = 1 << (param_2 & 0x1f);
  iVar2 = 1 << (param_3 & 0x1f);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  if (((0x3f < iVar1) && (iVar1 <= iVar2)) && (iVar2 < 0x2001)) {
    return 0;
  }
  return 0xffffff7b;
}

// 0141C360  FUN_0141c360  size=744  [run]
undefined4 FUN_0141c360(void *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  size_t sVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  
  iVar2 = (int)param_1;
  iVar4 = FUN_0141c270(param_3,8);
  sVar1 = (iVar4 + 1) * 0x3c;
  *(int *)((int)param_1 + 0x18) = iVar4 + 1;
  if ((sVar1 == 0) || (uVar7 = sVar1 + *(int *)(param_4 + 8), *(uint *)(param_4 + 0xc) < uVar7)) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = *(void **)(param_4 + 4);
    *(uint *)(param_4 + 8) = uVar7;
    *(void **)(param_4 + 4) = (void *)(sVar1 + (int)_Dst);
    if (_Dst != (void *)0x0) {
      _memset(_Dst,0,sVar1);
    }
  }
  *(void **)((int)param_1 + 0x2c) = _Dst;
  iVar4 = 0;
  if (0 < *(int *)((int)param_1 + 0x18)) {
    param_1 = (void *)0x0;
    do {
      iVar5 = FUN_0141c270(param_3,10);
      local_c = (&PTR_DAT_01b31368)[iVar5];
      local_10 = 0;
      local_8 = 0x36a;
      FUN_0141dff0(&local_10,*(int *)(iVar2 + 0x2c) + (int)param_1,param_4);
      param_1 = (void *)((int)param_1 + 0x3c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x18));
  }
  iVar4 = FUN_0141c270(param_3,6);
  *(int *)(iVar2 + 0x10) = iVar4 + 1;
  sVar1 = (iVar4 + 1) * 0x24;
  if ((sVar1 == 0) || (uVar7 = sVar1 + *(int *)(param_4 + 8), *(uint *)(param_4 + 0xc) < uVar7)) {
    param_1 = (void *)0x0;
  }
  else {
    param_1 = *(void **)(param_4 + 4);
    *(void **)(param_4 + 4) = (void *)(sVar1 + (int)param_1);
    *(uint *)(param_4 + 8) = uVar7;
    if (param_1 != (void *)0x0) {
      _memset(param_1,0,sVar1);
    }
  }
  *(void **)(iVar2 + 0x24) = param_1;
  param_1 = (void *)0x0;
  if (0 < *(int *)(iVar2 + 0x10)) {
    iVar4 = 0;
    do {
      iVar5 = FUN_0141c7e0(*(int *)(iVar2 + 0x24) + iVar4,iVar2,param_3,param_4);
      if (iVar5 != 0) {
        return 0xffffff7b;
      }
      param_1 = (void *)((int)param_1 + 1);
      iVar4 = iVar4 + 0x24;
    } while ((int)param_1 < *(int *)(iVar2 + 0x10));
  }
  iVar5 = FUN_0141c270(param_3,6);
  iVar4 = (iVar5 + 1) * 0x1c;
  *(int *)(iVar2 + 0x14) = iVar5 + 1;
  if ((iVar4 == 0) || (uVar7 = *(int *)(param_4 + 8) + iVar4, *(uint *)(param_4 + 0xc) < uVar7)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_4 + 4);
    *(int *)(param_4 + 4) = iVar4 + iVar5;
    *(uint *)(param_4 + 8) = uVar7;
  }
  *(int *)(iVar2 + 0x28) = iVar5;
  param_1 = (void *)0x0;
  if (0 < *(int *)(iVar2 + 0x14)) {
    iVar4 = 0;
    do {
      iVar5 = FUN_0141d2e0(*(int *)(iVar2 + 0x28) + iVar4,iVar2,param_3,param_4);
      if (iVar5 != 0) {
        return 0xffffff7b;
      }
      param_1 = (void *)((int)param_1 + 1);
      iVar4 = iVar4 + 0x1c;
    } while ((int)param_1 < *(int *)(iVar2 + 0x14));
  }
  iVar4 = FUN_0141c270(param_3,6);
  *(int *)(iVar2 + 0xc) = iVar4 + 1;
  iVar4 = (iVar4 + 1) * 0x14;
  if ((iVar4 == 0) || (uVar7 = iVar4 + *(int *)(param_4 + 8), *(uint *)(param_4 + 0xc) < uVar7)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_4 + 4);
    *(int *)(param_4 + 4) = iVar4 + iVar5;
    *(uint *)(param_4 + 8) = uVar7;
  }
  *(int *)(iVar2 + 0x20) = iVar5;
  param_1 = (void *)0x0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    iVar4 = 0;
    do {
      iVar5 = FUN_0141bcc0(*(int *)(iVar2 + 0x20) + iVar4,iVar2,param_2,param_3,param_4);
      if (iVar5 != 0) {
        return 0xffffff7b;
      }
      param_1 = (void *)((int)param_1 + 1);
      iVar4 = iVar4 + 0x14;
    } while ((int)param_1 < *(int *)(iVar2 + 0xc));
  }
  iVar4 = FUN_0141c270(param_3,6);
  *(int *)(iVar2 + 8) = iVar4 + 1;
  iVar4 = (iVar4 + 1) * 2;
  if (iVar4 != 0) {
    uVar6 = iVar4 + 3U & 0xfffffffc;
    uVar7 = uVar6 + *(int *)(param_4 + 8);
    if (uVar7 <= *(uint *)(param_4 + 0xc)) {
      iVar4 = *(int *)(param_4 + 4);
      *(uint *)(param_4 + 4) = uVar6 + iVar4;
      *(uint *)(param_4 + 8) = uVar7;
      goto LAB_0141c5f5;
    }
  }
  iVar4 = 0;
LAB_0141c5f5:
  iVar5 = 0;
  *(int *)(iVar2 + 0x1c) = iVar4;
  if (0 < *(int *)(iVar2 + 8)) {
    do {
      uVar3 = FUN_0141c270(param_3,1);
      *(undefined1 *)(*(int *)(iVar2 + 0x1c) + iVar5 * 2) = uVar3;
      uVar3 = FUN_0141c270(param_3,8);
      *(undefined1 *)(*(int *)(iVar2 + 0x1c) + 1 + iVar5 * 2) = uVar3;
      if (*(int *)(iVar2 + 0xc) <= (int)(uint)*(byte *)(*(int *)(iVar2 + 0x1c) + 1 + iVar5 * 2)) {
        return 0xffffff7b;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 8));
  }
  return 0;
}

// 0141C650  FUN_0141c650  size=17  [run]
int FUN_0141c650(int param_1)

{
  return (-1 < *(int *)(param_1 + 8)) - 1;
}

// 0141C670  FUN_0141c670  size=352  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0141c670(undefined1 *param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_14;
  undefined1 *local_c;
  
  uVar7 = (uint)param_3;
  puVar5 = &stack0xffffffd4 + -uVar7;
  uVar1 = 1;
  puVar4 = param_1;
  local_c = &stack0xffffffd4 + -uVar7;
  if (1 < param_3) {
    do {
      puVar5 = puVar4;
      uVar8 = (uint)uVar1;
      uVar2 = 0;
joined_r0x0141c6af:
      if (uVar8 < uVar7) {
        uVar3 = (uint)uVar2;
        uVar8 = uVar1 + uVar3;
        local_14 = uVar3 + (uint)uVar1 * 2;
        if (uVar7 <= local_14) {
          local_14 = uVar7;
        }
        uVar9 = uVar8;
        if (uVar3 < uVar8) {
          do {
            if ((int)local_14 <= (int)uVar9) goto joined_r0x0141c717;
            uVar10 = (uint)uVar2;
            if (*(ushort *)(param_2 + (char)puVar5[uVar3] * 2) <
                *(ushort *)(param_2 + (char)puVar5[uVar9] * 2)) {
              uVar6 = puVar5[uVar3];
              uVar3 = uVar3 + 1;
            }
            else {
              uVar6 = puVar5[uVar9];
              uVar9 = uVar9 + 1;
            }
            uVar2 = uVar2 + 1;
            local_c[uVar10] = uVar6;
          } while ((int)uVar3 < (int)uVar8);
        }
        goto joined_r0x0141c73c;
      }
      if (uVar2 < param_3) {
        puVar4 = local_c + uVar2;
        uVar8 = (uint)(ushort)(param_3 - uVar2);
        do {
          *puVar4 = puVar4[(int)puVar5 - (int)local_c];
          puVar4 = puVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar1 = uVar1 * 2;
      puVar4 = local_c;
      local_c = puVar5;
    } while (uVar1 < param_3);
  }
  if ((puVar5 == param_1) && (param_3 != 0)) {
    iVar11 = (int)puVar4 - (int)puVar5;
    do {
      *puVar5 = puVar5[iVar11];
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
joined_r0x0141c717:
  for (; (int)uVar3 < (int)uVar8; uVar3 = uVar3 + 1) {
    local_c[uVar2] = puVar5[uVar3];
    uVar2 = uVar2 + 1;
  }
joined_r0x0141c73c:
  for (; (int)uVar9 < (int)local_14; uVar9 = uVar9 + 1) {
    uVar8 = (uint)uVar2;
    uVar2 = uVar2 + 1;
    local_c[uVar8] = puVar5[uVar9];
  }
  uVar8 = (uint)uVar2 + (uint)uVar1;
  goto joined_r0x0141c6af;
}

// 0141C7E0  FUN_0141c7e0  size=1030  [run]
undefined4 FUN_0141c7e0(int *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  undefined1 uVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int local_1c;
  int local_18;
  int local_c;
  int local_8;
  
  piVar5 = param_1;
  iVar14 = 0;
  local_8 = 0;
  local_c = -1;
  iVar9 = FUN_0141c270(param_3,5);
  param_1[6] = iVar9;
  if (iVar9 == 0) {
LAB_0141c82d:
    iVar9 = 0;
  }
  else {
    uVar10 = iVar9 + 3U & 0xfffffffc;
    uVar13 = *(int *)(param_4 + 8) + uVar10;
    if (*(uint *)(param_4 + 0xc) < uVar13) goto LAB_0141c82d;
    iVar9 = *(int *)(param_4 + 4);
    *(uint *)(param_4 + 4) = uVar10 + iVar9;
    *(uint *)(param_4 + 8) = uVar13;
  }
  param_1[1] = iVar9;
  if (0 < param_1[6]) {
    do {
      uVar6 = FUN_0141c270(param_3,4);
      *(undefined1 *)(iVar14 + param_1[1]) = uVar6;
      if (local_c < *(char *)(param_1[1] + iVar14)) {
        local_c = (int)*(char *)(param_1[1] + iVar14);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_1[6]);
  }
  iVar9 = (local_c + 1) * 0xb;
  if (iVar9 == 0) {
LAB_0141c888:
    iVar9 = 0;
  }
  else {
    uVar10 = iVar9 + 3U & 0xfffffffc;
    uVar13 = *(int *)(param_4 + 8) + uVar10;
    if (*(uint *)(param_4 + 0xc) < uVar13) goto LAB_0141c888;
    iVar9 = *(int *)(param_4 + 4);
    *(uint *)(param_4 + 4) = uVar10 + iVar9;
    *(uint *)(param_4 + 8) = uVar13;
  }
  *param_1 = iVar9;
  param_1 = (int *)0x0;
  if (0 < local_c + 1) {
    iVar9 = 0;
    do {
      cVar7 = FUN_0141c270(param_3,3);
      *(char *)(iVar9 + *piVar5) = cVar7 + '\x01';
      uVar6 = FUN_0141c270(param_3,2);
      *(undefined1 *)(iVar9 + 1 + *piVar5) = uVar6;
      if (*(int *)(param_3 + 8) < 0) {
        return 0xffffffff;
      }
      if (*(char *)(*piVar5 + 1 + iVar9) == '\0') {
        *(undefined1 *)(*piVar5 + 2 + iVar9) = 0;
      }
      else {
        uVar6 = FUN_0141c270(param_3,8);
        *(undefined1 *)(iVar9 + 2 + *piVar5) = uVar6;
        if (*(int *)(param_2 + 0x18) <= (int)(uint)*(byte *)(iVar9 + 2 + *piVar5)) {
          return 0xffffffff;
        }
      }
      if (*(int *)(param_2 + 0x18) <= (int)(uint)*(byte *)(iVar9 + 2 + *piVar5)) {
        return 0xffffffff;
      }
      iVar14 = 0;
      if (0 < 1 << (*(byte *)(iVar9 + *piVar5 + 1) & 0x1f)) {
        do {
          cVar7 = FUN_0141c270(param_3,8);
          *(char *)(*piVar5 + iVar9 + 3 + iVar14) = cVar7 + -1;
          bVar2 = *(byte *)(*piVar5 + iVar9 + 3 + iVar14);
          if ((*(int *)(param_2 + 0x18) <= (int)(uint)bVar2) && (bVar2 != 0xff)) {
            return 0xffffffff;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < 1 << (*(byte *)(iVar9 + 1 + *piVar5) & 0x1f));
      }
      param_1 = (int *)((int)param_1 + 1);
      iVar9 = iVar9 + 0xb;
    } while ((int)param_1 < local_c + 1);
  }
  iVar9 = FUN_0141c270(param_3,2);
  piVar5[8] = iVar9 + 1;
  uVar11 = FUN_0141c270(param_3,4);
  iVar9 = 0;
  if (0 < piVar5[6]) {
    do {
      local_8 = local_8 + *(char *)(*(char *)(piVar5[1] + iVar9) * 0xb + *piVar5);
      iVar9 = iVar9 + 1;
    } while (iVar9 < piVar5[6]);
  }
  iVar9 = (local_8 + 2) * 2;
  if (iVar9 == 0) {
LAB_0141c9f2:
    iVar9 = 0;
  }
  else {
    uVar13 = iVar9 + 3U & 0xfffffffc;
    uVar10 = *(int *)(param_4 + 8) + uVar13;
    if (*(uint *)(param_4 + 0xc) < uVar10) goto LAB_0141c9f2;
    iVar9 = *(int *)(param_4 + 4);
    *(uint *)(param_4 + 4) = uVar13 + iVar9;
    *(uint *)(param_4 + 8) = uVar10;
  }
  piVar5[2] = iVar9;
  if (local_8 + 2 == 0) {
LAB_0141ca18:
    iVar9 = 0;
  }
  else {
    uVar13 = local_8 + 5U & 0xfffffffc;
    uVar10 = *(int *)(param_4 + 8) + uVar13;
    if (*(uint *)(param_4 + 0xc) < uVar10) goto LAB_0141ca18;
    iVar9 = *(int *)(param_4 + 4);
    *(uint *)(param_4 + 4) = uVar13 + iVar9;
    *(uint *)(param_4 + 8) = uVar10;
  }
  piVar5[3] = iVar9;
  if (local_8 == 0) {
LAB_0141ca41:
    iVar9 = 0;
  }
  else {
    uVar13 = local_8 + 3U & 0xfffffffc;
    uVar10 = *(int *)(param_4 + 8) + uVar13;
    if (*(uint *)(param_4 + 0xc) < uVar10) goto LAB_0141ca41;
    iVar9 = *(int *)(param_4 + 4);
    *(uint *)(param_4 + 4) = uVar13 + iVar9;
    *(uint *)(param_4 + 8) = uVar10;
  }
  piVar5[5] = iVar9;
  if (local_8 != 0) {
    uVar13 = local_8 + 3U & 0xfffffffc;
    uVar10 = *(int *)(param_4 + 8) + uVar13;
    if (uVar10 <= *(uint *)(param_4 + 0xc)) {
      iVar9 = *(int *)(param_4 + 4);
      *(uint *)(param_4 + 4) = uVar13 + iVar9;
      *(uint *)(param_4 + 8) = uVar10;
      goto LAB_0141ca69;
    }
  }
  iVar9 = 0;
LAB_0141ca69:
  iVar14 = 0;
  piVar5[4] = iVar9;
  param_1 = (int *)0x0;
  if (0 < piVar5[6]) {
    iVar9 = 0;
    do {
      iVar14 = iVar14 + *(char *)(*(char *)(piVar5[1] + (int)param_1) * 0xb + *piVar5);
      if (iVar9 < iVar14) {
        iVar15 = iVar9 * 2 + 4;
        do {
          uVar8 = FUN_0141c270(param_3,uVar11);
          *(ushort *)(iVar15 + piVar5[2]) = uVar8;
          if (1 << ((byte)uVar11 & 0x1f) <= (int)(uint)uVar8) {
            return 0xffffffff;
          }
          iVar9 = iVar9 + 1;
          iVar15 = iVar15 + 2;
        } while (iVar9 < iVar14);
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar5[6]);
  }
  if (*(int *)(param_3 + 8) < 0) {
    return 0xffffffff;
  }
  *(undefined2 *)piVar5[2] = 0;
  *(short *)(piVar5[2] + 2) = 1 << ((byte)uVar11 & 0x1f);
  iVar9 = 0;
  piVar5[7] = iVar14 + 2;
  if (0 < iVar14 + 2) {
    do {
      *(char *)(iVar9 + piVar5[3]) = (char)iVar9;
      iVar9 = iVar9 + 1;
    } while (iVar9 < piVar5[7]);
  }
  FUN_0141c670(piVar5[3],piVar5[2],(short)piVar5[7]);
  iVar9 = 0;
  if (0 < piVar5[7] + -2) {
    param_1 = (int *)0x4;
    do {
      puVar12 = (ushort *)piVar5[2];
      uVar8 = puVar12[1];
      puVar1 = (ushort *)((int)puVar12 + (int)param_1);
      iVar14 = 0;
      local_18 = 0;
      local_18._0_1_ = 0;
      local_1c = 1;
      local_1c._0_1_ = 1;
      uVar4 = 0;
      if (0 < iVar9 + 2) {
        do {
          uVar3 = *puVar12;
          if ((uVar4 < uVar3) && (uVar3 < *puVar1)) {
            local_18 = iVar14;
            uVar4 = uVar3;
          }
          if ((uVar3 < uVar8) && (*puVar1 < uVar3)) {
            local_1c = iVar14;
            uVar8 = uVar3;
          }
          iVar14 = iVar14 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar14 < iVar9 + 2);
      }
      param_1 = (int *)((int)param_1 + 2);
      *(undefined1 *)(iVar9 + piVar5[5]) = (undefined1)local_18;
      *(undefined1 *)(iVar9 + piVar5[4]) = (undefined1)local_1c;
      iVar9 = iVar9 + 1;
    } while (iVar9 < piVar5[7] + -2);
  }
  return 0;
}

// 0141CC00  FUN_0141cc00  size=67  [run]
int __fastcall FUN_0141cc00(int param_1,uint param_2,int param_3,int param_4)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  param_2 = param_2 & 0x7fff;
  uVar1 = (in_EAX & 0x7fff) - param_2;
  iVar2 = (int)(((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) * (param_1 - param_3)) /
          (param_4 - param_3);
  if ((int)uVar1 < 0) {
    return param_2 - iVar2;
  }
  return iVar2 + param_2;
}

// 0141CC50  FUN_0141cc50  size=401  [run]
void __thiscall FUN_0141cc50(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_8;
  
  iVar10 = param_3 - param_2;
  uVar5 = param_1 - param_4;
  iVar3 = (int)uVar5 / iVar10;
  if ((int)uVar5 < 0) {
    local_8 = iVar3 + -1;
  }
  else {
    local_8 = iVar3 + 1;
  }
  uVar7 = iVar3 * iVar10 >> 0x1f;
  iVar9 = ((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) - ((iVar3 * iVar10 ^ uVar7) - uVar7)
  ;
  pfVar4 = (float *)(param_5 + param_2 * 4);
  *pfVar4 = (float)(int)*pfVar4 * *(float *)(&DAT_01b31cc8 + param_4 * 4);
  iVar8 = param_2 + 1;
  iVar6 = 0;
  if (iVar8 < param_3) {
    if (3 < param_3 - iVar8) {
      param_2 = ((param_3 - iVar8) - 4U >> 2) + 1;
      pfVar4 = (float *)(param_5 + 8 + iVar8 * 4);
      iVar8 = iVar8 + param_2 * 4;
      do {
        iVar6 = iVar6 + iVar9;
        iVar2 = iVar3;
        if (iVar10 <= iVar6) {
          iVar6 = iVar6 - iVar10;
          iVar2 = local_8;
        }
        iVar6 = iVar6 + iVar9;
        pfVar4[-2] = (float)(int)pfVar4[-2] * *(float *)(&DAT_01b31cc8 + (param_4 + iVar2) * 4);
        iVar11 = iVar3;
        if (iVar10 <= iVar6) {
          iVar6 = iVar6 - iVar10;
          iVar11 = local_8;
        }
        iVar11 = param_4 + iVar2 + iVar11;
        iVar6 = iVar6 + iVar9;
        pfVar4[-1] = (float)(int)pfVar4[-1] * *(float *)(&DAT_01b31cc8 + iVar11 * 4);
        iVar2 = iVar3;
        if (iVar10 <= iVar6) {
          iVar6 = iVar6 - iVar10;
          iVar2 = local_8;
        }
        iVar11 = iVar11 + iVar2;
        iVar6 = iVar6 + iVar9;
        *pfVar4 = (float)(int)*pfVar4 * *(float *)(&DAT_01b31cc8 + iVar11 * 4);
        param_4 = iVar3;
        if (iVar10 <= iVar6) {
          iVar6 = iVar6 - iVar10;
          param_4 = local_8;
        }
        param_4 = iVar11 + param_4;
        pfVar4[1] = (float)(int)pfVar4[1] * *(float *)(&DAT_01b31cc8 + param_4 * 4);
        pfVar4 = pfVar4 + 4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (iVar8 < param_3) {
      pfVar4 = (float *)(&DAT_01b31cc8 + param_4 * 4);
      do {
        iVar6 = iVar6 + iVar9;
        iVar2 = iVar3;
        if (iVar10 <= iVar6) {
          iVar6 = iVar6 - iVar10;
          iVar2 = local_8;
        }
        pfVar4 = pfVar4 + iVar2;
        pfVar1 = (float *)(param_5 + iVar8 * 4);
        iVar8 = iVar8 + 1;
        *pfVar1 = (float)(int)*pfVar1 * *pfVar4;
      } while (iVar8 < param_3);
    }
  }
  return;
}

// 0141CDF0  FUN_0141cdf0  size=645  [run]
undefined4 * FUN_0141cdf0(int param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_20;
  int local_18;
  int local_c;
  int *local_8;
  
  iVar9 = *(int *)(*(int *)(param_1 + 0x10) + 0x2c);
  iVar2 = *(int *)(&DAT_01b31350 + param_2[8] * 4);
  iVar4 = FUN_0141c270(param_1,1);
  if (iVar4 != 1) {
    return (undefined4 *)0x0;
  }
  iVar4 = 0;
  uVar10 = iVar2 - 1;
  for (uVar6 = uVar10; uVar6 != 0; uVar6 = uVar6 >> 1) {
    iVar4 = iVar4 + 1;
  }
  uVar5 = FUN_0141c270(param_1,iVar4);
  *param_3 = uVar5;
  iVar4 = 0;
  for (; uVar10 != 0; uVar10 = uVar10 >> 1) {
    iVar4 = iVar4 + 1;
  }
  uVar5 = FUN_0141c270(param_1,iVar4);
  param_3[1] = uVar5;
  local_20 = 0;
  local_c = 2;
  if (0 < param_2[6]) {
    do {
      iVar8 = *(char *)(param_2[1] + local_20) * 0xb;
      iVar7 = (int)*(char *)(iVar8 + *param_2);
      iVar4 = iVar8 + *param_2;
      bVar1 = *(byte *)(iVar4 + 1);
      uVar6 = 0;
      if ((bVar1 != 0) &&
         (uVar6 = FUN_0141e730(iVar9 + (uint)*(byte *)(iVar4 + 2) * 0x3c,param_1),
         uVar6 == 0xffffffff)) {
        return (undefined4 *)0x0;
      }
      local_18 = 0;
      if (0 < iVar7) {
        local_8 = param_3 + local_c;
        do {
          uVar10 = (uint)*(byte *)(((1 << (bVar1 & 0x1f)) - 1U & uVar6) + iVar8 + 3 + *param_2);
          uVar6 = (int)uVar6 >> (bVar1 & 0x1f);
          if (uVar10 == 0xff) {
            *local_8 = 0;
          }
          else {
            iVar4 = FUN_0141e730(iVar9 + uVar10 * 0x3c,param_1);
            *local_8 = iVar4;
            if (iVar4 == -1) {
              return (undefined4 *)0x0;
            }
          }
          local_8 = local_8 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < iVar7);
      }
      local_c = local_c + iVar7;
      local_20 = local_20 + 1;
    } while (local_20 < param_2[6]);
  }
  iVar9 = 2;
  if (2 < param_2[7]) {
    do {
      iVar7 = (int)*(char *)(param_2[5] + -2 + iVar9);
      uVar10 = (uint)*(ushort *)(param_2[2] + iVar7 * 2);
      iVar4 = (int)*(char *)(param_2[4] + -2 + iVar9);
      uVar6 = (param_3[iVar4] & 0x7fff) - (param_3[iVar7] & 0x7fff);
      iVar4 = (int)(((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) *
                   (*(ushort *)(param_2[2] + iVar9 * 2) - uVar10)) /
              (int)(*(ushort *)(param_2[2] + iVar4 * 2) - uVar10);
      if ((int)uVar6 < 0) {
        iVar4 = -iVar4;
      }
      uVar11 = (param_3[iVar7] & 0x7fff) + iVar4;
      uVar10 = iVar2 - uVar11;
      uVar6 = uVar10;
      if ((int)uVar11 <= (int)uVar10) {
        uVar6 = uVar11;
      }
      uVar3 = param_3[iVar9];
      if (uVar3 == 0) {
        param_3[iVar9] = uVar11 | 0x8000;
      }
      else {
        if ((int)uVar3 < (int)(uVar6 * 2)) {
          if ((uVar3 & 1) == 0) {
            iVar4 = (int)uVar3 >> 1;
          }
          else {
            iVar4 = -((int)(uVar3 + 1) >> 1);
          }
        }
        else if ((int)uVar11 < (int)uVar10) {
          iVar4 = uVar3 - uVar11;
        }
        else {
          iVar4 = (uVar10 - uVar3) + -1;
        }
        param_3[iVar9] = iVar4 + uVar11;
        param_3[*(char *)(param_2[5] + -2 + iVar9)] =
             param_3[*(char *)(param_2[5] + -2 + iVar9)] & 0x7fff;
        param_3[*(char *)(param_2[4] + -2 + iVar9)] =
             param_3[*(char *)(param_2[4] + -2 + iVar9)] & 0x7fff;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[7]);
  }
  return param_3;
}

// 0141D080  FUN_0141d080  size=589  [run]
undefined4 FUN_0141d080(float *param_1,int param_2,int *param_3,void *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int local_18;
  int local_14;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    _memset(param_4,0,
            (*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)((int)param_1 + 0x50) * 4) / 2) * 4);
    return 0;
  }
  local_14 = *param_3 * *(int *)(param_2 + 0x20);
  param_1 = (float *)0x0;
  local_18 = 1;
  iVar12 = local_14;
  if (1 < *(int *)(param_2 + 0x1c)) {
    do {
      iVar8 = (int)*(char *)(*(int *)(param_2 + 0xc) + local_18);
      uVar3 = param_3[iVar8] & 0x7fff;
      iVar4 = iVar12;
      if (uVar3 == param_3[iVar8]) {
        iVar4 = *(int *)(param_2 + 0x20) * uVar3;
        uVar9 = (uint)*(ushort *)(*(int *)(param_2 + 8) + iVar8 * 2);
        uVar3 = iVar4 - iVar12;
        iVar10 = uVar9 - (int)param_1;
        iVar8 = (int)uVar3 / iVar10;
        if ((int)uVar3 < 0) {
          local_8 = iVar8 + -1;
        }
        else {
          local_8 = iVar8 + 1;
        }
        uVar6 = iVar8 * iVar10 >> 0x1f;
        iVar7 = ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) -
                ((iVar8 * iVar10 ^ uVar6) - uVar6);
        pfVar13 = (float *)((int)param_4 + (int)param_1 * 4);
        *pfVar13 = (float)(int)*pfVar13 * *(float *)(&DAT_01b31cc8 + local_14 * 4);
        uVar3 = (int)param_1 + 1;
        iVar5 = 0;
        param_1 = (float *)uVar9;
        local_14 = iVar4;
        if (uVar3 < uVar9) {
          if (3 < (int)(uVar9 - uVar3)) {
            iVar2 = uVar3 * 4;
            local_14 = ((uVar9 - uVar3) - 4 >> 2) + 1;
            uVar3 = uVar3 + local_14 * 4;
            param_1 = (float *)((int)param_4 + iVar2 + 8);
            do {
              iVar5 = iVar5 + iVar7;
              iVar2 = iVar8;
              if (iVar10 <= iVar5) {
                iVar5 = iVar5 - iVar10;
                iVar2 = local_8;
              }
              iVar5 = iVar5 + iVar7;
              param_1[-2] = (float)(int)param_1[-2] *
                            *(float *)(&DAT_01b31cc8 + (iVar12 + iVar2) * 4);
              iVar11 = iVar8;
              if (iVar10 <= iVar5) {
                iVar5 = iVar5 - iVar10;
                iVar11 = local_8;
              }
              iVar11 = iVar12 + iVar2 + iVar11;
              iVar5 = iVar5 + iVar7;
              param_1[-1] = (float)(int)param_1[-1] * *(float *)(&DAT_01b31cc8 + iVar11 * 4);
              iVar12 = iVar8;
              if (iVar10 <= iVar5) {
                iVar5 = iVar5 - iVar10;
                iVar12 = local_8;
              }
              iVar11 = iVar11 + iVar12;
              iVar5 = iVar5 + iVar7;
              *param_1 = (float)(int)*param_1 * *(float *)(&DAT_01b31cc8 + iVar11 * 4);
              iVar12 = iVar8;
              if (iVar10 <= iVar5) {
                iVar5 = iVar5 - iVar10;
                iVar12 = local_8;
              }
              iVar12 = iVar11 + iVar12;
              local_14 = local_14 + -1;
              param_1[1] = (float)(int)param_1[1] * *(float *)(&DAT_01b31cc8 + iVar12 * 4);
              param_1 = param_1 + 4;
            } while (local_14 != 0);
          }
          param_1 = (float *)uVar9;
          local_14 = iVar4;
          if ((int)uVar3 < (int)uVar9) {
            pfVar13 = (float *)(&DAT_01b31cc8 + iVar12 * 4);
            do {
              iVar5 = iVar5 + iVar7;
              iVar12 = iVar8;
              if (iVar10 <= iVar5) {
                iVar5 = iVar5 - iVar10;
                iVar12 = local_8;
              }
              pfVar13 = pfVar13 + iVar12;
              pfVar1 = (float *)((int)param_4 + uVar3 * 4);
              uVar3 = uVar3 + 1;
              *pfVar1 = (float)(int)*pfVar1 * *pfVar13;
            } while ((int)uVar3 < (int)uVar9);
          }
        }
      }
      local_18 = local_18 + 1;
      iVar12 = iVar4;
    } while (local_18 < *(int *)(param_2 + 0x1c));
  }
  return 1;
}

// 0141D2E0  FUN_0141d2e0  size=422  [run]
undefined4 FUN_0141d2e0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar5 = FUN_0141c270(param_3,2);
  *param_1 = uVar5;
  uVar5 = FUN_0141c270(param_3,0x18);
  param_1[3] = uVar5;
  uVar5 = FUN_0141c270(param_3,0x18);
  param_1[4] = uVar5;
  iVar6 = FUN_0141c270(param_3,0x18);
  param_1[5] = iVar6 + 1;
  cVar3 = FUN_0141c270(param_3,6);
  *(char *)(param_1 + 6) = cVar3 + '\x01';
  bVar4 = FUN_0141c270(param_3,8);
  *(byte *)((int)param_1 + 0x19) = bVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar4) {
    return 1;
  }
  if (*(char *)(param_1 + 6) != 0) {
    uVar7 = (int)*(char *)(param_1 + 6) + 3U & 0xfffffffc;
    uVar1 = uVar7 + *(int *)(param_4 + 8);
    if (uVar1 <= *(uint *)(param_4 + 0xc)) {
      iVar6 = *(int *)(param_4 + 4);
      *(uint *)(param_4 + 4) = uVar7 + iVar6;
      *(uint *)(param_4 + 8) = uVar1;
      goto LAB_0141d383;
    }
  }
  iVar6 = 0;
LAB_0141d383:
  iVar8 = *(char *)(param_1 + 6) * 8;
  param_1[1] = iVar6;
  if ((iVar8 == 0) || (uVar1 = iVar8 + *(int *)(param_4 + 8), *(uint *)(param_4 + 0xc) < uVar1)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_4 + 4);
    *(int *)(param_4 + 4) = iVar8 + iVar6;
    *(uint *)(param_4 + 8) = uVar1;
  }
  iVar8 = 0;
  param_1[2] = iVar6;
  if ('\0' < *(char *)(param_1 + 6)) {
    do {
      param_1._0_1_ = FUN_0141c270(param_3,3);
      iVar6 = FUN_0141c270(param_3,1);
      if (iVar6 != 0) {
        cVar3 = FUN_0141c270(param_3,5);
        param_1._0_1_ = (byte)param_1 | cVar3 * '\b';
      }
      *(byte *)(iVar8 + puVar2[1]) = (byte)param_1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(char *)(puVar2 + 6));
  }
  iVar6 = 0;
  if ('\0' < *(char *)(puVar2 + 6)) {
    do {
      iVar8 = 0;
      do {
        if ((*(byte *)(iVar6 + puVar2[1]) >> ((byte)iVar8 & 0x1f) & 1) == 0) {
          *(undefined1 *)(puVar2[2] + iVar6 * 8 + iVar8) = 0xff;
        }
        else {
          bVar4 = FUN_0141c270(param_3,8);
          if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar4) {
            return 1;
          }
          *(byte *)(puVar2[2] + iVar6 * 8 + iVar8) = bVar4;
          if ((int)*(char *)((int)puVar2 + 0x1a) < iVar8 + 1) {
            *(byte *)((int)puVar2 + 0x1a) = (byte)iVar8 + 1;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(char *)(puVar2 + 6));
  }
  if (*(int *)(param_3 + 8) < 0) {
    return 1;
  }
  return 0;
}

// 0141D490  FUN_0141d490  size=1110  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0141d490(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int aiStack_6c [7];
  undefined1 *local_44 [6];
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_2;
  local_28 = *(int *)(param_1 + 0x10);
  local_24 = (int *)(*(int *)(local_28 + 0x2c) + (uint)*(byte *)((int)param_2 + 0x19) * 0x3c);
  local_10 = param_2[5];
  local_8 = *local_24;
  iVar15 = 0;
  iVar6 = *(int *)(local_28 + *(int *)(param_1 + 0x50) * 4);
  iVar10 = param_2[4];
  if (*param_2 < 2) {
    iVar6 = iVar6 >> 1;
    if (iVar10 < iVar6) {
      iVar6 = iVar10;
    }
    if (0 < iVar6 - param_2[3]) {
      local_1c = (undefined1 *)((iVar6 - param_2[3]) / local_10);
      local_18 = ((int)local_1c + -1 + local_8) / local_8;
      if (0 < param_5) {
        local_20 = (undefined1 *)(param_4 - (int)param_3);
        param_2 = (int *)param_5;
        puVar13 = param_3;
        do {
          if (*(int *)((int)local_20 + (int)puVar13) != 0) {
            param_3[iVar15] = *puVar13;
            iVar15 = iVar15 + 1;
          }
          puVar13 = puVar13 + 1;
          param_2 = (int *)((int)param_2 + -1);
        } while (param_2 != (int *)0x0);
        local_14 = iVar15;
        if (iVar15 != 0) {
          iVar14 = local_18 * local_8;
          aiStack_6c[6] = 0x141d54a;
          iVar6 = -(iVar14 * iVar15);
          iVar7 = 1;
          local_44[0] = (undefined1 *)((int)local_44 + iVar6 + -0xc);
          iVar10 = iVar14;
          if (1 < iVar15) {
            do {
              local_44[iVar7] = (undefined1 *)((int)local_44 + iVar10 + iVar6 + -0xc);
              iVar7 = iVar7 + 1;
              iVar10 = iVar10 + iVar14;
            } while (iVar7 < iVar15);
          }
          local_c = 0;
          if ('\0' < *(char *)((int)piVar3 + 0x1a)) {
            do {
              param_2 = (int *)0x0;
              if (0 < (int)local_1c) {
                do {
                  if (local_c == 0) {
                    local_44[0][local_8 + (int)param_2 + -1] = 1;
                    iVar10 = local_8 + -2;
                    while (-1 < iVar10) {
                      iVar15 = iVar10 + (int)param_2 + 1;
                      iVar10 = iVar10 + -1;
                      local_44[0][iVar10 + (int)param_2 + 1] = local_44[0][iVar15] * (char)piVar3[6]
                      ;
                    }
                    iVar10 = 1;
                    if (1 < local_14) {
                      local_20 = (undefined1 *)(local_8 + -1);
                      do {
                        if (-1 < (int)local_20) {
                          puVar11 = local_44[iVar10] + (int)param_2 + (int)local_20;
                          puVar8 = (undefined1 *)
                                   (*(int *)(&stack0xffffffb8 + iVar10 * 4) + (int)local_20 +
                                   (int)param_2);
                          iVar15 = (int)local_20;
                          do {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + -1;
                            puVar11 = puVar11 + -1;
                            iVar15 = iVar15 + -1;
                          } while (-1 < iVar15);
                        }
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < local_14);
                    }
                    local_18 = 0;
                    if (0 < local_14) {
                      do {
                        piVar4 = local_24;
                        *(int *)((int)aiStack_6c + iVar6 + 0x18) = param_1;
                        *(int **)((int)aiStack_6c + iVar6 + 0x14) = piVar4;
                        *(undefined4 *)((int)aiStack_6c + iVar6 + 0x10) = 0x141d61d;
                        uVar9 = FUN_0141e730();
                        if (*(int *)(param_1 + 8) < 0) {
                          return 0;
                        }
                        if (0 < local_8) {
                          local_20 = (undefined1 *)local_8;
                          pcVar12 = local_44[local_18] + (int)param_2;
                          do {
                            cVar1 = *pcVar12;
                            cVar5 = (char)(uVar9 / (uint)(int)cVar1);
                            *pcVar12 = cVar5;
                            uVar9 = uVar9 - (int)cVar5 * (int)cVar1;
                            local_20 = (undefined1 *)((int)local_20 + -1);
                            pcVar12 = pcVar12 + 1;
                          } while (local_20 != (undefined1 *)0x0);
                        }
                        local_18 = local_18 + 1;
                      } while ((int)local_18 < local_14);
                    }
                  }
                  local_20 = (undefined1 *)0x0;
                  if (0 < local_8) {
                    iVar10 = (int)param_2 * local_10;
                    do {
                      if ((int)local_1c <= (int)param_2) goto LAB_0141d731;
                      iVar15 = 0;
                      bVar2 = (byte)local_c & 0x1f;
                      uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
                      local_18 = uVar9;
                      if (0 < local_14) {
                        local_2c = (int)param_3 - (int)local_44;
                        do {
                          iVar7 = local_10;
                          cVar1 = local_44[iVar15][(int)param_2];
                          if ((*(byte *)((int)cVar1 + piVar3[1]) & (byte)uVar9) != 0) {
                            *(undefined4 *)((int)aiStack_6c + iVar6 + 0x18) = 0xfffffff8;
                            *(int *)((int)aiStack_6c + iVar6 + 0x14) = iVar7;
                            iVar7 = piVar3[3];
                            *(int *)((int)aiStack_6c + iVar6 + 0x10) = param_1;
                            iVar14 = piVar3[2];
                            *(int *)((int)aiStack_6c + iVar6 + 0xc) =
                                 *(int *)((int)local_44 + local_2c + iVar15 * 4) +
                                 (iVar7 + iVar10) * 4;
                            *(uint *)((int)aiStack_6c + iVar6 + 8) =
                                 *(int *)(local_28 + 0x2c) +
                                 (uint)*(byte *)(iVar14 + cVar1 * 8 + local_c) * 0x3c;
                            *(undefined4 *)((int)aiStack_6c + iVar6 + 4) = 0x141d703;
                            FUN_0141e870();
                            uVar9 = local_18;
                          }
                          iVar15 = iVar15 + 1;
                        } while (iVar15 < local_14);
                      }
                      param_2 = (int *)((int)param_2 + 1);
                      iVar10 = iVar10 + local_10;
                      local_20 = (undefined1 *)((int)local_20 + 1);
                    } while ((int)local_20 < local_8);
                  }
                } while ((int)param_2 < (int)local_1c);
              }
LAB_0141d731:
              local_c = local_c + 1;
              if (*(char *)((int)piVar3 + 0x1a) <= local_c) {
                return 0;
              }
            } while( true );
          }
        }
      }
    }
  }
  else {
    local_14 = iVar6 * param_5 >> 1;
    if (iVar10 < local_14) {
      local_14 = iVar10;
    }
    local_14 = local_14 - param_2[3];
    if (0 < local_14) {
      local_14 = local_14 / local_10;
      aiStack_6c[6] = 0x141d781;
      iVar6 = -(((local_14 + -1 + local_8) / local_8) * local_8);
      local_1c = (undefined1 *)((int)local_44 + iVar6 + -0xc);
      local_2c = param_2[3] / param_5;
      iVar10 = 0;
      if (0 < param_5) {
        do {
          if (*(int *)(param_4 + iVar10 * 4) != 0) break;
          iVar10 = iVar10 + 1;
        } while (iVar10 < param_5);
      }
      if (iVar10 != param_5) {
        local_10 = local_10 / param_5;
        local_c = 0;
        if ('\0' < *(char *)((int)param_2 + 0x1a)) {
          do {
            param_2 = (int *)0x0;
            if (0 < local_14) {
              bVar2 = (byte)local_c & 0x1f;
              local_18 = 1 << bVar2 | 1U >> 0x20 - bVar2;
              do {
                piVar4 = local_24;
                if (local_c == 0) {
                  iVar10 = local_8 + -2;
                  local_1c[iVar10 + (int)param_2 + 1] = 1;
                  if (-1 < iVar10) {
                    iVar15 = piVar3[6];
                    do {
                      iVar7 = iVar10 + (int)param_2 + 1;
                      iVar10 = iVar10 + -1;
                      local_1c[iVar10 + (int)param_2 + 1] = local_1c[iVar7] * (char)iVar15;
                    } while (-1 < iVar10);
                  }
                  *(int *)((int)aiStack_6c + iVar6 + 0x18) = param_1;
                  *(int **)((int)aiStack_6c + iVar6 + 0x14) = piVar4;
                  *(undefined4 *)((int)aiStack_6c + iVar6 + 0x10) = 0x141d81d;
                  uVar9 = FUN_0141e730();
                  if (0 < local_8) {
                    local_20 = local_1c + (int)param_2;
                    iVar10 = 0;
                    do {
                      cVar1 = local_20[iVar10];
                      iVar15 = iVar10 + 1;
                      cVar5 = (char)(uVar9 / (uint)(int)cVar1);
                      local_20[iVar10] = cVar5;
                      uVar9 = uVar9 - (int)cVar5 * (int)cVar1;
                      iVar10 = iVar15;
                    } while (iVar15 < local_8);
                  }
                }
                iVar10 = 0;
                if (0 < local_8) {
                  iVar15 = (int)param_2 * local_10 + local_2c;
                  do {
                    iVar7 = local_10;
                    if (local_14 <= (int)param_2) goto LAB_0141d8ce;
                    cVar1 = local_1c[(int)param_2];
                    if ((*(byte *)((int)cVar1 + piVar3[1]) & (byte)local_18) != 0) {
                      *(undefined4 *)((int)aiStack_6c + iVar6 + 0x18) = 0xfffffff8;
                      *(int *)((int)aiStack_6c + iVar6 + 0x14) = iVar7;
                      *(int *)((int)aiStack_6c + iVar6 + 0x10) = param_1;
                      iVar7 = piVar3[2];
                      *(int *)((int)aiStack_6c + iVar6 + 0xc) = iVar15;
                      *(undefined4 **)((int)aiStack_6c + iVar6 + 8) = param_3;
                      *(uint *)((int)aiStack_6c + iVar6 + 4) =
                           *(int *)(local_28 + 0x2c) +
                           (uint)*(byte *)(iVar7 + cVar1 * 8 + local_c) * 0x3c;
                      *(undefined4 *)((int)aiStack_6c + iVar6) = 0x141d8b3;
                      FUN_0141e9a0();
                    }
                    param_2 = (int *)((int)param_2 + 1);
                    iVar15 = iVar15 + local_10;
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < local_8);
                }
              } while ((int)param_2 < local_14);
            }
LAB_0141d8ce:
            local_c = local_c + 1;
          } while (local_c < *(char *)((int)piVar3 + 0x1a));
        }
      }
    }
  }
  return 0;
}

// 0141D900  FUN_0141d900  size=201  [run]
uint __thiscall FUN_0141d900(int *param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  switch(param_1[7]) {
  case 0:
    return in_EAX;
  case 1:
    break;
  case 2:
    iVar5 = *param_1;
    if (0 < iVar5) {
      iVar4 = 0;
      do {
        bVar3 = (byte)iVar4;
        iVar4 = iVar4 + param_1[0xd];
        uVar6 = uVar6 | (int)in_EAX % param_3 << (bVar3 & 0x1f);
        iVar5 = iVar5 + -1;
        in_EAX = (int)in_EAX / param_3;
      } while (iVar5 != 0);
    }
    return uVar6;
  case 3:
    return param_2;
  default:
    return 0;
  }
  if (param_5 == 1) {
    iVar5 = *param_1;
    if (0 < iVar5) {
      iVar4 = 0;
      do {
        bVar3 = (byte)iVar4;
        iVar4 = iVar4 + param_1[0xc];
        uVar6 = uVar6 | (uint)*(ushort *)(param_1[0xe] + ((int)in_EAX % param_3) * 2) <<
                        (bVar3 & 0x1f);
        iVar5 = iVar5 + -1;
        in_EAX = (int)in_EAX / param_3;
      } while (iVar5 != 0);
      return uVar6;
    }
  }
  else {
    iVar5 = 0;
    if (0 < *param_1) {
      do {
        iVar4 = param_1[0xc];
        iVar2 = FUN_0141c270(param_4,iVar4);
        cVar1 = (char)iVar5;
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 | iVar2 << ((char)iVar4 * cVar1 & 0x1fU);
      } while (iVar5 < *param_1);
    }
  }
  return uVar6;
}

// 0141DA70  FUN_0141da70  size=14  [run]
char __thiscall FUN_0141da70(int param_1,int param_2)

{
  return (param_2 < param_1) + '\x01';
}

// 0141DA80  FUN_0141da80  size=431  [run]
undefined4
FUN_0141da80(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_98;
  undefined1 local_94 [128];
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  if (param_2 < 2) {
    *param_3 = 0x80000000;
  }
  else {
    local_98 = 0;
    _memset(local_94,0,0x80);
    local_14 = 0;
    iVar4 = 0;
    if (0 < param_2) {
      do {
        cVar1 = *(char *)(local_14 + param_1);
        iVar7 = (int)cVar1;
        if (iVar7 != 0) {
          local_c = *(uint *)(local_94 + iVar7 * 4 + -4);
          iVar6 = 0;
          if ((local_10 != 0) && (local_c == 0)) {
            return 0xffffffff;
          }
          iVar5 = 0;
          if (iVar7 != 1 && -1 < iVar7 + -1) {
            do {
              uVar2 = local_c >> ((cVar1 - (char)iVar5) - 1U & 0x1f) & 1;
              if (iVar6 < iVar4) {
                iVar4 = uVar2 + iVar6 * 2;
                if (param_3[iVar4] == 0) {
                  param_3[iVar4] = local_8;
                }
              }
              else {
                local_8 = iVar4 + 1;
                param_3[iVar6 * 2] = local_8;
                param_3[iVar6 * 2 + 1] = 0;
              }
              iVar6 = param_3[uVar2 + iVar6 * 2];
              iVar5 = iVar5 + 1;
              iVar4 = local_8;
            } while (iVar5 < iVar7 + -1);
          }
          uVar2 = local_c >> ((cVar1 - (char)iVar5) - 1U & 0x1f);
          if (local_8 <= iVar6) {
            local_8 = local_8 + 1;
            param_3[iVar6 * 2 + 1] = 0;
          }
          uVar3 = FUN_0141d900(local_10,param_4,param_6,param_7);
          local_10 = local_10 + 1;
          param_3[(uVar2 & 1) + iVar6 * 2] = uVar3 | 0x80000000;
          for (iVar4 = iVar7; 0 < iVar4; iVar4 = iVar4 + -1) {
            if ((*(uint *)(local_94 + iVar4 * 4 + -4) & 1) != 0) {
              *(int *)(local_94 + iVar4 * 4 + -4) = *(int *)(local_94 + iVar4 * 4 + -8) * 2;
              break;
            }
            *(uint *)(local_94 + iVar4 * 4 + -4) = *(uint *)(local_94 + iVar4 * 4 + -4) + 1;
          }
          iVar4 = *(int *)(local_94 + iVar7 * 4 + -4);
          while ((iVar7 = iVar7 + 1, iVar7 < 0x21 &&
                 (uVar2 = *(uint *)(local_94 + iVar7 * 4 + -4), uVar2 >> 1 == local_c))) {
            iVar4 = iVar4 * 2;
            *(int *)(local_94 + iVar7 * 4 + -4) = iVar4;
            local_c = uVar2;
          }
        }
        local_14 = local_14 + 1;
        iVar4 = local_8;
        if (param_2 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

// 0141DC40  FUN_0141dc40  size=821  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall
FUN_0141dc40(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined4 auStack_38 [3];
  int iStack_2c;
  int aiStack_28 [4];
  undefined2 *local_c;
  undefined2 *local_8;
  
  if (*(int *)(param_1 + 0x14) == 4) {
    iVar2 = *(int *)(param_1 + 8) * 8 + 4;
    if ((iVar2 == 0) || (uVar1 = iVar2 + *(int *)(in_EAX + 8), *(uint *)(in_EAX + 0xc) < uVar1)) {
      iStack_2c = 0;
    }
    else {
      iStack_2c = *(int *)(in_EAX + 4);
      *(int *)(in_EAX + 4) = iVar2 + iStack_2c;
      *(uint *)(in_EAX + 8) = uVar1;
    }
    aiStack_28[3] = param_5;
    aiStack_28[2] = param_4;
    auStack_38[2] = *(undefined4 *)(param_1 + 4);
    aiStack_28[0] = param_3;
    *(int *)(param_1 + 0x10) = iStack_2c;
    auStack_38[1] = param_2;
    auStack_38[0] = 0x141dca1;
    aiStack_28[1] = param_1;
    FUN_0141da80();
  }
  aiStack_28[3] = 0x141dcb5;
  iVar2 = -(*(int *)(param_1 + 8) * 8 + -8);
  *(undefined4 *)((int)aiStack_28 + iVar2 + 0xc) = param_5;
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)aiStack_28 + iVar2 + 8) = param_4;
  *(int *)((int)aiStack_28 + iVar2 + 4) = param_1;
  *(int *)((int)aiStack_28 + iVar2) = param_3;
  *(undefined1 **)((int)&iStack_2c + iVar2) = &stack0xffffffe8 + iVar2;
  *(undefined4 *)((int)auStack_38 + iVar2 + 8) = uVar3;
  *(undefined4 *)((int)auStack_38 + iVar2 + 4) = param_2;
  *(undefined4 *)((int)auStack_38 + iVar2) = 0x141dcd2;
  FUN_0141da80();
  iVar5 = ((*(int *)(param_1 + 0x18) + 1) * *(int *)(param_1 + 8) + -2) * *(int *)(param_1 + 0x14);
  if (iVar5 != 0) {
    uVar6 = iVar5 + 3U & 0xfffffffc;
    uVar1 = uVar6 + *(int *)(in_EAX + 8);
    if (uVar1 <= *(uint *)(in_EAX + 0xc)) {
      iVar5 = *(int *)(in_EAX + 4);
      *(uint *)(in_EAX + 4) = uVar6 + iVar5;
      *(uint *)(in_EAX + 8) = uVar1;
      goto LAB_0141dd08;
    }
  }
  iVar5 = 0;
LAB_0141dd08:
  *(int *)(param_1 + 0x10) = iVar5;
  if (*(int *)(param_1 + 0x18) == 1) {
    if (*(int *)(param_1 + 0x14) == 1) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 8) * 2 + -2) {
        do {
          *(byte *)(iVar5 + *(int *)(param_1 + 0x10)) =
               (&stack0xffffffeb)[iVar5 * 4 + iVar2] & 0x80 | (&stack0xffffffe8)[iVar5 * 4 + iVar2];
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 8) * 2 + -2);
        return;
      }
    }
    else if ((*(int *)(param_1 + 0x14) == 2) && (0 < *(int *)(param_1 + 8) * 2 + -2)) {
      iVar5 = 0;
      do {
        *(ushort *)(*(int *)(param_1 + 0x10) + iVar5 * 2) =
             *(ushort *)(&stack0xffffffea + iVar5 * 4 + iVar2) & 0x8000 |
             *(ushort *)(&stack0xffffffe8 + iVar5 * 4 + iVar2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 8) * 2 + -2);
      return;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 8) * 3 + -2;
    iVar9 = *(int *)(param_1 + 8) * 2 + -4;
    if (*(int *)(param_1 + 0x14) == 1) {
      if (-1 < iVar9) {
        do {
          uVar1 = *(uint *)(&stack0xffffffe8 + iVar9 * 4 + iVar2);
          if ((uVar1 & 0x80000000) == 0) {
            if ((*(uint *)(&stack0xffffffec + iVar9 * 4 + iVar2) & 0x80000000) == 0) {
              iVar7 = iVar7 + -2;
              *(undefined1 *)(iVar5 + iVar7) = (&stack0xffffffe8)[uVar1 * 8 + iVar2];
              *(undefined1 *)(iVar5 + 1 + iVar7) =
                   (&stack0xffffffe8)[*(int *)(&stack0xffffffec + iVar9 * 4 + iVar2) * 8 + iVar2];
            }
            else {
              iVar7 = iVar7 + -3;
              *(undefined1 *)(iVar5 + iVar7) = (&stack0xffffffe8)[uVar1 * 8 + iVar2];
              *(byte *)(iVar5 + 1 + iVar7) =
                   (byte)((uint)*(undefined4 *)(&stack0xffffffec + iVar9 * 4 + iVar2) >> 8) | 0x80;
              *(undefined1 *)(iVar5 + 2 + iVar7) = (&stack0xffffffec)[iVar9 * 4 + iVar2];
            }
          }
          else {
            bVar8 = (byte)(uVar1 >> 8);
            if ((*(uint *)(&stack0xffffffec + iVar9 * 4 + iVar2) & 0x80000000) == 0) {
              iVar7 = iVar7 + -3;
              *(byte *)(iVar5 + iVar7) = bVar8 | 0x80;
              *(undefined1 *)(iVar5 + 1 + iVar7) =
                   (&stack0xffffffe8)[*(int *)(&stack0xffffffec + iVar9 * 4 + iVar2) * 8 + iVar2];
              *(undefined1 *)(iVar5 + 2 + iVar7) = (&stack0xffffffe8)[iVar9 * 4 + iVar2];
            }
            else {
              iVar7 = iVar7 + -4;
              *(byte *)(iVar5 + iVar7) = bVar8 | 0x80;
              *(byte *)(iVar5 + 1 + iVar7) =
                   (byte)((uint)*(undefined4 *)(&stack0xffffffec + iVar9 * 4 + iVar2) >> 8) | 0x80;
              *(undefined1 *)(iVar5 + 2 + iVar7) = (&stack0xffffffe8)[iVar9 * 4 + iVar2];
              *(undefined1 *)(iVar5 + 3 + iVar7) = (&stack0xffffffec)[iVar9 * 4 + iVar2];
            }
          }
          iVar9 = iVar9 + -2;
          *(int *)(&stack0xfffffff0 + iVar9 * 4 + iVar2) = iVar7;
        } while (-1 < iVar9);
        return;
      }
    }
    else if (-1 < iVar9) {
      local_c = (undefined2 *)(iVar5 + 4 + iVar7 * 2);
      local_8 = (undefined2 *)(iVar5 + 6 + iVar7 * 2);
      do {
        uVar1 = *(uint *)(&stack0xffffffe8 + iVar9 * 4 + iVar2);
        if ((uVar1 & 0x80000000) == 0) {
          if ((*(uint *)(&stack0xffffffec + iVar9 * 4 + iVar2) & 0x80000000) == 0) {
            local_8 = local_8 + -2;
            iVar7 = iVar7 + -2;
            local_c = local_c + -2;
            *(undefined2 *)(iVar5 + iVar7 * 2) =
                 *(undefined2 *)(&stack0xffffffe8 + uVar1 * 8 + iVar2);
            *(undefined2 *)(iVar5 + 2 + iVar7 * 2) =
                 *(undefined2 *)
                  (&stack0xffffffe8 + *(int *)(&stack0xffffffec + iVar9 * 4 + iVar2) * 8 + iVar2);
          }
          else {
            local_8 = local_8 + -3;
            iVar7 = iVar7 + -3;
            *(undefined2 *)(iVar5 + iVar7 * 2) =
                 *(undefined2 *)(&stack0xffffffe8 + uVar1 * 8 + iVar2);
            local_c = local_c + -3;
            *(ushort *)(iVar5 + 2 + iVar7 * 2) =
                 *(ushort *)(&stack0xffffffee + iVar9 * 4 + iVar2) | 0x8000;
            *local_c = *(undefined2 *)(&stack0xffffffec + iVar9 * 4 + iVar2);
          }
        }
        else {
          uVar4 = (ushort)(uVar1 >> 0x10);
          if ((*(uint *)(&stack0xffffffec + iVar9 * 4 + iVar2) & 0x80000000) == 0) {
            local_8 = local_8 + -3;
            iVar7 = iVar7 + -3;
            local_c = local_c + -3;
            *(ushort *)(iVar5 + iVar7 * 2) = uVar4 | 0x8000;
            *(undefined2 *)(iVar5 + 2 + iVar7 * 2) =
                 *(undefined2 *)
                  (&stack0xffffffe8 + *(int *)(&stack0xffffffec + iVar9 * 4 + iVar2) * 8 + iVar2);
            *local_c = *(undefined2 *)(&stack0xffffffe8 + iVar9 * 4 + iVar2);
          }
          else {
            local_8 = local_8 + -4;
            iVar7 = iVar7 + -4;
            *(ushort *)(iVar5 + iVar7 * 2) = uVar4 | 0x8000;
            local_c = local_c + -4;
            *(ushort *)(iVar5 + 2 + iVar7 * 2) =
                 *(ushort *)(&stack0xffffffee + iVar9 * 4 + iVar2) | 0x8000;
            *local_c = *(undefined2 *)(&stack0xffffffe8 + iVar9 * 4 + iVar2);
            *local_8 = *(undefined2 *)(&stack0xffffffec + iVar9 * 4 + iVar2);
          }
        }
        iVar9 = iVar9 + -2;
        *(int *)(&stack0xfffffff0 + iVar9 * 4 + iVar2) = iVar7;
      } while (-1 < iVar9);
    }
  }
  return;
}

// 0141DF80  FUN_0141df80  size=104  [run]
int __fastcall FUN_0141df80(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = 0;
  uVar1 = param_2[1];
  for (uVar3 = uVar1; uVar3 != 0; uVar3 = uVar3 >> 1) {
    iVar5 = iVar5 + 1;
  }
  iVar2 = *param_2;
  iVar7 = (int)uVar1 >> ((byte)(((iVar2 + -1) * (iVar5 + -1)) / iVar2) & 0x1f);
  iVar5 = iVar7 + 1;
  while( true ) {
    while( true ) {
      iVar4 = 1;
      iVar6 = 1;
      iVar8 = iVar2;
      if (0 < iVar2) {
        do {
          iVar4 = iVar4 * iVar7;
          iVar6 = iVar6 * iVar5;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (iVar4 <= (int)uVar1) break;
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + -1;
    }
    if ((int)uVar1 < iVar6) break;
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 1;
  }
  return iVar7;
}

// 0141DFF0  FUN_0141dff0  size=1399  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0141dff0(undefined4 param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 auStack_2c [2];
  
  auStack_2c[1] = 0x141e006;
  _memset(param_2,0,0x3c);
  auStack_2c[1] = 4;
  auStack_2c[0] = param_1;
  iVar3 = FUN_0141c270();
  *param_2 = iVar3;
  iVar3 = FUN_0141c270(param_1,0xe);
  param_2[1] = iVar3;
  iVar3 = -iVar3;
  *(undefined4 *)(&stack0xffffffe4 + iVar3) = 1;
  *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
  *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e031;
  iVar4 = FUN_0141c270();
  if (iVar4 == 0) {
    *(undefined4 *)(&stack0xffffffe4 + iVar3) = 3;
    *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
    *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e044;
    uVar5 = FUN_0141c270();
    *(undefined4 *)(&stack0xffffffdc + iVar3) = 1;
    *(undefined4 *)((int)auStack_2c + iVar3 + 4) = param_1;
    *(undefined4 *)((int)auStack_2c + iVar3) = 0x141e04f;
    iVar4 = FUN_0141c270();
    iVar13 = 0;
    if (iVar4 == 0) {
      param_2[2] = param_2[1];
      puVar14 = &stack0xffffffe8 + iVar3;
      if (0 < param_2[1]) {
        do {
          *(undefined4 *)(&stack0xffffffe4 + iVar3) = uVar5;
          *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
          *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e0be;
          iVar4 = FUN_0141c270();
          (&stack0xffffffe8)[iVar13 + iVar3] = (char)iVar4 + '\x01';
          if (param_2[3] < iVar4 + 1) {
            param_2[3] = iVar4 + 1;
          }
          iVar13 = iVar13 + 1;
          puVar14 = &stack0xffffffe8 + iVar3;
        } while (iVar13 < param_2[1]);
      }
    }
    else {
      puVar14 = &stack0xffffffe8 + iVar3;
      if (0 < param_2[1]) {
        do {
          *(undefined4 *)(&stack0xffffffe4 + iVar3) = 1;
          *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
          *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e069;
          iVar4 = FUN_0141c270();
          if (iVar4 == 0) {
            (&stack0xffffffe8)[iVar13 + iVar3] = 0;
          }
          else {
            *(undefined4 *)(&stack0xffffffe4 + iVar3) = uVar5;
            *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
            *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e07a;
            iVar4 = FUN_0141c270();
            (&stack0xffffffe8)[iVar13 + iVar3] = (char)iVar4 + '\x01';
            param_2[2] = param_2[2] + 1;
            if (param_2[3] < iVar4 + 1) {
              param_2[3] = iVar4 + 1;
            }
          }
          iVar13 = iVar13 + 1;
          puVar14 = &stack0xffffffe8 + iVar3;
        } while (iVar13 < param_2[1]);
      }
    }
  }
  else {
    *(undefined4 *)(&stack0xffffffe4 + iVar3) = 5;
    *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
    *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e0e5;
    iVar4 = FUN_0141c270();
    iVar13 = 0;
    param_2[2] = param_2[1];
    puVar14 = &stack0xffffffe8 + iVar3;
    if (0 < param_2[1]) {
      do {
        iVar4 = iVar4 + 1;
        iVar7 = 0;
        for (uVar11 = param_2[1] - iVar13; uVar11 != 0; uVar11 = uVar11 >> 1) {
          iVar7 = iVar7 + 1;
        }
        *(int *)(&stack0xffffffe4 + iVar3) = iVar7;
        *(undefined4 *)(&stack0xffffffe0 + iVar3) = param_1;
        *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x141e11f;
        iVar7 = FUN_0141c270();
        iVar6 = 0;
        if (0 < iVar7) {
          do {
            if (param_2[1] <= iVar13) break;
            (&stack0xffffffe8)[iVar13 + iVar3] = (char)iVar4;
            iVar6 = iVar6 + 1;
            iVar13 = iVar13 + 1;
          } while (iVar6 < iVar7);
        }
        param_2[3] = iVar4;
        puVar14 = &stack0xffffffe8 + iVar3;
      } while (iVar13 < param_2[1]);
    }
  }
  *(undefined4 *)(puVar14 + -4) = 1;
  *(undefined4 *)(puVar14 + -8) = param_1;
  *(undefined4 *)(puVar14 + -0xc) = 0x141e152;
  iVar4 = FUN_0141c270();
  if (iVar4 == 0) {
    uVar11 = param_2[1];
    iVar4 = 0;
    if (uVar11 != 0) {
      iVar4 = 0;
      uVar8 = uVar11;
      do {
        iVar4 = iVar4 + 1;
        uVar8 = uVar8 >> 1;
      } while (uVar8 != 0);
    }
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + 1;
    if (param_2[2] < 2) {
      iVar13 = 4;
    }
    else {
      if (iVar4 == 3) {
        iVar4 = 4;
      }
      iVar13 = 0;
      for (uVar8 = param_2[2] * 3 - 6; uVar8 != 0; uVar8 = uVar8 >> 1) {
        iVar13 = iVar13 + 1;
      }
      if (iVar13 + 1 <= iVar4 * 4) {
        iVar4 = iVar4 / 2;
        iVar13 = 1;
        if (iVar4 == 0) goto LAB_0141e1c1;
      }
      iVar13 = iVar4;
    }
LAB_0141e1c1:
    iVar4 = 0;
    param_2[5] = iVar13;
    for (; uVar11 != 0; uVar11 = uVar11 >> 1) {
      iVar4 = iVar4 + 1;
    }
    *(undefined4 *)(puVar14 + -4) = 0;
    *(undefined4 *)(puVar14 + -8) = param_1;
    *(undefined4 *)(puVar14 + -0xc) = 0;
    param_2[7] = 0;
    param_2[6] = (iVar13 < ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + 1) + 1;
    *(undefined1 **)(puVar14 + -0x10) = &stack0xffffffe8 + iVar3;
    goto LAB_0141e560;
  }
  *(undefined4 *)(puVar14 + -4) = 0x20;
  *(undefined4 *)(puVar14 + -8) = param_1;
  *(undefined4 *)(puVar14 + -0xc) = 0x141e209;
  uVar8 = FUN_0141c270();
  param_2[9] = ((int)uVar8 >> 0x15 & 0x3ffU) - 0x314;
  uVar11 = uVar8 & 0x1fffff;
  if ((uVar8 & 0x1fffff) == 0) {
    param_2[9] = -9999;
    uVar11 = 0;
  }
  else {
    do {
      uVar9 = uVar11;
      param_2[9] = param_2[9] + -1;
      uVar11 = uVar9 * 2;
    } while ((uVar11 & 0x40000000) == 0);
    if ((uVar8 & 0x80000000) != 0) {
      uVar11 = uVar9 * -2;
    }
  }
  *(undefined4 *)(puVar14 + -4) = 0x20;
  *(undefined4 *)(puVar14 + -8) = param_1;
  param_2[8] = uVar11;
  *(undefined4 *)(puVar14 + -0xc) = 0x141e263;
  uVar8 = FUN_0141c270();
  iVar13 = ((int)uVar8 >> 0x15 & 0x3ffU) - 0x314;
  param_2[0xb] = iVar13;
  uVar11 = uVar8 & 0x1fffff;
  if ((uVar8 & 0x1fffff) == 0) {
    param_2[0xb] = -9999;
    uVar11 = 0;
  }
  else {
    do {
      uVar9 = uVar11;
      uVar11 = uVar9 * 2;
      iVar13 = iVar13 + -1;
    } while ((uVar11 & 0x40000000) == 0);
    param_2[0xb] = iVar13;
    if ((uVar8 & 0x80000000) != 0) {
      uVar11 = uVar9 * -2;
    }
  }
  *(undefined4 *)(puVar14 + -4) = 4;
  *(undefined4 *)(puVar14 + -8) = param_1;
  param_2[10] = uVar11;
  *(undefined4 *)(puVar14 + -0xc) = 0x141e2b7;
  iVar13 = FUN_0141c270();
  *(undefined4 *)(puVar14 + -0xc) = 1;
  *(undefined4 *)(puVar14 + -0x10) = param_1;
  param_2[0xc] = iVar13 + 1;
  *(undefined4 *)(puVar14 + -0x14) = 0x141e2c3;
  FUN_0141c270();
  iVar13 = param_2[0xc];
  param_2[0xb] = param_2[0xb] + iVar13;
  param_2[10] = param_2[10] >> ((byte)iVar13 & 0x1f);
  *(undefined4 *)(puVar14 + -4) = 0x141e2d8;
  iVar6 = FUN_0141df80();
  iVar7 = *param_2 * iVar13 + 8;
  iVar10 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = 0;
  for (uVar11 = iVar6 - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
    iVar7 = iVar7 + 1;
  }
  if ((iVar10 < 5) &&
     (iVar7 = *param_2 * iVar7 + 8,
     iVar10 <= ((int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3) +
               ((int)(iVar13 + 7 + (iVar13 + 7 >> 0x1f & 7U)) >> 3))) {
    *(undefined4 *)(puVar14 + -4) = 0x141e339;
    iVar13 = iVar6 * -2;
    iVar7 = 0;
    param_2[0xe] = (int)(puVar14 + iVar13);
    if (0 < iVar6) {
      do {
        *(int *)(puVar14 + iVar13 + -4) = param_2[0xc];
        *(undefined4 *)(puVar14 + iVar13 + -8) = param_1;
        *(undefined4 *)(puVar14 + iVar13 + -0xc) = 0x141e351;
        uVar2 = FUN_0141c270();
        *(undefined2 *)(param_2[0xe] + iVar7 * 2) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    iVar7 = param_2[0xc] * *param_2 + 8;
    iVar7 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
    param_2[7] = 1;
    if (param_2[2] < 2) {
      iVar10 = 4;
    }
    else {
      iVar10 = iVar7;
      if (iVar7 == 3) {
        iVar10 = 4;
      }
      iVar12 = 0;
      for (uVar11 = param_2[2] * 3 - 6; uVar11 != 0; uVar11 = uVar11 >> 1) {
        iVar12 = iVar12 + 1;
      }
      if ((iVar12 + 1 <= iVar10 * 4) && (iVar10 = iVar10 / 2, iVar10 == 0)) {
        iVar10 = 1;
      }
    }
    param_2[5] = iVar10;
    param_2[6] = (iVar10 < iVar7) + 1;
    *(int *)(puVar14 + iVar13 + -4) = iVar4;
    *(undefined4 *)(puVar14 + iVar13 + -8) = param_1;
    *(int *)(puVar14 + iVar13 + -0xc) = iVar6;
    *(undefined1 **)(puVar14 + iVar13 + -0x10) = &stack0xffffffe8 + iVar3;
    *(undefined4 *)(puVar14 + iVar13 + -0x14) = 0x141e3e4;
    FUN_0141dc40();
    param_2[0xe] = 0;
    return;
  }
  if (iVar13 < 9) {
    if (iVar6 == 0) {
LAB_0141e422:
      iVar13 = 0;
    }
    else {
      uVar8 = iVar6 + 3U & 0xfffffffc;
      uVar11 = uVar8 + *(int *)(param_3 + 8);
      if (*(uint *)(param_3 + 0xc) < uVar11) goto LAB_0141e422;
      iVar13 = *(int *)(param_3 + 4);
      *(uint *)(param_3 + 4) = uVar8 + iVar13;
      *(uint *)(param_3 + 8) = uVar11;
    }
    iVar7 = 0;
    param_2[0xe] = iVar13;
    if (0 < iVar6) {
      do {
        *(int *)(puVar14 + -4) = param_2[0xc];
        *(undefined4 *)(puVar14 + -8) = param_1;
        *(undefined4 *)(puVar14 + -0xc) = 0x141e43d;
        uVar1 = FUN_0141c270();
        *(undefined1 *)(iVar7 + param_2[0xe]) = uVar1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  else {
    if (iVar6 * 2 == 0) {
LAB_0141e475:
      iVar13 = 0;
    }
    else {
      uVar8 = iVar6 * 2 + 3U & 0xfffffffc;
      uVar11 = uVar8 + *(int *)(param_3 + 8);
      if (*(uint *)(param_3 + 0xc) < uVar11) goto LAB_0141e475;
      iVar13 = *(int *)(param_3 + 4);
      *(uint *)(param_3 + 4) = uVar8 + iVar13;
      *(uint *)(param_3 + 8) = uVar11;
    }
    iVar7 = 0;
    param_2[0xe] = iVar13;
    if (0 < iVar6) {
      do {
        *(int *)(puVar14 + -4) = param_2[0xc];
        *(undefined4 *)(puVar14 + -8) = param_1;
        *(undefined4 *)(puVar14 + -0xc) = 0x141e48d;
        uVar2 = FUN_0141c270();
        *(undefined2 *)(param_2[0xe] + iVar7 * 2) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  iVar13 = 0;
  for (uVar11 = iVar6 - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
    iVar13 = iVar13 + 1;
  }
  param_2[0xd] = iVar13;
  iVar13 = 0;
  param_2[7] = 2;
  for (uVar11 = iVar6 - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
    iVar13 = iVar13 + 1;
  }
  iVar13 = *param_2 * iVar13 + 8;
  iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 7U)) >> 3;
  if (param_2[2] < 2) {
    iVar7 = 4;
  }
  else {
    if (iVar13 == 3) {
      iVar13 = 4;
    }
    iVar7 = 0;
    for (uVar11 = param_2[2] * 3 - 6; uVar11 != 0; uVar11 = uVar11 >> 1) {
      iVar7 = iVar7 + 1;
    }
    if (iVar7 + 1 <= iVar13 * 4) {
      iVar13 = iVar13 / 2;
      iVar7 = 1;
      if (iVar13 == 0) goto LAB_0141e51f;
    }
    iVar7 = iVar13;
  }
LAB_0141e51f:
  iVar13 = 0;
  param_2[5] = iVar7;
  for (uVar11 = iVar6 - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
    iVar13 = iVar13 + 1;
  }
  iVar13 = *param_2 * iVar13 + 8;
  *(int *)(puVar14 + -4) = iVar4;
  param_2[6] = (iVar7 < (int)(iVar13 + (iVar13 >> 0x1f & 7U)) >> 3) + 1;
  *(undefined4 *)(puVar14 + -8) = param_1;
  *(int *)(puVar14 + -0xc) = iVar6;
  *(undefined1 **)(puVar14 + -0x10) = &stack0xffffffe8 + iVar3;
LAB_0141e560:
  *(undefined4 *)(puVar14 + -0x14) = 0x141e56a;
  FUN_0141dc40();
  return;
}

// 0141E580  FUN_0141e580  size=423  [run]
uint FUN_0141e580(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = *(int *)(in_EAX + 0xc);
  uVar7 = 0;
  uVar4 = FUN_0141c1d0(param_1,iVar6);
  uVar5 = uVar4 & 1;
  if (*(int *)(in_EAX + 0x14) == 1) {
    iVar3 = *(int *)(in_EAX + 0x10);
    if (*(int *)(in_EAX + 0x18) == 1) {
      iVar9 = 0;
      if (0 < iVar6) {
        do {
          bVar1 = *(byte *)(iVar3 + uVar7 * 2 + uVar5);
          uVar7 = (uint)bVar1;
          if ((char)bVar1 < '\0') break;
          uVar4 = (int)uVar4 >> 1;
          iVar9 = iVar9 + 1;
          uVar5 = uVar4 & 1;
        } while (iVar9 < iVar6);
      }
      uVar8 = uVar7 & 0x7f;
    }
    else {
      iVar9 = 0;
      if (iVar6 < 1) {
LAB_0141e63d:
        uVar8 = uVar7 & 0x7fff;
      }
      else {
        do {
          bVar1 = *(byte *)(iVar3 + uVar5 + uVar7);
          uVar8 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            if ((uVar5 == 0) || ((*(byte *)(iVar3 + uVar7) & 0x80) != 0)) {
              iVar6 = 1;
            }
            else {
              iVar6 = 0;
            }
            uVar7 = (uint)CONCAT11(bVar1,*(undefined1 *)(iVar6 + iVar3 + uVar5 + 1 + uVar7));
            goto LAB_0141e63d;
          }
          uVar4 = (int)uVar4 >> 1;
          iVar9 = iVar9 + 1;
          uVar5 = uVar4 & 1;
          uVar7 = uVar8;
        } while (iVar9 < iVar6);
      }
    }
  }
  else {
    if (*(int *)(in_EAX + 0x14) == 2) {
      iVar3 = *(int *)(in_EAX + 0x10);
      if (*(int *)(in_EAX + 0x18) == 1) {
        iVar9 = 0;
        if (0 < iVar6) {
          do {
            uVar2 = *(ushort *)(iVar3 + (uVar5 + uVar7 * 2) * 2);
            uVar7 = (uint)uVar2;
            if ((uVar2 & 0x8000) != 0) break;
            uVar4 = (int)uVar4 >> 1;
            iVar9 = iVar9 + 1;
            uVar5 = uVar4 & 1;
          } while (iVar9 < iVar6);
        }
        uVar8 = uVar7 & 0x7fff;
        goto LAB_0141e710;
      }
      iVar9 = 0;
      uVar8 = uVar7;
      if (0 < iVar6) {
        do {
          uVar2 = *(ushort *)(iVar3 + (uVar5 + uVar8) * 2);
          uVar7 = (uint)uVar2;
          if ((uVar2 & 0x8000) != 0) {
            if ((uVar5 == 0) || ((*(ushort *)(iVar3 + uVar8 * 2) & 0x8000) != 0)) {
              uVar7 = CONCAT22(uVar2,*(undefined2 *)(iVar3 + 2 + (uVar5 + 1 + uVar8) * 2));
            }
            else {
              uVar7 = CONCAT22(uVar2,*(undefined2 *)(iVar3 + 2 + (uVar5 + uVar8) * 2));
            }
            break;
          }
          uVar4 = (int)uVar4 >> 1;
          iVar9 = iVar9 + 1;
          uVar5 = uVar4 & 1;
          uVar8 = uVar7;
        } while (iVar9 < iVar6);
      }
    }
    else {
      iVar9 = 0;
      if (0 < iVar6) {
        do {
          uVar7 = *(uint *)(*(int *)(in_EAX + 0x10) + (uVar5 + uVar7 * 2) * 4);
          if ((int)uVar7 < 0) break;
          uVar4 = (int)uVar4 >> 1;
          iVar9 = iVar9 + 1;
          uVar5 = uVar4 & 1;
        } while (iVar9 < iVar6);
      }
    }
    uVar8 = uVar7 & 0x7fffffff;
  }
LAB_0141e710:
  FUN_0141c250(param_1,iVar9 + 1);
  return uVar8;
}

// 0141E730  FUN_0141e730  size=31  [run]
undefined4 FUN_0141e730(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_0141e580(param_2);
  return uVar1;
}

// 0141E750  FUN_0141e750  size=270  [run]
void FUN_0141e750(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = FUN_0141e580(param_2);
  iVar2 = *param_1;
  if (param_1[7] == 1) {
    iVar7 = param_1[0xc];
    iVar6 = 0;
    do {
      *(uint *)(param_3 + iVar6 * 4) = (1 << ((byte)iVar7 & 0x1f)) - 1U & uVar3;
      iVar6 = iVar6 + 1;
      uVar3 = uVar3 >> ((byte)iVar7 & 0x1f);
    } while (iVar6 < iVar2);
  }
  else {
    bVar5 = (byte)param_1[0xd];
    iVar7 = param_1[0xe];
    iVar6 = 0;
    uVar8 = (1 << (bVar5 & 0x1f)) - 1;
    if (param_1[0xc] < 9) {
      do {
        *(uint *)(param_3 + iVar6 * 4) = (uint)*(byte *)((uVar8 & uVar3) + iVar7);
        iVar6 = iVar6 + 1;
        uVar3 = uVar3 >> (bVar5 & 0x1f);
      } while (iVar6 < iVar2);
    }
    else {
      do {
        *(uint *)(param_3 + iVar6 * 4) = (uint)*(ushort *)(iVar7 + (uVar8 & uVar3) * 2);
        iVar6 = iVar6 + 1;
        uVar3 = uVar3 >> (bVar5 & 0x1f);
      } while (iVar6 < iVar2);
    }
  }
  bVar5 = (byte)(param_4 - param_1[9]);
  if (param_4 - param_1[9] < 1) {
    iVar7 = param_1[8] << (-bVar5 & 0x1f);
  }
  else {
    iVar7 = param_1[8] >> (bVar5 & 0x1f);
  }
  iVar6 = param_1[10];
  iVar4 = 0;
  bVar5 = (byte)(param_4 - param_1[0xb]);
  if (param_4 - param_1[0xb] < 1) {
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(int *)(param_3 + -4 + iVar4 * 4) =
           (*(int *)(param_3 + iVar1) * iVar6 << (-bVar5 & 0x1f)) + iVar7;
    } while (iVar4 < iVar2);
    return;
  }
  do {
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(int *)(param_3 + -4 + iVar4 * 4) =
         (*(int *)(param_3 + iVar1) * iVar6 >> (bVar5 & 0x1f)) + iVar7;
  } while (iVar4 < iVar2);
  return;
}

// 0141E870  FUN_0141e870  size=300  [run]
void FUN_0141e870(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint local_30 [8];
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  if (0 < param_4) {
    do {
      uVar3 = FUN_0141e580(param_3);
      iVar2 = *param_1;
      if (param_1[7] == 1) {
        iVar7 = param_1[0xc];
        iVar6 = 0;
        do {
          local_30[iVar6] = (1 << ((byte)iVar7 & 0x1f)) - 1U & uVar3;
          iVar6 = iVar6 + 1;
          uVar3 = uVar3 >> ((byte)param_1[0xc] & 0x1f);
        } while (iVar6 < iVar2);
      }
      else {
        local_c = param_1[0xd];
        iVar6 = 1 << ((byte)local_c & 0x1f);
        iVar7 = 0;
        local_8 = param_1[0xe];
        if (param_1[0xc] < 9) {
          do {
            local_30[iVar7] = (uint)*(byte *)((iVar6 - 1U & uVar3) + local_8);
            iVar7 = iVar7 + 1;
            uVar3 = uVar3 >> ((byte)local_c & 0x1f);
          } while (iVar7 < iVar2);
        }
        else {
          do {
            local_30[iVar7] = (uint)*(ushort *)(local_8 + (iVar6 - 1U & uVar3) * 2);
            iVar7 = iVar7 + 1;
            uVar3 = uVar3 >> ((byte)local_c & 0x1f);
          } while (iVar7 < iVar2);
        }
      }
      local_c = param_5 - param_1[0xb];
      bVar5 = (byte)(param_5 - param_1[9]);
      if (param_5 - param_1[9] < 1) {
        iVar7 = param_1[8] << (-bVar5 & 0x1f);
      }
      else {
        iVar7 = param_1[8] >> (bVar5 & 0x1f);
      }
      iVar6 = 0;
      if (local_c < 1) {
        local_c = -local_c;
        do {
          iVar4 = iVar6 + 1;
          local_30[iVar6] = (local_30[iVar6] * param_1[10] << ((byte)local_c & 0x1f)) + iVar7;
          iVar6 = iVar4;
        } while (iVar4 < iVar2);
      }
      else {
        do {
          iVar4 = iVar6 + 1;
          local_30[iVar6] = ((int)(local_30[iVar6] * param_1[10]) >> ((byte)local_c & 0x1f)) + iVar7
          ;
          iVar6 = iVar4;
        } while (iVar4 < iVar2);
      }
      iVar7 = 0;
      do {
        piVar1 = (int *)(param_2 + local_10 * 4);
        *piVar1 = *piVar1 + local_30[iVar7];
        iVar7 = iVar7 + 1;
        local_10 = local_10 + 1;
      } while (iVar7 < iVar2);
    } while (local_10 < param_4);
  }
  return;
}

// 0141E9A0  FUN_0141e9a0  size=341  [run]
void FUN_0141e9a0(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint local_30 [8];
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_5 + param_3;
  local_c = 0;
  if (param_3 < local_10) {
    do {
      uVar3 = FUN_0141e580(param_4);
      iVar2 = *param_1;
      if (param_1[7] == 1) {
        iVar7 = param_1[0xc];
        iVar6 = 0;
        do {
          local_30[iVar6] = (1 << ((byte)iVar7 & 0x1f)) - 1U & uVar3;
          iVar6 = iVar6 + 1;
          uVar3 = uVar3 >> ((byte)param_1[0xc] & 0x1f);
        } while (iVar6 < iVar2);
      }
      else {
        iVar4 = 1 << ((byte)param_1[0xd] & 0x1f);
        local_8 = param_1[0xd];
        iVar7 = param_1[0xe];
        iVar6 = 0;
        if (param_1[0xc] < 9) {
          do {
            local_30[iVar6] = (uint)*(byte *)((iVar4 - 1U & uVar3) + iVar7);
            iVar6 = iVar6 + 1;
            uVar3 = uVar3 >> ((byte)local_8 & 0x1f);
          } while (iVar6 < iVar2);
        }
        else {
          do {
            local_30[iVar6] = (uint)*(ushort *)(iVar7 + (iVar4 - 1U & uVar3) * 2);
            iVar6 = iVar6 + 1;
            uVar3 = uVar3 >> ((byte)local_8 & 0x1f);
          } while (iVar6 < iVar2);
        }
      }
      bVar5 = (byte)(param_6 - param_1[9]);
      if (param_6 - param_1[9] < 1) {
        iVar7 = param_1[8] << (-bVar5 & 0x1f);
      }
      else {
        iVar7 = param_1[8] >> (bVar5 & 0x1f);
      }
      bVar5 = (byte)(param_6 - param_1[0xb]);
      iVar6 = 0;
      if (param_6 - param_1[0xb] < 1) {
        do {
          iVar4 = iVar6 + 1;
          local_30[iVar6] = (local_30[iVar6] * param_1[10] << (-bVar5 & 0x1f)) + iVar7;
          iVar6 = iVar4;
        } while (iVar4 < iVar2);
      }
      else {
        do {
          iVar4 = iVar6 + 1;
          local_30[iVar6] = ((int)(local_30[iVar6] * param_1[10]) >> (bVar5 & 0x1f)) + iVar7;
          iVar6 = iVar4;
        } while (iVar4 < iVar2);
      }
      iVar7 = 0;
      do {
        piVar1 = (int *)(*(int *)(param_2 + local_c * 4) + param_3 * 4);
        *piVar1 = *piVar1 + local_30[iVar7];
        param_3 = param_3 + (local_c & 1);
        iVar7 = iVar7 + 1;
        local_c = local_c - 1 & 1;
      } while (iVar7 < iVar2);
    } while (param_3 < local_10);
  }
  return;
}

// 0141EB00  FUN_0141eb00  size=32  [run]
void __thiscall
FUN_0141eb00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined1 param_5)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[1] = param_3;
  *(undefined1 *)((int)param_1 + 0x14) = param_5;
  return;
}

// 0141EB20  FUN_0141eb20  size=38  [run]
void __thiscall
FUN_0141eb20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_5;
  param_1[1] = param_3;
  *(undefined1 *)((int)param_1 + 0x1c) = param_6;
  param_1[2] = param_4;
  return;
}

// 0141EB50  FUN_0141eb50  size=38  [run]
void __thiscall
FUN_0141eb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_5;
  param_1[1] = param_3;
  *(undefined1 *)((int)param_1 + 0x1c) = param_6;
  param_1[2] = param_4;
  return;
}

// 0141EB80  FUN_0141eb80  size=50  [run]
void __thiscall
FUN_0141eb80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 6) = param_8;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  return;
}

// 0141EBC0  FUN_0141ebc0  size=26  [run]
void __thiscall
FUN_0141ebc0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined8 *)(param_1 + 2) = param_3;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 4) = param_4;
  return;
}

// 0141EBE0  FUN_0141ebe0  size=44  [run]
void __thiscall
FUN_0141ebe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = param_7;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}

// 0141EC10  FUN_0141ec10  size=32  [run]
void __thiscall
FUN_0141ec10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined1 param_5)

{
  *(undefined8 *)(param_1 + 2) = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 4) = param_5;
  return;
}

// 0141EC30  FUN_0141ec30  size=13  [run]
void __thiscall FUN_0141ec30(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}

// 0141EC40  FUN_0141ec40  size=13  [run]
void __thiscall FUN_0141ec40(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}

// 0141EC50  FUN_0141ec50  size=13  [run]
void __thiscall FUN_0141ec50(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}

// 0141EC60  FUN_0141ec60  size=13  [run]
void __thiscall FUN_0141ec60(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}

// 0141EC70  FUN_0141ec70  size=13  [run]
void __thiscall FUN_0141ec70(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

// 0141EC80  FUN_0141ec80  size=13  [run]
void __thiscall FUN_0141ec80(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}

// 0141EC90  FUN_0141ec90  size=13  [run]
void __thiscall FUN_0141ec90(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}

// 0141ECA0  FUN_0141eca0  size=13  [run]
void __thiscall FUN_0141eca0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}

// 0141ECB0  FUN_0141ecb0  size=43  [run]
void __thiscall FUN_0141ecb0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  *(undefined1 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x5c) = param_2;
  *(undefined1 *)(param_1 + 0x74) = param_2;
  *(undefined1 *)(param_1 + 0x80) = param_2;
  *(undefined1 *)(param_1 + 0x90) = param_2;
  *(undefined1 *)(param_1 + 0xa0) = param_2;
  return;
}

// 0141ECE0  FUN_0141ece0  size=24  [run]
void __thiscall FUN_0141ece0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0x29; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_2 = param_2 + 1;
  }
  return;
}

// 0141EDA0  FUN_0141eda0  size=366  [run]
void __fastcall FUN_0141eda0(float *param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (param_2 >> 2) * 4;
  fVar7 = (float)iVar4;
  pfVar1 = param_1 + param_2;
  if (iVar4 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = (param_4 - param_3) / fVar7;
  pfVar3 = param_1 + (param_2 >> 2) * 4;
  fVar2 = fVar7 * 4.0;
  fVar5 = fVar7 + param_3;
  fVar6 = fVar5 + fVar7;
  fVar7 = fVar6 + fVar7;
  fVar8 = param_3;
  for (; param_1 < pfVar3; param_1 = param_1 + 4) {
    *param_1 = *param_1 * fVar8;
    param_1[1] = param_1[1] * fVar5;
    param_1[2] = param_1[2] * fVar6;
    param_1[3] = param_1[3] * fVar7;
    fVar8 = fVar8 + fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar6 + fVar2;
    fVar7 = fVar7 + fVar2;
  }
  if (param_1 < pfVar1) {
    fVar7 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (param_4 - param_3) / fVar7;
    iVar4 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = (fVar7 + param_3) * param_1[1];
        param_3 = fVar7 + fVar7 + param_3;
        param_1[2] = param_1[2] * param_3;
        param_3 = fVar7 + param_3;
        param_1[3] = param_1[3] * param_3;
        param_1 = param_1 + 4;
        param_3 = fVar7 + param_3;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      do {
        *param_1 = *param_1 * param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + fVar7;
      } while (param_1 < pfVar1);
      return;
    }
  }
  return;
}

// 0141EF10  FUN_0141ef10  size=181  [run]
void __fastcall FUN_0141ef10(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 0141EFD0  FUN_0141efd0  size=54  [run]
void FUN_0141efd0(float param_1,float param_2)

{
  if (param_2 == param_1) {
    FUN_0141ef10();
    return;
  }
  FUN_0141eda0(param_1,param_2);
  return;
}

// 0141F010  FUN_0141f010  size=156  [run]
void __fastcall FUN_0141f010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01820b04;
  thunk_FUN_01424b20();
  thunk_FUN_01424b20();
  thunk_FUN_01424b20();
  thunk_FUN_01424b20();
  thunk_FUN_01424b20();
  thunk_FUN_01424b20();
  thunk_FUN_01424b20();
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  *param_1 = &PTR_FUN_01803c4c;
  return;
}

// 0141F0B0  FUN_0141f0b0  size=624  [run]
int __thiscall
FUN_0141f0b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_a8 [6];
  char local_8f;
  char local_7b;
  char local_67;
  char local_4b;
  char local_33;
  char local_27;
  char local_17;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 **)(param_1 + 4) = param_4;
  puVar5 = local_a8;
  for (iVar4 = 0x29; param_4 = param_4 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_4;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x14) = *param_5;
  iVar4 = 0;
  for (uVar1 = param_5[1] & 0x3ffff; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    iVar4 = iVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (local_8f != '\0') {
    uVar2 = FUN_01420d40(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar3 = FUN_01420d50(param_1 + 0x30,iVar4,*param_5);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  if (local_7b != '\0') {
    uVar2 = FUN_01421d10(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar3 = FUN_01421d20(param_1 + 0x40,iVar4,*param_5);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  if (local_67 != '\0') {
    uVar2 = FUN_01422200(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar3 = FUN_01422210(param_1 + 0x50,iVar4,*param_5);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  if (local_4b != '\0') {
    uVar2 = FUN_01422b20(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar3 = FUN_01422b30(param_1 + 0x60,iVar4,*param_5);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  if (local_33 != '\0') {
    uVar2 = FUN_01423f80(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar3 = FUN_01423f90(param_1 + 0x80,iVar4,*param_5);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  if (local_27 != '\0') {
    uVar2 = FUN_014237e0(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar3 = FUN_014237f0(param_1 + 0x70,iVar4,*param_5);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  if (local_17 != '\0') {
    uVar2 = FUN_01424660(iVar4);
    iVar3 = FUN_01420600(param_2,uVar2);
    if (iVar3 != 1) {
      return iVar3;
    }
    iVar4 = FUN_01424670(param_1 + 0x90,iVar4,*param_5);
    if (iVar4 != 1) {
      return iVar4;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = local_14;
  *(undefined4 *)(param_1 + 0x1c) = local_10;
  *(undefined4 *)(param_1 + 0x20) = local_c;
  return 1;
}

// 0141F330  FUN_0141f330  size=27  [run]
undefined4 FUN_0141f330(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 0141F350  FUN_0141f350  size=491  [run]
void __thiscall FUN_0141f350(int param_1,undefined4 *param_2)

{
  int iVar1;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  uint local_24;
  undefined1 local_20;
  double local_1c;
  double local_14;
  undefined4 local_c;
  undefined1 local_8;
  
  if ((*(char *)((int)param_2 + 0x19) != '\0') && (*(char *)(param_2 + 6) != '\0')) {
    iVar1 = *(int *)(param_1 + 0xac);
    local_c = *param_2;
    local_1c = (double)(float)param_2[1];
    local_24 = param_2[3];
    local_14 = (double)(float)param_2[2];
    local_34 = (double)(float)param_2[4];
    local_2c = (double)(float)param_2[5];
    local_8 = 0;
    local_20 = 0;
    FUN_01420ed0(&local_34,&local_1c);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (*(int *)(param_1 + 0xac) - iVar1);
  }
  if ((*(char *)((int)param_2 + 0x2d) != '\0') && (*(char *)(param_2 + 0xb) != '\0')) {
    local_24 = param_2[7];
    local_3c = (double)(float)param_2[8];
    local_34 = (double)(float)param_2[9];
    local_2c = (double)(float)param_2[10];
    local_20 = 0;
    FUN_01421d60(&local_3c);
  }
  if ((*(char *)((int)param_2 + 0x41) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
    iVar1 = *(int *)(param_1 + 200);
    local_24 = param_2[0xc];
    local_3c = (double)(float)param_2[0xd];
    local_34 = (double)(float)param_2[0xe];
    local_2c = (double)(float)param_2[0xf];
    local_20 = 0;
    FUN_014222c0(&local_3c);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (*(int *)(param_1 + 200) - iVar1);
  }
  if ((*(char *)((int)param_2 + 0x5d) != '\0') && (*(char *)(param_2 + 0x17) != '\0')) {
    local_54 = (double)(float)param_2[0x11];
    local_4c = (double)(float)param_2[0x13];
    local_24 = local_24 & 0xffffff00;
    local_44 = (double)(float)param_2[0x12];
    local_3c = (double)(float)param_2[0x14];
    local_34 = (double)(float)param_2[0x15];
    local_2c = (double)(float)param_2[0x16];
    FUN_01422b70(&local_54);
  }
  if ((*(char *)((int)param_2 + 0x81) != '\0') && (*(char *)(param_2 + 0x20) != '\0')) {
    iVar1 = *(int *)(param_1 + 0xe4);
    local_2c = (double)(float)param_2[0x1f];
    local_34 = (double)CONCAT44(local_34._4_4_,param_2[0x1e]);
    local_24 = local_24 & 0xffffff00;
    FUN_01423a50(&local_34);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (*(int *)(param_1 + 0xe4) - iVar1);
  }
  if ((*(char *)((int)param_2 + 0x75) != '\0') && (*(char *)(param_2 + 0x1d) != '\0')) {
    local_4c = (double)(float)param_2[0x18];
    local_44 = (double)(float)param_2[0x19];
    local_24 = local_24 & 0xffffff00;
    local_3c = (double)(float)param_2[0x1a];
    local_34 = (double)(float)param_2[0x1b];
    local_2c = (double)(float)param_2[0x1c];
    FUN_01423fd0(&local_4c);
  }
  if ((*(char *)((int)param_2 + 0x91) != '\0') && (*(char *)(param_2 + 0x24) != '\0')) {
    local_34 = *(double *)(param_2 + 0x21);
    local_2c = (double)(float)param_2[0x23];
    local_24 = local_24 & 0xffffff00;
    FUN_014246b0(&local_34);
  }
  return;
}

// 0141F540  FUN_0141f540  size=114  [run]
undefined4 __thiscall FUN_0141f540(undefined4 *param_1,int *param_2)

{
  FUN_01420650(param_2);
  FUN_01420650(param_2);
  FUN_01420650(param_2);
  FUN_01420650(param_2);
  FUN_01420650(param_2);
  FUN_01420650(param_2);
  FUN_01420650(param_2);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 0141F5C0  FUN_0141f5c0  size=844  [run]
void __thiscall FUN_0141f5c0(int param_1,int *param_2)

{
  void *_Src;
  size_t sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_ec [6];
  char local_d3;
  char local_bf;
  char local_ab;
  char local_8f;
  char local_77;
  char local_6b;
  char local_5b;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  size_t local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  float local_14;
  void *local_10;
  uint local_c;
  int local_8;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar5 = local_ec;
  for (iVar3 = 0x29; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar5 = puVar5 + 1;
  }
  FUN_0141f350(local_ec);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar3 + 0x1c) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  *(undefined1 *)(iVar3 + 0x44) = 0;
  *(undefined1 *)(iVar3 + 0x60) = 0;
  *(undefined1 *)(iVar3 + 0x78) = 0;
  *(undefined1 *)(iVar3 + 0x84) = 0;
  *(undefined1 *)(iVar3 + 0x94) = 0;
  *(undefined1 *)(iVar3 + 0xa4) = 0;
  FUN_013517e0(param_2,*(undefined4 *)(param_1 + 0x2c));
  local_14 = (float)(uint)*(ushort *)((int)param_2 + 0xe);
  if (*(ushort *)((int)param_2 + 0xe) != 0) {
    local_c = 0;
    for (uVar2 = param_2[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      local_c = local_c + 1;
    }
    sVar1 = (uint)*(ushort *)(param_2 + 3) * 4;
    local_38 = sVar1;
    local_10 = (void *)(**(code **)(**(int **)(param_1 + 8) + 4))(sVar1);
    local_8 = 0;
    if (local_10 != (void *)0x0) {
      if ((local_8f == '\0') ||
         (local_8 = (**(code **)(**(int **)(param_1 + 8) + 4))(sVar1), local_8 != 0)) {
        local_44 = *(float *)(param_1 + 0x20) * 0.01;
        local_48 = 1.0 - local_44;
        local_40 = 1.0 - local_50 * 0.01;
        local_3c = local_54 * local_50 * 0.01;
        local_44 = *(float *)(param_1 + 0x1c) * local_44;
        local_30 = FUN_01420690(0);
        local_20 = FUN_01420690(0);
        local_34 = FUN_01420690(0);
        local_28 = FUN_01420690(0);
        local_1c = FUN_01420690(0);
        local_24 = FUN_01420690(0);
        local_2c = FUN_01420690(0);
        local_18 = 0;
        if (local_c != 0) {
          uVar2 = (uint)local_14 & 0xffff;
          do {
            local_14 = *(float *)(param_1 + 0x18);
            _Src = (void *)(*param_2 + *(ushort *)(param_2 + 3) * local_18 * 4);
            if (local_58 == local_14) {
              FUN_0141ef10();
            }
            else {
              FUN_0141eda0(local_14,local_58);
            }
            FID_conflict__memcpy(local_10,_Src,local_38);
            if (local_d3 != '\0') {
              local_30 = FUN_01420a80(local_30,_Src,_Src,uVar2);
            }
            if (local_bf != '\0') {
              local_20 = FUN_014211a0(local_20,_Src,_Src,uVar2);
            }
            if (local_ab != '\0') {
              local_34 = FUN_01421fe0(local_34,_Src,_Src,uVar2);
            }
            if (local_8f != '\0') {
              FUN_014204c0(local_8,uVar2);
              local_28 = FUN_014225e0(local_28,_Src,local_8,_Src,uVar2);
            }
            if (local_6b != '\0') {
              local_1c = FUN_01423340(local_1c,_Src,_Src,uVar2);
            }
            if (local_77 != '\0') {
              local_24 = FUN_01423c50(local_24,_Src,_Src,uVar2);
            }
            if (local_5b != '\0') {
              local_2c = FUN_014242c0(local_2c,_Src,_Src,uVar2);
            }
            FUN_01424950(_Src,local_10,local_44,local_3c,local_48,local_40,uVar2);
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
        *(float *)(param_1 + 0x18) = local_58;
        *(float *)(param_1 + 0x1c) = local_54;
        *(float *)(param_1 + 0x20) = local_50;
        if (local_8 != 0) {
          (**(code **)(**(int **)(param_1 + 8) + 8))(local_8);
        }
      }
      (**(code **)(**(int **)(param_1 + 8) + 8))(local_10);
    }
  }
  return;
}

// 0141F920  FUN_0141f920  size=183  [run]
undefined4 * __fastcall FUN_0141f920(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01820b04;
  param_1[1] = 0;
  FUN_014204b0();
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  FUN_01420d20();
  FUN_01421ce0();
  FUN_014221d0();
  FUN_01422af0();
  FUN_014237b0();
  FUN_01423f60();
  FUN_01424630();
  return param_1;
}

// 0141F9E0  FUN_0141f9e0  size=34  [run]
undefined4 FUN_0141f9e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))(0x100);
  if (iVar1 != 0) {
    uVar2 = FUN_0141f920();
    return uVar2;
  }
  return 0;
}

// 0141FA10  FUN_0141fa10  size=26  [run]
int __fastcall FUN_0141fa10(int param_1)

{
  FUN_014204b0();
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}

// 0141FA40  FUN_0141fa40  size=35  [run]
void FUN_0141fa40(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0141FA70  FUN_0141fa70  size=33  [run]
undefined4 __thiscall FUN_0141fa70(undefined4 param_1,byte param_2)

{
  FUN_0141f010();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0141FAB0  FUN_0141fab0  size=357  [run]
undefined4 __thiscall FUN_0141fab0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_4 == 0) {
    param_1[2] = 0x468ca000;
    param_1[0x13] = 0x468ca000;
    param_1[0x16] = -0x3e600000;
    param_1[0x17] = 0x41a00000;
    param_1[0x19] = -0x3de00000;
    param_1[0x1b] = 0x3f800000;
    param_1[0xe] = 0x447a0000;
    param_1[0x1c] = 0x41200000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0x42200000;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 1;
    param_1[0xf] = 0;
    param_1[0x10] = -0x3d400000;
    param_1[0x12] = -0x3d400000;
    param_1[0x14] = 0x42200000;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0x42c80000;
    param_1[0x1f] = 0;
    param_1[0x20] = 0x42c80000;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    fVar2 = (float10)FUN_00fdc1f0();
    param_1[0x26] = (int)(float)fVar2;
    param_1[0x27] = (int)(float)fVar2;
    param_1[0x28] = 0x42c80000;
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    *(undefined1 *)(param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 0x25) = 1;
    *(undefined1 *)(param_1 + 0x29) = 1;
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return uVar1;
}

// 0141FC20  FUN_0141fc20  size=880  [run]
undefined4 __thiscall FUN_0141fc20(int param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float10 fVar3;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(bool *)(param_1 + 0x31) = cVar1 != '\0';
    return 1;
  case 1:
    *(float *)(param_1 + 0x20) = *param_3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 0x24) = *param_3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x28) = *param_3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  case 4:
    *(float *)(param_1 + 0x2c) = *param_3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  default:
    return 0x1f;
  case 10:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(bool *)(param_1 + 0x79) = cVar1 != '\0';
    return 1;
  case 0xb:
    *(float *)(param_1 + 100) = *param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    return 1;
  case 0xc:
    *(float *)(param_1 + 0x68) = *param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    return 1;
  case 0xd:
    *(float *)(param_1 + 0x6c) = *param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    return 1;
  case 0xe:
    *(float *)(param_1 + 0x70) = *param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    return 1;
  case 0xf:
    *(float *)(param_1 + 0x74) = *param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    return 1;
  case 0x14:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x84) = 1;
    *(bool *)(param_1 + 0x85) = cVar1 != '\0';
    return 1;
  case 0x15:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x84) = 1;
    *(float *)(param_1 + 0x7c) = fVar2;
    return 1;
  case 0x16:
    *(float *)(param_1 + 0x80) = *param_3;
    *(undefined1 *)(param_1 + 0x84) = 1;
    return 1;
  case 0x1e:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x94) = 1;
    *(bool *)(param_1 + 0x95) = cVar1 != '\0';
    return 1;
  case 0x1f:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x94) = 1;
    *(int *)(param_1 + 0x88) = (int)fVar2;
    return 1;
  case 0x20:
    *(int *)(param_1 + 0x8c) = (int)*param_3;
    *(undefined1 *)(param_1 + 0x94) = 1;
    return 1;
  case 0x21:
    *(float *)(param_1 + 0x90) = *param_3;
    *(undefined1 *)(param_1 + 0x94) = 1;
    return 1;
  case 0x28:
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x98) = (float)fVar3;
    *(undefined1 *)(param_1 + 0xa4) = 1;
    return 1;
  case 0x29:
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x9c) = (float)fVar3;
    *(undefined1 *)(param_1 + 0xa4) = 1;
    return 1;
  case 0x2a:
    *(float *)(param_1 + 0xa0) = *param_3;
    *(undefined1 *)(param_1 + 0xa4) = 1;
    return 1;
  case 0x32:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(bool *)(param_1 + 0x1d) = cVar1 != '\0';
    return 1;
  case 0x33:
    *(float *)(param_1 + 4) = *param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    return 1;
  case 0x34:
    *(float *)(param_1 + 8) = *param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    return 1;
  case 0x35:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    return 1;
  case 0x36:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(float *)(param_1 + 0x10) = fVar2;
    return 1;
  case 0x37:
    *(float *)(param_1 + 0x14) = *param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    return 1;
  case 0x38:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    return 1;
  case 0x3c:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(bool *)(param_1 + 0x45) = cVar1 != '\0';
    return 1;
  case 0x3d:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(float *)(param_1 + 0x34) = fVar2;
    return 1;
  case 0x3e:
    *(float *)(param_1 + 0x38) = *param_3;
    *(undefined1 *)(param_1 + 0x44) = 1;
    return 1;
  case 0x3f:
    *(float *)(param_1 + 0x3c) = *param_3;
    *(undefined1 *)(param_1 + 0x44) = 1;
    return 1;
  case 0x40:
    *(float *)(param_1 + 0x40) = *param_3;
    *(undefined1 *)(param_1 + 0x44) = 1;
    return 1;
  case 0x46:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(bool *)(param_1 + 0x61) = cVar1 != '\0';
    return 1;
  case 0x47:
    *(float *)(param_1 + 0x48) = *param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 1;
  case 0x48:
    *(float *)(param_1 + 0x4c) = *param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 1;
  case 0x49:
    *(float *)(param_1 + 0x50) = *param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 1;
  case 0x4a:
    *(float *)(param_1 + 0x54) = *param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 1;
  case 0x4b:
    *(float *)(param_1 + 0x58) = *param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 1;
  case 0x4c:
    *(float *)(param_1 + 0x5c) = *param_3;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 1;
  }
}

// 01420090  FUN_01420090  size=64  [run]
void __thiscall FUN_01420090(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x29;
  *param_1 = &PTR_FUN_01820b24;
  puVar2 = param_1;
  while( true ) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar2 = *param_2;
  }
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  return;
}

// 014200D0  FUN_014200d0  size=87  [run]
undefined4 * __thiscall FUN_014200d0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0xa8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0x29;
    *puVar1 = &PTR_FUN_01820b24;
    puVar3 = puVar1;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *puVar3 = *param_1;
    }
    *(undefined1 *)(puVar1 + 7) = 1;
    *(undefined1 *)(puVar1 + 0xc) = 1;
    *(undefined1 *)(puVar1 + 0x11) = 1;
    *(undefined1 *)(puVar1 + 0x18) = 1;
    *(undefined1 *)(puVar1 + 0x1e) = 1;
    *(undefined1 *)(puVar1 + 0x21) = 1;
    *(undefined1 *)(puVar1 + 0x25) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01420130  FUN_01420130  size=39  [run]
undefined4 __thiscall FUN_01420130(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01420160  FUN_01420160  size=489  [run]
undefined4 __thiscall FUN_01420160(int param_1,undefined1 *param_2)

{
  float10 fVar1;
  
  *(undefined1 *)(param_1 + 0x1d) = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x31) = param_2[0x19];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x45) = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x61) = param_2[0x3b];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x85) = param_2[0x54];
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x79) = param_2[0x5d];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined1 *)(param_1 + 0x95) = param_2[0x72];
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x73);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x77);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x7b);
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x98) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x9c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  return 1;
}

// 01420360  FUN_01420360  size=34  [run]
undefined4 * FUN_01420360(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0xa8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01820b24;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01420390  FUN_01420390  size=35  [run]
void FUN_01420390(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 014203C0  FUN_014203c0  size=17  [run]
undefined4 FUN_014203c0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 014203E0  FUN_014203e0  size=17  [run]
undefined4 FUN_014203e0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01420400  FUN_01420400  size=17  [run]
undefined4 FUN_01420400(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01420420  FUN_01420420  size=17  [run]
undefined4 FUN_01420420(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01420440  FUN_01420440  size=17  [run]
undefined4 FUN_01420440(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01420460  FUN_01420460  size=34  [run]
undefined4 * __thiscall FUN_01420460(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01420490  FUN_01420490  size=29  [run]
float10 __fastcall FUN_01420490(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 * 0x343fd + 0x269ec3;
  *param_1 = iVar1;
  return (float10)iVar1;
}

// 014204B0  FUN_014204b0  size=9  [run]
void __fastcall FUN_014204b0(undefined4 *param_1)

{
  *param_1 = 0xbf7c9;
  return;
}

// 014204C0  FUN_014204c0  size=237  [run]
void __thiscall FUN_014204c0(int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = DAT_01b320cc;
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    iVar3 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
      iVar3 = *param_1;
      do {
        iVar3 = iVar3 * 0x343fd + 0x269ec3;
        *param_2 = (float)iVar3 * fVar2;
        iVar3 = iVar3 * 0x343fd + 0x269ec3;
        param_2[1] = (float)iVar3 * fVar2;
        iVar3 = iVar3 * 0x343fd + 0x269ec3;
        param_2[2] = (float)iVar3 * fVar2;
        iVar3 = iVar3 * 0x343fd + 0x269ec3;
        param_2[3] = (float)iVar3 * fVar2;
        param_2 = param_2 + 4;
      } while ((int)param_2 < (int)(pfVar1 + -3));
      *param_1 = iVar3;
    }
    if (param_2 < pfVar1) {
      iVar3 = *param_1;
      do {
        iVar3 = iVar3 * 0x343fd + 0x269ec3;
        *param_2 = (float)iVar3 * fVar2;
        param_2 = param_2 + 1;
      } while (param_2 < pfVar1);
      *param_1 = iVar3;
    }
  }
  return;
}

// 014205B0  FUN_014205b0  size=35  [run]
float10 __fastcall FUN_014205b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 * 0x343fd + 0x269ec3;
  *param_1 = iVar1;
  return (float10)iVar1 * (float10)DAT_01b320cc;
}

// 014205E0  FUN_014205e0  size=16  [run]
void __fastcall FUN_014205e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 014205F0  FUN_014205f0  size=1  [run]
void FUN_014205f0(void)

{
  return;
}

// 01420600  FUN_01420600  size=75  [run]
undefined4 __thiscall FUN_01420600(size_t *param_1,int *param_2,size_t param_3)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_2 + 4))(param_3);
  param_1[2] = (size_t)_Dst;
  param_1[1] = (size_t)_Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  _memset(_Dst,0,param_3);
  *param_1 = param_3;
  param_1[3] = param_1[2] + param_3;
  return 1;
}

// 01420650  FUN_01420650  size=56  [run]
void __thiscall FUN_01420650(undefined4 *param_1,int *param_2)

{
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 8))(param_1[1]);
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// 01420690  FUN_01420690  size=21  [run]
undefined4 __thiscall FUN_01420690(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  return param_1[1];
}

// 014206B0  FUN_014206b0  size=32  [run]
void __fastcall FUN_014206b0(size_t *param_1)

{
  if (*param_1 != 0) {
    _memset((void *)param_1[1],0,*param_1);
    param_1[2] = param_1[1];
  }
  return;
}

// 014206D0  FUN_014206d0  size=18  [run]
void __thiscall FUN_014206d0(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8);
  return;
}

// 014206F0  FUN_014206f0  size=12  [run]
void __thiscall FUN_014206f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01420700  FUN_01420700  size=17  [run]
void FUN_01420700(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01420720  FUN_01420720  size=851  [run]
void __fastcall FUN_01420720(int param_1,float *param_2,float *param_3,int param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_3[4];
  local_44 = param_3[0x18];
  local_40 = param_3[0x19];
  local_3c = param_3[0x1a];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_3[7];
  fVar9 = param_3[8];
  fVar10 = param_3[9];
  local_34 = param_3[0x1e];
  local_2c = param_3[0x20];
  fVar11 = param_3[10];
  fVar12 = param_3[0xb];
  fVar13 = param_3[0xc];
  fVar14 = param_3[0xd];
  fVar15 = param_3[0xe];
  local_14 = param_3[0x24];
  local_10 = param_3[0x25];
  local_8 = param_3[0x27];
  fVar16 = param_3[0xf];
  fVar17 = param_3[0x10];
  fVar18 = param_3[0x11];
  fVar19 = param_3[0x12];
  fVar20 = param_3[0x13];
  local_20 = param_3[0x2b];
  local_18 = param_3[0x2d];
  local_38 = param_3[0x1b];
  local_30 = param_3[0x1f];
  local_28 = param_3[0x21];
  local_24 = param_3[0x2a];
  local_1c = param_3[0x2c];
  local_c = param_3[0x26];
  if (param_1 != 0) {
    param_4 = param_4 - (int)param_2;
    fVar26 = local_40;
    do {
      fVar25 = local_2c;
      fVar24 = local_34;
      fVar23 = local_3c;
      local_40 = local_44;
      local_3c = ((local_40 * fVar2 + fVar1 * *(float *)(param_4 + (int)param_2) + fVar26 * fVar3) -
                 fVar23 * fVar4) - local_38 * fVar5;
      local_2c = ((fVar24 * fVar7 + fVar6 * local_3c + local_30 * fVar8) - fVar25 * fVar9) -
                 local_28 * fVar10;
      fVar21 = ((local_14 * fVar12 + fVar11 * local_2c + local_10 * fVar13) - local_c * fVar14) -
               local_8 * fVar15;
      local_10 = local_14;
      local_8 = local_c;
      fVar22 = ((local_24 * fVar17 + fVar16 * fVar21 + local_20 * fVar18) - local_1c * fVar19) -
               local_18 * fVar20;
      local_44 = *(float *)(param_4 + (int)param_2);
      local_20 = local_24;
      local_18 = local_1c;
      *param_2 = fVar22;
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
      local_34 = local_3c;
      fVar26 = local_40;
      local_38 = fVar23;
      local_30 = fVar24;
      local_28 = fVar25;
      local_24 = fVar21;
      local_1c = fVar22;
      local_14 = local_2c;
      local_c = fVar21;
    } while (param_1 != 0);
  }
  param_3[0x18] = local_44;
  param_3[0x19] = local_40;
  param_3[0x1a] = local_3c;
  param_3[0x1b] = local_38;
  param_3[0x1e] = local_34;
  param_3[0x1f] = local_30;
  param_3[0x20] = local_2c;
  param_3[0x21] = local_28;
  param_3[0x24] = local_14;
  param_3[0x25] = local_10;
  param_3[0x26] = local_c;
  param_3[0x27] = local_8;
  param_3[0x2a] = local_24;
  param_3[0x2b] = local_20;
  param_3[0x2c] = local_1c;
  param_3[0x2d] = local_18;
  return;
}

// 01420A80  FUN_01420a80  size=35  [run]
int FUN_01420a80(int param_1,undefined4 param_2)

{
  FUN_01420720(param_1,param_2);
  return param_1 + 0xc0;
}

// 01420AB0  FUN_01420ab0  size=12  [run]
undefined4 __fastcall FUN_01420ab0(undefined4 param_1)

{
  FUN_01424b10();
  return param_1;
}

// 01420AD0  FUN_01420ad0  size=14  [run]
int FUN_01420ad0(int param_1)

{
  return param_1 * 0xc0;
}

// 01420AE0  FUN_01420ae0  size=60  [run]
int __thiscall FUN_01420ae0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0xc0 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0xc0));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01420B20  FUN_01420b20  size=19  [run]
int __thiscall FUN_01420b20(int param_1,int param_2)

{
  return param_2 * 0xc0 + *(int *)(param_1 + 8);
}

// 01420B40  FUN_01420b40  size=235  [run]
void __thiscall FUN_01420b40(undefined4 *param_1,undefined8 *param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  double local_c;
  
  if (*(char *)((int)param_2 + 0x14) == '\0') {
    dVar1 = (double)param_2[1] * 0.01;
    if (0.0 < dVar1) {
      dVar1 = SQRT(dVar1);
    }
    local_c = (1.0 - dVar1 * 0.8) * 1.414;
    FUN_014254e0(*param_1,*param_2,local_c,local_6c);
    if (*(int *)(param_2 + 2) == 1) {
      FUN_014254e0(*param_1,*param_2,local_c,local_3c);
    }
    else {
      FUN_01424c90(local_3c);
    }
  }
  else {
    FUN_01424c90(local_6c);
    FUN_01424c90();
  }
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      FUN_01424c10(local_6c,param_1[2] + iVar3,0);
      FUN_01424c10(local_3c,param_1[2] + iVar3,5);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc0;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01420C30  FUN_01420c30  size=235  [run]
void __thiscall FUN_01420c30(undefined4 *param_1,undefined8 *param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  double local_c;
  
  if (*(char *)((int)param_2 + 0x14) == '\0') {
    dVar1 = (double)param_2[1] * 0.01;
    if (0.0 < dVar1) {
      dVar1 = SQRT(dVar1);
    }
    local_c = (1.0 - dVar1 * 0.8) * 1.414;
    FUN_01425610(*param_1,*param_2,local_c,local_6c);
    if (*(int *)(param_2 + 2) == 1) {
      FUN_01425610(*param_1,*param_2,local_c,local_3c);
    }
    else {
      FUN_01424c90(local_3c);
    }
  }
  else {
    FUN_01424c90(local_6c);
    FUN_01424c90();
  }
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      FUN_01424c10(local_6c,param_1[2] + iVar3,10);
      FUN_01424c10(local_3c,param_1[2] + iVar3,0xf);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc0;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01420D20  FUN_01420d20  size=12  [run]
undefined4 __fastcall FUN_01420d20(undefined4 param_1)

{
  FUN_01424b10();
  return param_1;
}

// 01420D30  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 01420D40  FUN_01420d40  size=16  [run]
int FUN_01420d40(int param_1)

{
  return param_1 * 0xc0;
}

// 01420D50  FUN_01420d50  size=67  [run]
int __thiscall FUN_01420d50(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  param_1[3] = 0;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0xc0 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0xc0));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01420DA0  FUN_01420da0  size=290  [run]
void __thiscall FUN_01420da0(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  float local_c;
  float local_8;
  
  local_24 = param_2[1];
  local_1c = param_2[3];
  local_28 = *param_2;
  local_20 = param_2[2];
  local_18 = param_2[4];
  local_3c = param_2[5];
  local_38 = param_2[6];
  local_34 = param_2[7];
  local_30 = param_2[8];
  local_2c = param_2[9];
  local_50 = param_2[10];
  local_4c = param_2[0xb];
  local_48 = param_2[0xc];
  local_44 = param_2[0xd];
  local_40 = param_2[0xe];
  local_64 = param_2[0xf];
  local_60 = param_2[0x10];
  local_5c = param_2[0x11];
  local_58 = param_2[0x12];
  local_54 = param_2[0x13];
  fVar1 = (float10)FUN_01424cb0(&local_28);
  fVar2 = (float10)FUN_01424cb0(&local_3c);
  local_c = (float)fVar2;
  fVar2 = (float10)FUN_01424cb0(&local_50);
  local_8 = (float)fVar2;
  fVar2 = (float10)FUN_01424cb0(&local_64);
  if (local_8 < (float)fVar1) {
    local_8 = (float)fVar1;
  }
  if ((local_8 == local_c) || (param_2 = (undefined4 *)local_8, local_8 == (float)fVar2)) {
    param_2 = (undefined4 *)(local_8 * 1.6931472);
  }
  local_14 = (undefined4)(longlong)ROUND((float)param_2 * 6.91);
  *(undefined4 *)(param_1 + 0xc) = local_14;
  return;
}

// 01420ED0  FUN_01420ed0  size=42  [run]
void __thiscall FUN_01420ed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01420b40(param_2);
  FUN_01420c30(param_3);
  FUN_01420da0(*(undefined4 *)(param_1 + 8));
  return;
}

// 01420F20  FUN_01420f20  size=20  [run]
void FUN_01420f20(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01420F40  FUN_01420f40  size=20  [run]
void FUN_01420f40(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01420F60  FUN_01420f60  size=565  [run]
void FUN_01420f60(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  while (param_4 != 0) {
    param_4 = param_4 + -1;
    fVar3 = *param_2 * *(float *)(param_1 + 0x50);
    param_2 = param_2 + 1;
    fVar6 = ABS(fVar3);
    *(float *)(param_1 + 0x54) = fVar3;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    fVar6 = fVar6 - *(float *)(param_1 + 8);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar4 = *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x58) = fVar6;
    fVar4 = (fVar4 * *(float *)(param_1 + 0x14) + fVar6 * *(float *)(param_1 + 0x10)) * 0.5 -
            *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x5c) = fVar4;
    fVar5 = fVar4 * 255.0;
    fVar6 = *(float *)(param_1 + 0x60);
    fVar2 = (float10)FUN_00fddce0((double)fVar5);
    fVar5 = (*(float *)(param_1 + 0x9c + (int)fVar5 * 4) * (float)((float10)fVar5 - fVar2) -
            ((float)((float10)fVar5 - fVar2) - fVar6) * *(float *)(param_1 + 0x98 + (int)fVar5 * 4))
            - *(float *)(param_1 + 100);
    fVar6 = *(float *)(param_1 + 0x1c);
    if (fVar5 < 0.0) {
      fVar6 = *(float *)(param_1 + 0x20);
    }
    fVar6 = (fVar4 * *(float *)(param_1 + 0x24) + fVar6) * fVar5 + *(float *)(param_1 + 100);
    *(float *)(param_1 + 100) = fVar6;
    fVar4 = fVar6 * fVar3 * *(float *)(param_1 + 0x6c);
    fVar6 = 0.0;
    if (fVar4 < *(float *)(param_1 + 0x2c)) {
      fVar6 = *(float *)(param_1 + 0x70);
    }
    fVar4 = fVar6 * fVar4 + fVar4;
    if (fVar4 < 1.0) {
      if (fVar4 <= -1.0) {
        fVar4 = -1.0;
      }
    }
    else {
      fVar4 = 1.0;
    }
    fVar6 = *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x74) = fVar4;
    fVar5 = *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar6;
    fVar1 = *(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x7c);
    fVar6 = ((fVar5 * *(float *)(param_1 + 0x38) +
             fVar6 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x30) * fVar4) -
            *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x3c)) -
            fVar1 * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x7c) = fVar6;
    *param_3 = *(float *)(param_1 + 0x94) * fVar3 +
               *(float *)(param_1 + 0x90) * fVar6 * *(float *)(param_1 + 0x8c);
    param_3 = param_3 + 1;
  }
  return;
}

// 014211A0  FUN_014211a0  size=37  [run]
int FUN_014211a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01420f60(param_1,param_2,param_3,param_4);
  return param_1 + 0x498;
}

// 014211D0  FUN_014211d0  size=160  [run]
void FUN_014211d0(undefined4 param_1,undefined4 param_2,char param_3,int param_4,int param_5)

{
  int iVar1;
  float10 fVar2;
  
  if (param_3 == '\0') {
    FUN_00fdc1f0();
  }
  iVar1 = 0;
  if (param_5 < 1) {
    return;
  }
  do {
    fVar2 = (float10)FUN_00fdc1f0();
    *(double *)(param_4 + iVar1 * 8) = (double)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_5);
  return;
}

// 01421280  FUN_01421280  size=19  [run]
int __fastcall FUN_01421280(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 014212B0  FUN_014212b0  size=14  [run]
int FUN_014212b0(int param_1)

{
  return param_1 * 0x498;
}

// 014212C0  FUN_014212c0  size=60  [run]
int __thiscall FUN_014212c0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x498 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x498));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01421300  FUN_01421300  size=19  [run]
int __thiscall FUN_01421300(int param_1,int param_2)

{
  return param_2 * 0x498 + *(int *)(param_1 + 8);
}

// 01421320  FUN_01421320  size=57  [run]
void __fastcall FUN_01421320(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b50(0x3ff0000000000000,*(int *)(param_1 + 8) + 0x50 + iVar1,4);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421360  FUN_01421360  size=94  [run]
void __thiscall FUN_01421360(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_014211d0(param_2,param_3,&DAT_0225b1d0,0x100);
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b90(&DAT_0225b1d0,0x100,*(int *)(param_1 + 8) + 0x50 + iVar1,0x12);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014213C0  FUN_014213c0  size=49  [run]
void __fastcall FUN_014213c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(0x12,*(int *)(param_1 + 8) + iVar1,3);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421400  FUN_01421400  size=96  [run]
void __thiscall FUN_01421400(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined8 local_c;
  
  local_c = 1.0;
  if (param_4 == '\0') {
    fVar3 = (float10)FUN_00fdc1f0();
    local_c = (double)fVar3;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50(local_c,*(int *)(param_1 + 8) + iVar1,2);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421460  FUN_01421460  size=278  [run]
void __thiscall FUN_01421460(int param_1,double param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  double local_c;
  
  local_c = 0.0;
  if (param_4 == '\0') {
    local_c = param_2 * 0.01;
    FUN_00fdc1f0();
  }
  iVar1 = FUN_00fdbc60();
  fVar3 = (float10)FUN_00fdc1f0();
  fVar4 = (float10)1;
  log2((((float10)(local_c * 20.0) - (float10)iVar1) *
        ((float10)*(double *)(&DAT_01b320d8 + iVar1 * 8) -
        (float10)*(double *)(&DAT_01b320d0 + iVar1 * 8)) +
       (float10)*(double *)(&DAT_01b320d0 + iVar1 * 8)) *
       ((fVar4 / fVar3 - fVar4) * (float10)local_c + fVar4));
  fVar4 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar4,*(int *)(param_1 + 8) + 0x50 + iVar1,7);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421580  FUN_01421580  size=799  [run]
void __thiscall FUN_01421580(undefined4 *param_1,double param_2,undefined4 param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  double local_c;
  
  param_2 = param_2 * 0.01;
  if (0.0 < param_2) {
    param_2 = SQRT(param_2);
  }
  switch(param_3) {
  case 0:
    fVar4 = (float10)FUN_014259d0(*param_1,param_2 * 7.800000000000001 + 4.35);
    local_c = (double)fVar4;
    dVar1 = 0.85 - param_2 * 0.5;
    goto LAB_014215e4;
  case 1:
    fVar4 = (float10)FUN_014259d0(*param_1,param_2 * 17.1 + 1.15);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,0.25 - param_2 * 0.15);
    param_2 = (double)fVar4;
    break;
  case 2:
    fVar4 = (float10)FUN_014259d0(*param_1,2.35 - param_2 * 0.9500000000000002);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,0.35 - param_2 * 0.09999999999999998);
    param_2 = (double)fVar4;
    break;
  case 3:
    fVar4 = (float10)FUN_014259d0(*param_1,0.95 - param_2 * 0.19999999999999996);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,0.25 - param_2 * 0.15);
    param_2 = (double)fVar4;
    break;
  case 4:
    fVar4 = (float10)FUN_014259d0(*param_1,8.25 - param_2 * 7.9);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,param_2 * 0.0 + 0.25);
    param_2 = (double)fVar4;
    break;
  case 5:
    fVar4 = (float10)FUN_014259d0(*param_1,2.15 - param_2 * 1.9);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,0.5 - param_2 * 0.3);
    param_2 = (double)fVar4;
    break;
  case 6:
    dVar1 = 0.7 - param_2 * 0.5499999999999999;
    fVar4 = (float10)FUN_014259d0(*param_1,dVar1);
    local_c = (double)fVar4;
    goto LAB_014215e4;
  case 7:
    dVar1 = 0.35 - param_2 * 0.24999999999999997;
    fVar4 = (float10)FUN_014259d0(*param_1,dVar1);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,dVar1);
    param_2 = (double)fVar4;
    break;
  case 8:
    dVar1 = 0.25 - param_2 * 0.2;
    fVar4 = (float10)FUN_014259d0(*param_1,dVar1);
    local_c = (double)fVar4;
    fVar4 = (float10)FUN_014259a0(*param_1,dVar1);
    param_2 = (double)fVar4;
    break;
  case 9:
    dVar1 = 0.1 - param_2 * 0.09000000000000001;
    fVar4 = (float10)FUN_014259d0(*param_1,dVar1);
    local_c = (double)fVar4;
LAB_014215e4:
    fVar4 = (float10)FUN_014259a0(*param_1,dVar1);
    param_2 = (double)fVar4;
  }
  fVar4 = (float10)FUN_014259a0(*param_1,0x3f847ae147ae147b);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      FUN_01424b50(param_2,param_1[2] + iVar3,8);
      FUN_01424b50((double)(fVar4 - (float10)param_2),param_1[2] + iVar3,9);
      FUN_01424b50(local_c,param_1[2] + iVar3,7);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x498;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 014218D0  FUN_014218d0  size=354  [run]
void __thiscall FUN_014218d0(undefined4 *param_1,double param_2,double param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  
  dVar1 = param_2 * 0.01;
  dVar2 = param_2;
  dVar3 = param_2;
  switch(param_4) {
  case 0:
    param_2 = 150.0;
    dVar2 = 100.0;
    dVar3 = 17500.0;
    break;
  case 1:
    param_2 = 300.0;
    dVar2 = 100.0;
    dVar3 = 20000.0;
    break;
  case 2:
    param_2 = 300.0;
    dVar2 = 300.0;
    dVar3 = 10000.0;
    break;
  case 3:
    param_2 = 300.0;
    dVar2 = 150.0;
    dVar3 = 12000.0;
    break;
  case 4:
    param_2 = 200.0;
    dVar2 = 100.0;
    dVar3 = 14000.0;
    break;
  case 5:
    param_2 = 300.0;
    dVar2 = 150.0;
    dVar3 = 16000.0;
    break;
  case 6:
    param_2 = 400.0;
    dVar2 = 200.0;
    dVar3 = 18000.0;
    break;
  case 7:
    param_2 = 1000.0;
    dVar2 = 100.0;
    dVar3 = 20000.0;
    break;
  case 8:
    param_2 = 2000.0;
    dVar2 = 200.0;
    dVar3 = 20000.0;
    break;
  case 9:
    param_2 = 1500.0;
    dVar2 = 150.0;
    dVar3 = 20000.0;
  }
  FUN_01425580(*param_1,dVar2 + ((param_2 + (dVar3 - param_2) * param_3 * 0.01) - dVar2) * dVar1,
               &DAT_0225b9d0);
  uVar5 = 0;
  if (param_1[1] != 0) {
    iVar4 = 0;
    do {
      FUN_01424c50(&DAT_0225b9d0,param_1[2] + iVar4,4);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x498;
    } while (uVar5 < (uint)param_1[1]);
  }
  return;
}

// 01421A60  FUN_01421a60  size=55  [run]
void __fastcall FUN_01421a60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b50(0,*(int *)(param_1 + 8) + iVar1,0xb);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421AA0  FUN_01421aa0  size=80  [run]
void __thiscall FUN_01421aa0(int param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50(param_2 * 0.01 * -2.0,*(int *)(param_1 + 8) + 0x50 + iVar1,8);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421AF0  FUN_01421af0  size=86  [run]
void __fastcall FUN_01421af0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_34 [48];
  
  FUN_01425450(*param_1,0x4034000000000000,local_34);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      FUN_01424c10(local_34,param_1[2] + iVar1,0xc);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01421B50  FUN_01421b50  size=124  [run]
void __thiscall FUN_01421b50(int param_1,double param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar2 = 0;
  do {
    FUN_01424b50(param_2 * 0.01,*(int *)(param_1 + 8) + 0x50 + iVar2,0x10);
    FUN_01424b50(1.0 - param_2 * 0.01,*(int *)(param_1 + 8) + 0x50 + iVar2,0x11);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x498;
  } while (uVar1 < *(uint *)(param_1 + 4));
  return;
}

// 01421BE0  FUN_01421be0  size=49  [run]
void __fastcall FUN_01421be0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,0x11);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421C20  FUN_01421c20  size=93  [run]
void __fastcall FUN_01421c20(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + 0x50 + iVar1,0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421C80  FUN_01421c80  size=93  [run]
void __fastcall FUN_01421c80(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + 0x50 + iVar1,0xf);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01421CE0  FUN_01421ce0  size=19  [run]
int __fastcall FUN_01421ce0(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 01421D00  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 01421D10  FUN_01421d10  size=16  [run]
int FUN_01421d10(int param_1)

{
  return param_1 * 0x498;
}

// 01421D20  FUN_01421d20  size=60  [run]
int __thiscall FUN_01421d20(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x498 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x498));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01421D60  FUN_01421d60  size=338  [run]
void __thiscall FUN_01421d60(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = param_2;
  FUN_01421320();
  FUN_01421360((int)*param_2,(int)((ulonglong)*param_2 >> 0x20),*(undefined1 *)((int)param_2 + 0x1c)
              );
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    param_2 = (undefined8 *)0x0;
    do {
      FUN_01424b70(0x12,*(int *)(param_1 + 8) + (int)param_2,3);
      param_2 = (undefined8 *)((int)param_2 + 0x498);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01421400((int)*puVar1,(int)((ulonglong)*puVar1 >> 0x20),*(undefined1 *)((int)puVar1 + 0x1c));
  FUN_01421460((int)*puVar1,(int)((ulonglong)*puVar1 >> 0x20),*(undefined4 *)(puVar1 + 3),
               *(undefined1 *)((int)puVar1 + 0x1c));
  FUN_01421580((int)*puVar1,(int)((ulonglong)*puVar1 >> 0x20),*(undefined4 *)(puVar1 + 3));
  FUN_014218d0((int)*puVar1,(int)((ulonglong)*puVar1 >> 0x20),(int)puVar1[1],
               (int)((ulonglong)puVar1[1] >> 0x20),*(undefined4 *)(puVar1 + 3));
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    param_2 = (undefined8 *)0x0;
    do {
      FUN_01424b50(0,0,*(int *)(param_1 + 8) + (int)param_2,0xb);
      param_2 = (undefined8 *)((int)param_2 + 0x498);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01421aa0((int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
  FUN_01421af0();
  FUN_01421b50(0,0x40590000);
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar3,0x11);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x498;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01421c20(0,0);
  FUN_01421c80(0,0);
  return;
}

// 01421EC0  FUN_01421ec0  size=17  [run]
void FUN_01421ec0(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01421EE0  FUN_01421ee0  size=17  [run]
void FUN_01421ee0(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01421F00  FUN_01421f00  size=221  [run]
void __fastcall FUN_01421f00(float *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_3[4];
  local_14 = param_3[6];
  local_10 = param_3[7];
  local_c = param_3[8];
  local_8 = param_3[9];
  if (param_2 != 0) {
    param_4 = param_4 - (int)param_1;
    fVar6 = local_10;
    fVar7 = local_8;
    do {
      local_8 = local_c;
      local_10 = local_14;
      local_c = ((local_10 * fVar2 + fVar1 * *(float *)(param_4 + (int)param_1) + fVar6 * fVar3) -
                local_8 * fVar4) - fVar7 * fVar5;
      local_14 = *(float *)(param_4 + (int)param_1);
      *param_1 = local_c;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      fVar6 = local_10;
      fVar7 = local_8;
    } while (param_2 != 0);
  }
  param_3[6] = local_14;
  param_3[7] = local_10;
  param_3[8] = local_c;
  param_3[9] = local_8;
  return;
}

// 01421FE0  FUN_01421fe0  size=32  [run]
int FUN_01421fe0(int param_1,undefined4 param_2)

{
  FUN_01421f00(param_1,param_2);
  return param_1 + 0x30;
}

// 01422000  FUN_01422000  size=19  [run]
int __fastcall FUN_01422000(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 01422030  FUN_01422030  size=14  [run]
int FUN_01422030(int param_1)

{
  return param_1 * 0x30;
}

// 01422040  FUN_01422040  size=60  [run]
int __thiscall FUN_01422040(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x30 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x30));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01422080  FUN_01422080  size=19  [run]
int __thiscall FUN_01422080(int param_1,int param_2)

{
  return param_2 * 0x30 + *(int *)(param_1 + 8);
}

// 014220A0  FUN_014220a0  size=293  [run]
void __thiscall FUN_014220a0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_34 [48];
  
  FUN_01424c90(local_34);
  if (*(char *)((int)param_2 + 0x1c) == '\0') {
    iVar1 = *(int *)(param_2 + 3);
    if (iVar1 == 0) {
      FUN_014254e0();
    }
    else if (iVar1 == 1) {
      FUN_014252b0(*param_1,*param_2,
                   (double)param_2[1] * 0.01 * (double)param_2[1] * 0.01 * 9.0 + 1.0,param_2[2],
                   local_34);
    }
    else if (iVar1 == 2) {
      FUN_01425610();
    }
  }
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_01424c10();
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 014221D0  FUN_014221d0  size=19  [run]
int __fastcall FUN_014221d0(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 014221F0  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 01422200  FUN_01422200  size=16  [run]
int FUN_01422200(int param_1)

{
  return param_1 * 0x30;
}

// 01422210  FUN_01422210  size=67  [run]
int __thiscall FUN_01422210(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  param_1[3] = 0;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x30 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x30));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01422260  FUN_01422260  size=96  [run]
void __thiscall FUN_01422260(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = param_2[1];
  local_20 = *param_2;
  local_18 = param_2[2];
  local_14 = param_2[3];
  local_10 = param_2[4];
  fVar1 = (float10)FUN_01424cb0(&local_20);
  local_c = (undefined4)(longlong)ROUND(fVar1 * (float10)6.91);
  *(undefined4 *)(param_1 + 0xc) = local_c;
  return;
}

// 014222C0  FUN_014222c0  size=105  [run]
void __thiscall FUN_014222c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_014220a0(param_2);
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  local_10 = puVar1[4];
  fVar2 = (float10)FUN_01424cb0(&local_20);
  local_c = (undefined4)(longlong)ROUND(fVar2 * (float10)6.91);
  *(undefined4 *)(param_1 + 0xc) = local_c;
  return;
}

// 01422340  FUN_01422340  size=20  [run]
void FUN_01422340(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01422360  FUN_01422360  size=634  [run]
void __thiscall FUN_01422360(float *param_1,int param_2,float *param_3,int param_4)

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
  float *in_EAX;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = param_1[2];
  fVar2 = param_1[4];
  fVar3 = param_1[1];
  fVar4 = param_1[3];
  fVar5 = param_1[5];
  local_18 = param_1[0x17];
  local_10 = param_1[0x19];
  fVar6 = param_1[6];
  fVar7 = param_1[7];
  fVar8 = param_1[8];
  fVar9 = param_1[9];
  fVar10 = param_1[10];
  local_28 = param_1[0x1d];
  local_20 = param_1[0x1f];
  local_24 = param_1[0x1e];
  local_1c = param_1[0x20];
  local_14 = param_1[0x18];
  local_c = param_1[0x1a];
  if (param_4 != 0) {
    param_2 = param_2 - (int)in_EAX;
    do {
      fVar16 = local_10;
      fVar15 = local_18;
      fVar14 = local_20;
      fVar13 = local_28;
      param_1[0x15] = *(float *)(param_2 + (int)in_EAX);
      local_28 = *in_EAX;
      *param_1 = local_28;
      local_28 = local_28 * param_1[0x16];
      local_20 = ((fVar13 * fVar7 + fVar6 * local_28 + local_24 * fVar8) - fVar14 * fVar9) -
                 local_1c * fVar10;
      local_10 = ((fVar15 * fVar1 + fVar3 * local_20 + local_14 * fVar4) - fVar16 * fVar2) -
                 local_c * fVar5;
      param_1[0x23] = local_10;
      param_4 = param_4 + -1;
      in_EAX = in_EAX + 1;
      fVar12 = param_1[0x24];
      fVar11 = param_1[0xe];
      if (ABS(param_1[0xc]) < ABS(param_1[0x15])) {
        fVar12 = fVar11;
      }
      fVar17 = param_1[0x25];
      if (ABS(param_1[0xc]) < ABS(param_1[0x15])) {
        fVar17 = param_1[0xf];
      }
      fVar17 = fVar17 - 1.0;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
        fVar11 = fVar12;
      }
      param_1[0x25] = fVar17;
      fVar12 = param_1[0x10];
      fVar11 = fVar11 - param_1[0x26];
      if (0.0 < fVar11) {
        fVar12 = param_1[0x11];
      }
      fVar12 = fVar12 * fVar11 + param_1[0x26];
      param_1[0x26] = fVar12;
      fVar12 = param_1[0x23] * fVar12;
      param_1[0x28] = fVar12;
      fVar12 = param_1[0x15] + fVar12;
      param_1[0x29] = fVar12;
      *param_3 = fVar12;
      param_3 = param_3 + 1;
      local_18 = local_20;
      local_24 = fVar13;
      local_1c = fVar14;
      local_14 = fVar15;
      local_c = fVar16;
    } while (param_4 != 0);
  }
  param_1[0x17] = local_18;
  param_1[0x18] = local_14;
  param_1[0x19] = local_10;
  param_1[0x1a] = local_c;
  param_1[0x1d] = local_28;
  param_1[0x1e] = local_24;
  param_1[0x1f] = local_20;
  param_1[0x20] = local_1c;
  return;
}

// 014225E0  FUN_014225e0  size=37  [run]
int FUN_014225e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int extraout_ECX;
  
  FUN_01422360(param_2,param_4,param_5);
  return extraout_ECX + 0xa8;
}

// 01422610  FUN_01422610  size=19  [run]
int __fastcall FUN_01422610(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 01422640  FUN_01422640  size=14  [run]
int FUN_01422640(int param_1)

{
  return param_1 * 0xa8;
}

// 01422650  FUN_01422650  size=60  [run]
int __thiscall FUN_01422650(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0xa8 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0xa8));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01422690  FUN_01422690  size=19  [run]
int __thiscall FUN_01422690(int param_1,int param_2)

{
  return param_2 * 0xa8 + *(int *)(param_1 + 8);
}

// 014226B0  FUN_014226b0  size=49  [run]
void __fastcall FUN_014226b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014226F0  FUN_014226f0  size=132  [run]
void __thiscall FUN_014226f0(int param_1,double param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  double local_c;
  
  local_c = 0.0;
  if (param_3 == '\0') {
    if (-143.0 <= param_2 - 6.0) {
      fVar3 = (float10)FUN_00fdc1f0();
      local_c = (double)fVar3;
    }
    else {
      local_c = 0.0;
    }
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50(local_c,*(int *)(param_1 + 8) + 0x54 + iVar1,1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01422780  FUN_01422780  size=112  [run]
void __thiscall FUN_01422780(undefined4 *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined1 local_34 [48];
  
  FUN_01424c90(local_34);
  if (param_3 == '\0') {
    FUN_014254e0(*param_1,param_2,0x3ff69fbe76c8b439,local_34);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_01424c10();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  return;
}

// 014227F0  FUN_014227f0  size=112  [run]
void __thiscall FUN_014227f0(undefined4 *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined1 local_34 [48];
  
  FUN_01424c90(local_34);
  if (param_3 == '\0') {
    FUN_01425610(*param_1,param_2,0x3ff69fbe76c8b439,local_34);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_01424c10();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  return;
}

// 01422860  FUN_01422860  size=49  [run]
void __fastcall FUN_01422860(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(0xe,*(int *)(param_1 + 8) + iVar1,0x12);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014228A0  FUN_014228a0  size=49  [run]
void __fastcall FUN_014228a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,0xb);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014228E0  FUN_014228e0  size=91  [run]
void __fastcall FUN_014228e0(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + iVar1,0xc);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01422940  FUN_01422940  size=91  [run]
void __fastcall FUN_01422940(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + iVar1,0xe);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014229A0  FUN_014229a0  size=57  [run]
void __fastcall FUN_014229a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b50(0x3ff0000000000000,*(int *)(param_1 + 8) + 0x54 + iVar1,0xf);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014229E0  FUN_014229e0  size=83  [run]
void __thiscall FUN_014229e0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_014259a0(*param_1,param_2);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,param_1[2] + iVar1,0x11);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01422A40  FUN_01422a40  size=78  [run]
void __fastcall FUN_01422a40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_01425a00(*param_1,0x3ff0000000000000);
  uVar3 = 0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      FUN_01424b70(uVar1,param_1[2] + iVar2,0xf);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xa8;
    } while (uVar3 < (uint)param_1[1]);
  }
  return;
}

// 01422A90  FUN_01422a90  size=91  [run]
void __fastcall FUN_01422a90(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_014259d0(*param_1,0x3ff0000000000000);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,param_1[2] + iVar1,0x10);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01422AF0  FUN_01422af0  size=19  [run]
int __fastcall FUN_01422af0(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 01422B10  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 01422B20  FUN_01422b20  size=16  [run]
int FUN_01422b20(int param_1)

{
  return param_1 * 0xa8;
}

// 01422B30  FUN_01422b30  size=60  [run]
int __thiscall FUN_01422b30(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0xa8 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0xa8));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01422B70  FUN_01422b70  size=269  [run]
void __thiscall FUN_01422b70(int param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_014226f0((int)*param_2,(int)((ulonglong)*param_2 >> 0x20),*(undefined1 *)(param_2 + 6));
  FUN_01422780((int)param_2[1],(int)((ulonglong)param_2[1] >> 0x20),*(undefined1 *)(param_2 + 6));
  FUN_014227f0((int)param_2[2],(int)((ulonglong)param_2[2] >> 0x20),*(undefined1 *)(param_2 + 6));
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(0xe,*(int *)(param_1 + 8) + iVar1,0x12);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,0xb);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_014228e0((int)param_2[3],(int)((ulonglong)param_2[3] >> 0x20));
  FUN_01422940((int)param_2[4],(int)((ulonglong)param_2[4] >> 0x20));
  FUN_014229a0();
  FUN_014229e0((int)param_2[5],(int)((ulonglong)param_2[5] >> 0x20));
  FUN_01422a40();
  FUN_01422a90();
  return;
}

// 01422C80  FUN_01422c80  size=17  [run]
void FUN_01422c80(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01422CB0  FUN_01422cb0  size=1679  [run]
void __fastcall FUN_01422cb0(int param_1,float *param_2,int param_3,int param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_3 + 0xc);
  fVar5 = *(float *)(param_3 + 0x10);
  fVar6 = *(float *)(param_3 + 0x14);
  fVar7 = *(float *)(param_3 + 0x18);
  local_74 = *(float *)(param_3 + 0xb4);
  local_6c = *(float *)(param_3 + 0xbc);
  fVar8 = *(float *)(param_3 + 0x1c);
  fVar9 = *(float *)(param_3 + 0x20);
  fVar10 = *(float *)(param_3 + 0x24);
  fVar11 = *(float *)(param_3 + 0x28);
  fVar12 = *(float *)(param_3 + 0x2c);
  local_64 = *(float *)(param_3 + 0xcc);
  local_58 = *(float *)(param_3 + 0xd8);
  fVar13 = *(float *)(param_3 + 0x30);
  fVar14 = *(float *)(param_3 + 0x34);
  fVar15 = *(float *)(param_3 + 0x38);
  fVar16 = *(float *)(param_3 + 0x3c);
  fVar17 = *(float *)(param_3 + 0x40);
  local_30 = *(float *)(param_3 + 0xe8);
  local_28 = *(float *)(param_3 + 0xf0);
  fVar18 = *(float *)(param_3 + 0x44);
  fVar19 = *(float *)(param_3 + 0x48);
  fVar20 = *(float *)(param_3 + 0x4c);
  fVar21 = *(float *)(param_3 + 0x50);
  fVar22 = *(float *)(param_3 + 0x54);
  local_10 = *(float *)(param_3 + 0x100);
  local_8 = *(float *)(param_3 + 0x108);
  fVar23 = *(float *)(param_3 + 0x58);
  fVar24 = *(float *)(param_3 + 0x5c);
  fVar25 = *(float *)(param_3 + 0x60);
  fVar26 = *(float *)(param_3 + 100);
  fVar27 = *(float *)(param_3 + 0x68);
  local_20 = *(float *)(param_3 + 0x118);
  local_18 = *(float *)(param_3 + 0x120);
  fVar28 = *(float *)(param_3 + 0x6c);
  fVar29 = *(float *)(param_3 + 0x70);
  fVar30 = *(float *)(param_3 + 0x74);
  fVar31 = *(float *)(param_3 + 0x78);
  fVar32 = *(float *)(param_3 + 0x7c);
  local_40 = *(float *)(param_3 + 0x130);
  local_38 = *(float *)(param_3 + 0x138);
  fVar1 = *(float *)(param_3 + 0x98);
  fVar33 = *(float *)(param_3 + 0x80);
  fVar34 = *(float *)(param_3 + 0x84);
  fVar35 = *(float *)(param_3 + 0x88);
  fVar36 = *(float *)(param_3 + 0x8c);
  fVar37 = *(float *)(param_3 + 0x90);
  local_50 = *(float *)(param_3 + 0x148);
  local_48 = *(float *)(param_3 + 0x150);
  fVar2 = *(float *)(param_3 + 0x9c);
  local_70 = *(float *)(param_3 + 0xb8);
  local_68 = *(float *)(param_3 + 0xc0);
  local_60 = *(float *)(param_3 + 0xd0);
  local_5c = *(float *)(param_3 + 0xd4);
  local_54 = *(float *)(param_3 + 0x144);
  local_4c = *(float *)(param_3 + 0x14c);
  local_44 = *(float *)(param_3 + 300);
  local_3c = *(float *)(param_3 + 0x134);
  local_34 = *(float *)(param_3 + 0xe4);
  local_2c = *(float *)(param_3 + 0xec);
  local_24 = *(float *)(param_3 + 0x114);
  local_1c = *(float *)(param_3 + 0x11c);
  local_14 = *(float *)(param_3 + 0xfc);
  local_c = *(float *)(param_3 + 0x104);
  if (param_1 != 0) {
    param_4 = param_4 - (int)param_2;
    do {
      fVar46 = local_64;
      fVar45 = local_6c;
      fVar44 = local_74;
      local_74 = *(float *)(param_4 + (int)param_2);
      local_6c = ((fVar44 * fVar4 + fVar3 * local_74 + local_70 * fVar5) - fVar45 * fVar6) -
                 local_68 * fVar7;
      fVar41 = ((fVar46 * fVar9 + fVar8 * local_6c + local_60 * fVar10) - local_5c * fVar11) -
               local_58 * fVar12;
      local_58 = local_5c;
      fVar38 = ((local_34 * fVar14 + fVar13 * fVar41 + local_30 * fVar15) - local_2c * fVar16) -
               local_28 * fVar17;
      local_30 = local_34;
      local_28 = local_2c;
      fVar42 = ((local_14 * fVar19 + fVar18 * fVar38 + local_10 * fVar20) - local_c * fVar21) -
               local_8 * fVar22;
      local_8 = local_c;
      local_10 = local_14;
      fVar39 = ((local_24 * fVar24 + fVar23 * fVar42 + local_20 * fVar25) - local_1c * fVar26) -
               local_18 * fVar27;
      local_20 = local_24;
      local_18 = local_1c;
      fVar43 = ((local_44 * fVar29 + fVar28 * fVar39 + local_40 * fVar30) - local_3c * fVar31) -
               local_38 * fVar32;
      local_40 = local_44;
      local_38 = local_3c;
      fVar40 = ((local_54 * fVar34 + fVar33 * fVar43 + local_50 * fVar35) - local_4c * fVar36) -
               local_48 * fVar37;
      *param_2 = fVar40 * fVar1 + local_74 * fVar2;
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
      local_50 = local_54;
      local_48 = local_4c;
      local_64 = local_6c;
      local_70 = fVar44;
      local_68 = fVar45;
      local_60 = fVar46;
      local_5c = fVar41;
      local_54 = fVar43;
      local_4c = fVar40;
      local_44 = fVar39;
      local_3c = fVar43;
      local_34 = fVar41;
      local_2c = fVar38;
      local_24 = fVar42;
      local_1c = fVar39;
      local_14 = fVar38;
      local_c = fVar42;
    } while (param_1 != 0);
  }
  *(float *)(param_3 + 0xb4) = local_74;
  *(float *)(param_3 + 0xb8) = local_70;
  *(float *)(param_3 + 0xbc) = local_6c;
  *(float *)(param_3 + 0xc0) = local_68;
  *(float *)(param_3 + 0xcc) = local_64;
  *(float *)(param_3 + 0xd0) = local_60;
  *(float *)(param_3 + 0xd4) = local_5c;
  *(float *)(param_3 + 0xd8) = local_58;
  *(float *)(param_3 + 0xe4) = local_34;
  *(float *)(param_3 + 0xe8) = local_30;
  *(float *)(param_3 + 0xec) = local_2c;
  *(float *)(param_3 + 0xf0) = local_28;
  *(float *)(param_3 + 0xfc) = local_14;
  *(float *)(param_3 + 0x100) = local_10;
  *(float *)(param_3 + 0x104) = local_c;
  *(float *)(param_3 + 0x108) = local_8;
  *(float *)(param_3 + 0x114) = local_24;
  *(float *)(param_3 + 0x118) = local_20;
  *(float *)(param_3 + 0x11c) = local_1c;
  *(float *)(param_3 + 0x120) = local_18;
  *(float *)(param_3 + 300) = local_44;
  *(float *)(param_3 + 0x130) = local_40;
  *(float *)(param_3 + 0x134) = local_3c;
  *(float *)(param_3 + 0x138) = local_38;
  *(float *)(param_3 + 0x144) = local_54;
  *(float *)(param_3 + 0x148) = local_50;
  *(float *)(param_3 + 0x14c) = local_4c;
  *(float *)(param_3 + 0x150) = local_48;
  return;
}

// 01423340  FUN_01423340  size=35  [run]
int FUN_01423340(int param_1,undefined4 param_2)

{
  FUN_01422cb0(param_1,param_2);
  return param_1 + 0x168;
}

// 01423370  FUN_01423370  size=19  [run]
int __fastcall FUN_01423370(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 014233A0  FUN_014233a0  size=14  [run]
int FUN_014233a0(int param_1)

{
  return param_1 * 0x168;
}

// 014233B0  FUN_014233b0  size=60  [run]
int __thiscall FUN_014233b0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x168 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x168));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 014233F0  FUN_014233f0  size=19  [run]
int __thiscall FUN_014233f0(int param_1,int param_2)

{
  return param_2 * 0x168 + *(int *)(param_1 + 8);
}

// 01423410  FUN_01423410  size=273  [run]
void __thiscall FUN_01423410(undefined4 *param_1,undefined4 param_2,double param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_154 [48];
  undefined1 local_124 [48];
  undefined1 local_f4 [48];
  undefined1 local_c4 [48];
  undefined1 local_94 [48];
  undefined1 local_64 [48];
  undefined1 local_34 [48];
  
  FUN_01425a50(*param_1,param_2,param_3 * 0.01,local_64,local_124,local_c4,local_34,local_94,
               local_f4,local_154);
  uVar1 = 0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      FUN_01424c10(local_64,param_1[2] + iVar2,2);
      FUN_01424c10(local_124,param_1[2] + iVar2,7);
      FUN_01424c10(local_c4,param_1[2] + iVar2,0xc);
      FUN_01424c10(local_34,param_1[2] + iVar2,0x11);
      FUN_01424c10(local_94,param_1[2] + iVar2,0x16);
      FUN_01424c10(local_f4,param_1[2] + iVar2,0x1b);
      FUN_01424c10(local_154,param_1[2] + iVar2,0x20);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x168;
    } while (uVar1 < (uint)param_1[1]);
  }
  return;
}

// 01423530  FUN_01423530  size=49  [run]
void __fastcall FUN_01423530(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,0x25);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x168;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423570  FUN_01423570  size=171  [run]
void __thiscall FUN_01423570(int param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  double local_14;
  double local_c;
  
  fVar3 = (float10)0;
  local_c = (double)fVar3;
  local_14 = 1.0;
  if (param_3 == '\0') {
    local_14 = (double)fVar3;
    fVar3 = (float10)FUN_01431e50(param_2);
    local_c = (double)fVar3;
    if (fVar3 < (float10)0) {
      fVar3 = (float10)FUN_00fdc1f0();
      local_c = (double)fVar3;
    }
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar2 = 0;
  while( true ) {
    FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + iVar2,0x26);
    FUN_01424b50(local_14,*(int *)(param_1 + 8) + iVar2,0x27);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x168;
    if (*(uint *)(param_1 + 4) <= uVar1) break;
    fVar3 = (float10)local_c;
  }
  return;
}

// 01423620  FUN_01423620  size=130  [run]
void __thiscall FUN_01423620(int param_1,double param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar2 = 0;
  do {
    FUN_01424b50(param_2 * 0.01,*(int *)(param_1 + 8) + 0xac + iVar2,0x2d);
    FUN_01424b50(1.0 - param_2 * 0.01,*(int *)(param_1 + 8) + 0xac + iVar2,0x2e);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x168;
  } while (uVar1 < *(uint *)(param_1 + 4));
  return;
}

// 014236B0  FUN_014236b0  size=49  [run]
void __fastcall FUN_014236b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,0x28);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x168;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014236F0  FUN_014236f0  size=96  [run]
void __fastcall FUN_014236f0(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + 0xac + iVar1,0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x168;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423750  FUN_01423750  size=96  [run]
void __fastcall FUN_01423750(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + 0xac + iVar1,0x2c);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x168;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014237B0  FUN_014237b0  size=19  [run]
int __fastcall FUN_014237b0(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 014237D0  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 014237E0  FUN_014237e0  size=16  [run]
int FUN_014237e0(int param_1)

{
  return param_1 * 0x168;
}

// 014237F0  FUN_014237f0  size=67  [run]
int __thiscall FUN_014237f0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  param_1[3] = 0;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x168 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x168));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01423840  FUN_01423840  size=525  [run]
void __thiscall FUN_01423840(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  local_30 = *(undefined4 *)((int)param_2 + 0xc);
  local_28 = *(undefined4 *)((int)param_2 + 0x14);
  local_98 = *(undefined4 *)((int)param_2 + 0x1c);
  local_34 = *(undefined4 *)((int)param_2 + 8);
  local_2c = *(undefined4 *)((int)param_2 + 0x10);
  local_24 = *(undefined4 *)((int)param_2 + 0x18);
  local_94 = *(undefined4 *)((int)param_2 + 0x20);
  local_90 = *(undefined4 *)((int)param_2 + 0x24);
  local_8c = *(undefined4 *)((int)param_2 + 0x28);
  local_88 = *(undefined4 *)((int)param_2 + 0x2c);
  local_70 = *(undefined4 *)((int)param_2 + 0x30);
  local_6c = *(undefined4 *)((int)param_2 + 0x34);
  local_68 = *(undefined4 *)((int)param_2 + 0x38);
  local_64 = *(undefined4 *)((int)param_2 + 0x3c);
  local_60 = *(undefined4 *)((int)param_2 + 0x40);
  local_48 = *(undefined4 *)((int)param_2 + 0x44);
  local_44 = *(undefined4 *)((int)param_2 + 0x48);
  local_40 = *(undefined4 *)((int)param_2 + 0x4c);
  local_3c = *(undefined4 *)((int)param_2 + 0x50);
  local_38 = *(undefined4 *)((int)param_2 + 0x54);
  local_5c = *(undefined4 *)((int)param_2 + 0x58);
  local_58 = *(undefined4 *)((int)param_2 + 0x5c);
  local_54 = *(undefined4 *)((int)param_2 + 0x60);
  local_50 = *(undefined4 *)((int)param_2 + 100);
  local_4c = *(undefined4 *)((int)param_2 + 0x68);
  local_84 = *(undefined4 *)((int)param_2 + 0x6c);
  local_80 = *(undefined4 *)((int)param_2 + 0x70);
  local_7c = *(undefined4 *)((int)param_2 + 0x74);
  local_78 = *(undefined4 *)((int)param_2 + 0x78);
  local_74 = *(undefined4 *)((int)param_2 + 0x7c);
  local_ac = *(undefined4 *)((int)param_2 + 0x80);
  local_a8 = *(undefined4 *)((int)param_2 + 0x84);
  local_a4 = *(undefined4 *)((int)param_2 + 0x88);
  local_a0 = *(undefined4 *)((int)param_2 + 0x8c);
  local_9c = *(undefined4 *)((int)param_2 + 0x90);
  fVar1 = (float10)FUN_01432390(&local_34);
  fVar2 = (float10)FUN_01432390(&local_98);
  local_10 = (float)fVar2;
  fVar2 = (float10)FUN_01432390(&local_70);
  local_20 = (float)fVar2;
  fVar2 = (float10)FUN_01432390(&local_48);
  local_14 = (float)fVar2;
  fVar2 = (float10)FUN_01432390(&local_5c);
  local_1c = (float)fVar2;
  fVar2 = (float10)FUN_01432390(&local_84);
  local_18 = (float)fVar2;
  fVar2 = (float10)FUN_01432390(&local_ac);
  if (local_10 < (float)fVar1) {
    local_10 = (float)fVar1;
  }
  param_2 = local_10;
  if (local_10 <= local_20) {
    param_2 = local_20;
  }
  if (param_2 <= local_14) {
    param_2 = local_14;
  }
  if (param_2 <= local_1c) {
    param_2 = local_1c;
  }
  if (param_2 <= local_18) {
    param_2 = local_18;
  }
  if (param_2 <= (float)fVar2) {
    param_2 = (float)fVar2;
  }
  local_c = (undefined4)(longlong)ROUND(param_2 * 6.91);
  *(undefined4 *)(param_1 + 0xc) = local_c;
  return;
}

// 01423A50  FUN_01423a50  size=189  [run]
void __thiscall FUN_01423a50(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_01423410(*param_2,*(undefined8 *)(param_2 + 2));
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,0x25);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x168;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01423570(*param_2,*(undefined1 *)(param_2 + 4));
  FUN_01423620(0x4059000000000000);
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,0x28);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x168;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_014236f0(0);
  FUN_01423750(0);
  FUN_01423840();
  return;
}

// 01423B10  FUN_01423b10  size=17  [run]
void FUN_01423b10(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01423B30  FUN_01423b30  size=20  [run]
void FUN_01423b30(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01423B50  FUN_01423b50  size=20  [run]
void FUN_01423b50(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01423B70  FUN_01423b70  size=218  [run]
void FUN_01423b70(undefined4 *param_1,float *param_2,int param_3)

{
  bool bVar1;
  int unaff_ESI;
  float fVar2;
  float fVar3;
  
  while (param_3 != 0) {
    *(undefined4 *)(unaff_ESI + 0x34) = *param_1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
    bVar1 = ABS(*(float *)(unaff_ESI + 0x34)) < ABS(*(float *)(unaff_ESI + 0xc));
    fVar3 = *(float *)(unaff_ESI + 0x38);
    if (bVar1) {
      fVar3 = *(float *)(unaff_ESI + 0x14);
    }
    fVar2 = *(float *)(unaff_ESI + 0x3c);
    if (!bVar1) {
      fVar2 = *(float *)(unaff_ESI + 0x18);
    }
    fVar2 = fVar2 - 1.0;
    if (0.0 <= fVar2) {
      if (0.0 < fVar2) {
        fVar3 = *(float *)(unaff_ESI + 0x38);
      }
    }
    else {
      fVar2 = 0.0;
    }
    *(float *)(unaff_ESI + 0x3c) = fVar2;
    fVar3 = fVar3 - *(float *)(unaff_ESI + 0x40);
    fVar2 = *(float *)(unaff_ESI + 0x1c);
    if (0.0 < fVar3) {
      fVar2 = *(float *)(unaff_ESI + 0x20);
    }
    fVar3 = fVar2 * fVar3 + *(float *)(unaff_ESI + 0x40);
    *(float *)(unaff_ESI + 0x40) = fVar3;
    *(float *)(unaff_ESI + 0x28) = fVar3;
    fVar3 = *(float *)(unaff_ESI + 0x34) * fVar3;
    *(float *)(unaff_ESI + 0x48) = fVar3;
    *param_2 = fVar3;
    param_2 = param_2 + 1;
  }
  return;
}

// 01423C50  FUN_01423c50  size=33  [run]
int FUN_01423c50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01423b70(param_2,param_3,param_4);
  return param_1 + 0x4c;
}

// 01423C80  FUN_01423c80  size=12  [run]
undefined4 __fastcall FUN_01423c80(undefined4 param_1)

{
  FUN_01424b10();
  return param_1;
}

// 01423CA0  FUN_01423ca0  size=11  [run]
int FUN_01423ca0(int param_1)

{
  return param_1 * 0x4c;
}

// 01423CB0  FUN_01423cb0  size=60  [run]
int __thiscall FUN_01423cb0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x4c >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x4c));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01423CF0  FUN_01423cf0  size=16  [run]
int __thiscall FUN_01423cf0(int param_1,int param_2)

{
  return param_2 * 0x4c + *(int *)(param_1 + 8);
}

// 01423D00  FUN_01423d00  size=46  [run]
void __fastcall FUN_01423d00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,9);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423D30  FUN_01423d30  size=46  [run]
void __fastcall FUN_01423d30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,2);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423D60  FUN_01423d60  size=88  [run]
void __fastcall FUN_01423d60(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + iVar1,3);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423DC0  FUN_01423dc0  size=98  [run]
void __thiscall FUN_01423dc0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined8 local_c;
  
  local_c = 1.0;
  if (param_4 == '\0') {
    fVar3 = (float10)FUN_00fdc1f0();
    local_c = (double)fVar3;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50(local_c,*(int *)(param_1 + 8) + iVar1,5);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423E30  FUN_01423e30  size=54  [run]
void __fastcall FUN_01423e30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b50(0x3ff0000000000000,*(int *)(param_1 + 8) + 0x34 + iVar1,1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01423E70  FUN_01423e70  size=80  [run]
void __thiscall FUN_01423e70(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_014259a0(*param_1,param_2);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,param_1[2] + iVar1,8);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01423EC0  FUN_01423ec0  size=75  [run]
void __thiscall FUN_01423ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_01425a00(*param_1,CONCAT44(param_3,param_2));
  uVar3 = 0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      FUN_01424b70(uVar1,param_1[2] + iVar2,6);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (uVar3 < (uint)param_1[1]);
  }
  return;
}

// 01423F10  FUN_01423f10  size=80  [run]
void __thiscall FUN_01423f10(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_014259d0(*param_1,param_2);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,param_1[2] + iVar1,7);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 01423F60  FUN_01423f60  size=12  [run]
undefined4 __fastcall FUN_01423f60(undefined4 param_1)

{
  FUN_01424b10();
  return param_1;
}

// 01423F70  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 01423F80  FUN_01423f80  size=13  [run]
int FUN_01423f80(int param_1)

{
  return param_1 * 0x4c;
}

// 01423F90  FUN_01423f90  size=60  [run]
int __thiscall FUN_01423f90(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 0x4c >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x4c));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01423FD0  FUN_01423fd0  size=220  [run]
void __thiscall FUN_01423fd0(int param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,9);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(0,*(int *)(param_1 + 8) + iVar1,2);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01423d60((int)*param_2,(int)((ulonglong)*param_2 >> 0x20));
  FUN_01423dc0((int)param_2[1],(int)((ulonglong)param_2[1] >> 0x20),*(undefined1 *)(param_2 + 5));
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b50(0,0x3ff00000,iVar1 + 0x34 + *(int *)(param_1 + 8),1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01423e70((int)param_2[2],(int)((ulonglong)param_2[2] >> 0x20));
  FUN_01423ec0((int)param_2[3],(int)((ulonglong)param_2[3] >> 0x20));
  FUN_01423f10((int)param_2[4],(int)((ulonglong)param_2[4] >> 0x20));
  return;
}

// 014240B0  FUN_014240b0  size=17  [run]
void FUN_014240b0(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 014240E0  FUN_014240e0  size=20  [run]
void FUN_014240e0(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01424100  FUN_01424100  size=20  [run]
void FUN_01424100(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01424120  FUN_01424120  size=406  [run]
void FUN_01424120(float *param_1,float *param_2)

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
  int in_EAX;
  int unaff_ESI;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar2 = *(float *)(unaff_ESI + 0x14);
  fVar3 = *(float *)(unaff_ESI + 0x18);
  fVar1 = *(float *)(unaff_ESI + 8);
  fVar4 = *(float *)(unaff_ESI + 0x10);
  fVar5 = *(float *)(unaff_ESI + 0x1c);
  fVar6 = *(float *)(unaff_ESI + 0x20);
  fVar12 = *(float *)(unaff_ESI + 0x40);
  fVar7 = *(float *)(unaff_ESI + 0x44);
  fVar13 = *(float *)(unaff_ESI + 0x48);
  fVar8 = *(float *)(unaff_ESI + 0x4c);
  fVar11 = (float10)FUN_00fdc1f0();
  while (fVar10 = fVar13, fVar9 = fVar12, in_EAX != 0) {
    fVar12 = *param_1 * *(float *)(unaff_ESI + 0x30);
    *(float *)(unaff_ESI + 0x34) = fVar12;
    fVar13 = fVar12 * 8388607.0 * (float)fVar11;
    in_EAX = in_EAX + -1;
    param_1 = param_1 + 1;
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.5;
    }
    else {
      fVar13 = fVar13 + 0.5;
    }
    fVar12 = *(float *)(unaff_ESI + 0x38);
    fVar14 = *(float *)(unaff_ESI + 0x3c) - 1.0;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
      fVar12 = (float)((int)fVar13 << ((byte)(int)fVar1 & 0x1f)) * 1.192093e-07;
    }
    if (fVar14 <= 0.0) {
      fVar14 = *(float *)(unaff_ESI + 0xc);
    }
    *(float *)(unaff_ESI + 0x3c) = fVar14;
    *(float *)(unaff_ESI + 0x38) = fVar12;
    fVar13 = ((fVar9 * fVar2 + fVar4 * fVar12 + fVar7 * fVar3) - fVar10 * fVar5) - fVar8 * fVar6;
    *param_2 = *(float *)(unaff_ESI + 0x58) * fVar13;
    param_2 = param_2 + 1;
    fVar7 = fVar9;
    fVar8 = fVar10;
  }
  *(float *)(unaff_ESI + 0x40) = fVar9;
  *(float *)(unaff_ESI + 0x44) = fVar7;
  *(float *)(unaff_ESI + 0x48) = fVar10;
  *(float *)(unaff_ESI + 0x4c) = fVar8;
  return;
}

// 014242C0  FUN_014242c0  size=32  [run]
int FUN_014242c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01424120(param_2,param_3);
  return param_1 + 100;
}

// 014242E0  FUN_014242e0  size=19  [run]
int __fastcall FUN_014242e0(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 01424310  FUN_01424310  size=11  [run]
int FUN_01424310(int param_1)

{
  return param_1 * 100;
}

// 01424320  FUN_01424320  size=60  [run]
int __thiscall FUN_01424320(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 100 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 100));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 01424360  FUN_01424360  size=16  [run]
int __thiscall FUN_01424360(int param_1,int param_2)

{
  return param_2 * 100 + *(int *)(param_1 + 8);
}

// 01424370  FUN_01424370  size=85  [run]
void __thiscall FUN_01424370(int param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  if (param_3 == '\0') {
    local_8 = 0x18 - *(int *)(&DAT_01820c70 + param_2 * 4);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      FUN_01424b70(local_8,*(int *)(param_1 + 8) + iVar1,2);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014243D0  FUN_014243d0  size=85  [run]
void __thiscall FUN_014243d0(uint *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  if ((param_3 == '\0') && (local_8 = param_2, 48000 < *param_1)) {
    local_8 = param_2 * 2;
  }
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_01424b70(local_8,param_1[2] + iVar1,3);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < param_1[1]);
  }
  return;
}

// 01424430  FUN_01424430  size=137  [run]
void __thiscall FUN_01424430(undefined4 *param_1,double param_2,char param_3)

{
  double dVar1;
  uint uVar2;
  undefined1 local_34 [48];
  
  if (param_3 == '\0') {
    param_2 = param_2 * 0.01;
    if (0.0 < param_2) {
      param_2 = SQRT(param_2);
    }
    dVar1 = 20000.0 - param_2 * 19000.0;
  }
  else {
    dVar1 = 20000.0;
  }
  FUN_014256b0(*param_1,0x4034000000000000,dVar1,local_34);
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_01424c10();
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

// 014244C0  FUN_014244c0  size=121  [run]
void __thiscall FUN_014244c0(int param_1,double param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar2 = 0;
  do {
    FUN_01424b50(param_2 * 0.01,*(int *)(param_1 + 8) + 0x30 + iVar2,0xb);
    FUN_01424b50(1.0 - param_2 * 0.01,*(int *)(param_1 + 8) + 0x30 + iVar2,0xc);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 100;
  } while (uVar1 < *(uint *)(param_1 + 4));
  return;
}

// 01424540  FUN_01424540  size=46  [run]
void __fastcall FUN_01424540(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,9);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01424570  FUN_01424570  size=90  [run]
void __fastcall FUN_01424570(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + 0x30 + iVar1,0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 014245D0  FUN_014245d0  size=90  [run]
void __fastcall FUN_014245d0(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00fdc1f0();
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b50((double)fVar3,*(int *)(param_1 + 8) + 0x30 + iVar1,10);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

// 01424630  FUN_01424630  size=19  [run]
int __fastcall FUN_01424630(int param_1)

{
  FUN_01424b10();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 01424650  thunk_FUN_01424b20  size=5  [run]
void thunk_FUN_01424b20(void)

{
  return;
}

// 01424660  FUN_01424660  size=13  [run]
int FUN_01424660(int param_1)

{
  return param_1 * 100;
}

// 01424670  FUN_01424670  size=60  [run]
int __thiscall FUN_01424670(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[1] = param_3;
  iVar1 = FUN_014206d0(-(uint)((int)((ulonglong)param_3 * 100 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 100));
  param_1[2] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 014246B0  FUN_014246b0  size=156  [run]
void __thiscall FUN_014246b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_01424370(*param_2,*(undefined1 *)(param_2 + 4));
  FUN_014243d0(param_2[1],*(undefined1 *)(param_2 + 4));
  FUN_01424430((int)*(undefined8 *)(param_2 + 2),
               (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20),*(undefined1 *)(param_2 + 4));
  FUN_014244c0(0,0x40590000);
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      FUN_01424b70(1,*(int *)(param_1 + 8) + iVar1,9);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  FUN_01424570(0,0);
  FUN_014245d0(0,0);
  return;
}

// 01424750  FUN_01424750  size=17  [run]
void FUN_01424750(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01424770  FUN_01424770  size=464  [run]
void FUN_01424770(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                 float param_6,float param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  if ((param_5 == param_4) && (param_7 == param_6)) {
    pfVar1 = param_3 + param_8;
    if (param_3 < pfVar1) {
      iVar10 = (int)param_1 - (int)param_3;
      do {
        pfVar2 = (float *)(iVar10 + (int)param_3);
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar4 = pfVar2[3];
        pfVar3 = (float *)((int)param_2 + (int)param_3 + (iVar10 - (int)param_1));
        fVar5 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        *param_3 = *pfVar3 * param_7 + *pfVar2 * param_5;
        param_3[1] = fVar5 * param_7 + fVar6 * param_5;
        param_3[2] = fVar8 * param_7 + fVar7 * param_5;
        param_3[3] = fVar9 * param_7 + fVar4 * param_5;
        param_3 = param_3 + 4;
      } while (param_3 < pfVar1);
      return;
    }
  }
  else {
    fVar6 = (float)param_8;
    if (param_8 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    pfVar1 = param_3 + param_8;
    fVar7 = (param_5 - param_4) / fVar6;
    fVar6 = (param_7 - param_6) / fVar6;
    if (param_3 < pfVar1) {
      iVar10 = (int)pfVar1 + (3 - (int)param_3);
      if (3 < (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) {
        do {
          fVar4 = param_2[1];
          *param_3 = *param_2 * param_6 + param_4 * *param_1;
          fVar5 = param_2[2];
          param_3[1] = param_1[1] * (fVar7 + param_4) + fVar4 * (fVar6 + param_6);
          param_4 = fVar7 + fVar7 + param_4;
          param_6 = fVar6 + fVar6 + param_6;
          fVar4 = param_2[3];
          param_3[2] = param_1[2] * param_4 + fVar5 * param_6;
          param_4 = fVar7 + param_4;
          param_6 = fVar6 + param_6;
          param_3[3] = param_1[3] * param_4 + fVar4 * param_6;
          param_3 = param_3 + 4;
          param_4 = param_4 + fVar7;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
          param_6 = param_6 + fVar6;
        } while ((int)param_3 < (int)(pfVar1 + -3));
      }
      if (param_3 < pfVar1) {
        iVar10 = (int)param_1 - (int)param_2;
        do {
          *param_3 = *(float *)(iVar10 + (int)param_2) * param_4 + *param_2 * param_6;
          param_3 = param_3 + 1;
          param_4 = param_4 + fVar7;
          param_2 = param_2 + 1;
          param_6 = param_6 + fVar6;
        } while (param_3 < pfVar1);
      }
    }
  }
  return;
}

// 01424950  FUN_01424950  size=440  [run]
void FUN_01424950(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((param_4 == param_3) && (param_6 == param_5)) {
    pfVar1 = param_1 + param_7;
    if (param_1 < pfVar1) {
      iVar6 = (int)param_2 - (int)param_1;
      do {
        pfVar2 = (float *)(iVar6 + (int)param_1);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        *param_1 = *pfVar2 * param_6 + *param_1 * param_4;
        param_1[1] = fVar3 * param_6 + param_1[1] * param_4;
        param_1[2] = fVar4 * param_6 + param_1[2] * param_4;
        param_1[3] = fVar5 * param_6 + param_1[3] * param_4;
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
      return;
    }
  }
  else {
    fVar3 = (float)param_7;
    if (param_7 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    pfVar1 = param_1 + param_7;
    fVar4 = (param_4 - param_3) / fVar3;
    fVar3 = (param_6 - param_5) / fVar3;
    if (param_1 < pfVar1) {
      iVar6 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * param_3 + *param_2 * param_5;
          param_1[1] = param_2[1] * (fVar3 + param_5) + (fVar4 + param_3) * param_1[1];
          param_3 = fVar4 + fVar4 + param_3;
          param_5 = fVar3 + fVar3 + param_5;
          param_1[2] = param_2[2] * param_5 + param_1[2] * param_3;
          param_3 = fVar4 + param_3;
          param_5 = fVar3 + param_5;
          param_1[3] = param_2[3] * param_5 + param_1[3] * param_3;
          param_1 = param_1 + 4;
          param_3 = param_3 + fVar4;
          param_2 = param_2 + 4;
          param_5 = param_5 + fVar3;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * param_3 + *param_2 * param_5;
        param_3 = param_3 + fVar4;
        param_2 = param_2 + 1;
        param_5 = param_5 + fVar3;
      }
    }
  }
  return;
}

// 01424B10  FUN_01424b10  size=16  [run]
void __fastcall FUN_01424b10(undefined4 *param_1)

{
  *param_1 = 0xac44;
  param_1[1] = 1;
  return;
}

// 01424B20  FUN_01424b20  size=1  [run]
void FUN_01424b20(void)

{
  return;
}

// 01424B30  FUN_01424b30  size=18  [run]
void __thiscall FUN_01424b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = param_3;
  return;
}

// 01424B50  FUN_01424b50  size=19  [run]
void FUN_01424b50(double param_1,int param_2,int param_3)

{
  *(float *)(param_2 + param_3 * 4) = (float)param_1;
  return;
}

// 01424B70  FUN_01424b70  size=26  [run]
void FUN_01424b70(int param_1,int param_2,int param_3)

{
  *(float *)(param_2 + param_3 * 4) = (float)param_1;
  return;
}

// 01424B90  FUN_01424b90  size=117  [run]
void FUN_01424b90(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_2) {
    iVar3 = (param_2 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    pfVar1 = (float *)(param_3 + param_4 * 4);
    pdVar2 = (double *)(param_1 + 0x10);
    do {
      *pfVar1 = (float)pdVar2[-2];
      iVar3 = iVar3 + -1;
      pfVar1[1] = (float)pdVar2[-1];
      pfVar1[2] = (float)*pdVar2;
      pfVar1[3] = (float)pdVar2[1];
      pfVar1 = pfVar1 + 4;
      pdVar2 = pdVar2 + 4;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_2) {
    pfVar1 = (float *)(param_3 + (iVar4 + param_4) * 4);
    do {
      iVar3 = iVar4 * 8;
      iVar4 = iVar4 + 1;
      *pfVar1 = (float)*(double *)(param_1 + iVar3);
      pfVar1 = pfVar1 + 1;
    } while (iVar4 < param_2);
  }
  return;
}

// 01424C10  FUN_01424c10  size=49  [run]
void FUN_01424c10(double *param_1,int param_2,int param_3)

{
  *(float *)(param_2 + param_3 * 4) = (float)*param_1;
  *(float *)(param_2 + 4 + param_3 * 4) = (float)param_1[1];
  *(float *)(param_2 + 8 + param_3 * 4) = (float)param_1[2];
  *(float *)(param_2 + 0xc + param_3 * 4) = (float)param_1[4];
  *(float *)(param_2 + 0x10 + param_3 * 4) = (float)param_1[5];
  return;
}

// 01424C50  FUN_01424c50  size=35  [run]
void FUN_01424c50(double *param_1,int param_2,int param_3)

{
  *(float *)(param_2 + param_3 * 4) = (float)*param_1;
  *(float *)(param_2 + 4 + param_3 * 4) = (float)param_1[1];
  *(float *)(param_2 + 8 + param_3 * 4) = (float)param_1[4];
  return;
}

// 01424C90  FUN_01424c90  size=29  [run]
void FUN_01424c90(undefined8 *param_1)

{
  *param_1 = 0x3ff0000000000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0x3ff0000000000000;
  return;
}

// 01424CB0  FUN_01424cb0  size=161  [run]
float10 FUN_01424cb0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10) * 4.0;
  if (0.0 <= fVar2) {
    fVar1 = ABS(-*(float *)(param_1 + 0xc) - SQRT(fVar2));
    fVar2 = ABS(SQRT(fVar2) - *(float *)(param_1 + 0xc));
    if (fVar2 < fVar1) {
      fVar2 = fVar1;
    }
    return (float10)(1.0 / (1.0 - fVar2 * 0.5));
  }
  return (float10)1 /
         ((float10)1 -
         SQRT((float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) -
              (float10)fVar2) * (float10)0.5);
}

// 01424D80  FUN_01424d80  size=81  [run]
void __thiscall FUN_01424d80(double *param_1,double param_2,double *param_3,double *param_4)

{
  int in_EAX;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)in_EAX;
  if (in_EAX < 0) {
    fVar1 = fVar1 + (float10)4294967296.0;
  }
  fVar1 = (float10)param_2 / fVar1;
  fVar2 = (float10)0.00020833333333333335;
  if (((float10)0.00020833333333333335 <= fVar1) &&
     (fVar2 = fVar1, (float10)0.4583333333333333 < fVar1)) {
    fVar2 = (float10)0.4583333333333333;
  }
  *param_1 = (double)fVar2;
  fVar1 = (float10)fptan(fVar2 * (float10)3.141592653589793);
  *param_3 = (double)fVar1;
  *param_4 = (double)(fVar1 * fVar1);
  return;
}

// 01424E10  FUN_01424e10  size=593  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01424e10(double param_1,double param_2,double param_3,double param_4,double param_5,
                 char param_6,char param_7,double param_8)

{
  double dVar1;
  int in_EAX;
  double *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double local_14;
  double local_c;
  
  dVar1 = (double)in_EAX;
  if (in_EAX < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  param_1 = param_1 / dVar1;
  if (0.00020833333333333335 <= param_1) {
    if (0.4583333333333333 < param_1) {
      param_1 = 0.4583333333333333;
    }
  }
  else {
    param_1 = 0.00020833333333333335;
  }
  fVar2 = (float10)FUN_00fdc1f0();
  fVar3 = (float10)param_1 * (float10)3.141592653589793;
  if (param_5 <= 0.0) {
    fVar4 = (float10)fptan(fVar3);
    fVar5 = fVar4 * fVar4;
    fVar3 = fVar3 * (float10)param_8;
  }
  else {
    fVar4 = (float10)fptan((float10)param_8 * fVar3);
    fVar5 = fVar4 * fVar4;
  }
  local_c = (double)fVar5;
  local_14 = (double)fVar4;
  fVar5 = (float10)fptan(fVar3);
  fVar3 = (float10)1;
  fVar4 = fVar3;
  if (param_5 <= 0.0) {
    fVar4 = (fVar3 / SQRT(fVar2)) * (fVar3 / SQRT(fVar2));
    fVar2 = fVar3;
  }
  if (param_7 != '\0') {
    param_5 = param_5 * _DAT_01b321d8 * _DAT_01b321d0;
  }
  fVar6 = (float10)FUN_00fdc1f0();
  fVar10 = (float10)param_3 * (float10)0.5;
  fVar7 = (float10)0.5 * (float10)param_4;
  fVar8 = SQRT(ABS((float10)_DAT_01b321d0 * (float10)param_5));
  fVar3 = (float10)1;
  if ((float10)param_5 <= (float10)0) {
    fVar12 = fVar3 / SQRT(fVar6);
    fVar9 = fVar12 * fVar12;
    fVar11 = fVar8 * fVar10 + (float10)1.4142135623730951;
    fVar8 = fVar8 * fVar7 + (float10)1.4142135623730951;
    fVar7 = fVar3;
    fVar6 = fVar3;
  }
  else {
    fVar11 = fVar8 * fVar7 + (float10)1.4142135623730951;
    fVar8 = fVar8 * fVar10 + (float10)1.4142135623730951;
    fVar7 = SQRT(fVar6);
    fVar12 = fVar3;
    fVar9 = fVar3;
  }
  param_5 = (double)fVar9;
  param_4 = (double)fVar12;
  param_3 = (double)fVar11;
  fVar10 = (float10)param_2;
  fVar12 = fVar6 * fVar10 + ((float10)(double)fVar2 - (float10)(double)fVar2 * fVar10);
  fVar11 = fVar12 * (float10)local_c;
  fVar2 = (fVar8 * fVar10 * fVar7 + (fVar3 - fVar10)) * (float10)local_14;
  fVar6 = fVar2 + fVar10 + fVar11;
  *unaff_ESI = (double)fVar6;
  fVar7 = (float10)local_c * (float10)2.0 * fVar12 + (float10)(double)(fVar10 * (float10)-2.0);
  unaff_ESI[1] = (double)fVar7;
  fVar11 = (fVar10 - fVar2) + fVar11;
  unaff_ESI[2] = (double)fVar11;
  fVar12 = (float10)param_5 * fVar10 + ((float10)(double)fVar4 - (float10)(double)fVar4 * fVar10);
  fVar2 = (float10)(double)(fVar5 * fVar5) * fVar12;
  fVar4 = ((float10)param_3 * fVar10 * (float10)param_4 + (fVar3 - fVar10)) * (float10)(double)fVar5
  ;
  fVar8 = fVar4 + fVar10 + fVar2;
  unaff_ESI[3] = (double)fVar8;
  fVar5 = (float10)(double)(fVar5 * fVar5) * (float10)2.0 * fVar12 +
          (float10)(double)(fVar10 * (float10)-2.0);
  unaff_ESI[4] = (double)fVar5;
  fVar2 = (fVar10 - fVar4) + fVar2;
  unaff_ESI[5] = (double)fVar2;
  if (param_6 == '\0') {
    return;
  }
  fVar4 = fVar3 / (float10)(double)fVar8;
  *unaff_ESI = (double)((float10)(double)fVar6 * fVar4);
  unaff_ESI[1] = (double)(fVar7 * fVar4);
  unaff_ESI[2] = (double)((float10)(double)fVar11 * fVar4);
  unaff_ESI[4] = (double)(fVar5 * fVar4);
  unaff_ESI[5] = (double)(fVar2 * fVar4);
  unaff_ESI[3] = (double)fVar3;
  return;
}

// 01425070  FUN_01425070  size=568  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01425070(double param_1,double param_2,double param_3,double param_4,double param_5,
                 char param_6,char param_7)

{
  float10 fVar1;
  double dVar2;
  int in_EAX;
  double *unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  dVar2 = (double)in_EAX;
  if (in_EAX < 0) {
    dVar2 = dVar2 + 4294967296.0;
  }
  param_1 = param_1 / dVar2;
  if (0.00020833333333333335 <= param_1) {
    if (0.4583333333333333 < param_1) {
      param_1 = 0.4583333333333333;
    }
  }
  else {
    param_1 = 0.00020833333333333335;
  }
  fVar3 = (float10)FUN_00fdc1f0();
  fVar4 = (float10)fptan((float10)1.5707963267948966 - (float10)param_1 * (float10)3.141592653589793
                        );
  fVar1 = (float10)1;
  fVar5 = fVar1;
  if (param_5 <= 0.0) {
    fVar5 = (fVar1 / SQRT(fVar3)) * (fVar1 / SQRT(fVar3));
    fVar3 = fVar1;
  }
  if (param_7 != '\0') {
    param_5 = param_5 * _DAT_01b321d8 * _DAT_01b321d0;
  }
  fVar6 = (float10)FUN_00fdc1f0();
  fVar10 = (float10)param_3 * (float10)0.5;
  fVar7 = (float10)0.5 * (float10)param_4;
  fVar8 = SQRT(ABS((float10)_DAT_01b321d0 * (float10)param_5));
  fVar1 = (float10)1;
  if ((float10)param_5 <= (float10)0) {
    fVar12 = fVar1 / SQRT(fVar6);
    fVar9 = fVar12 * fVar12;
    fVar11 = fVar8 * fVar10 + (float10)1.4142135623730951;
    fVar8 = fVar8 * fVar7 + (float10)1.4142135623730951;
    fVar7 = fVar1;
    fVar6 = fVar1;
  }
  else {
    fVar11 = fVar8 * fVar7 + (float10)1.4142135623730951;
    fVar8 = fVar8 * fVar10 + (float10)1.4142135623730951;
    fVar7 = SQRT(fVar6);
    fVar12 = fVar1;
    fVar9 = fVar1;
  }
  param_5 = (double)fVar9;
  param_4 = (double)fVar12;
  param_3 = (double)fVar11;
  fVar10 = (fVar1 - (float10)param_1) * (float10)param_2;
  if (fVar10 < (float10)0.015) {
    fVar10 = (float10)0.015;
  }
  fVar12 = fVar6 * fVar10 + ((float10)(double)fVar3 - (float10)(double)fVar3 * fVar10);
  fVar3 = (float10)(double)(fVar4 * fVar4);
  fVar11 = fVar12 * fVar3;
  fVar6 = (fVar8 * fVar10 * fVar7 + (fVar1 - fVar10)) * (float10)(double)fVar4;
  fVar7 = fVar6 + fVar10 + fVar11;
  *unaff_ESI = (double)fVar7;
  fVar8 = -(fVar12 * (fVar3 + fVar3) + fVar10 * (float10)-2.0);
  unaff_ESI[1] = (double)fVar8;
  fVar11 = (fVar10 - fVar6) + fVar11;
  unaff_ESI[2] = (double)fVar11;
  fVar12 = (float10)param_5 * fVar10 + ((float10)(double)fVar5 - (float10)(double)fVar5 * fVar10);
  fVar5 = (float10)(double)(fVar4 * fVar4) * fVar12;
  fVar4 = ((float10)param_3 * fVar10 * (float10)param_4 + (fVar1 - fVar10)) * (float10)(double)fVar4
  ;
  fVar6 = fVar4 + fVar10 + fVar5;
  unaff_ESI[3] = (double)fVar6;
  fVar3 = -(fVar12 * (fVar3 + fVar3) + fVar10 * (float10)-2.0);
  unaff_ESI[4] = (double)fVar3;
  fVar5 = (fVar10 - fVar4) + fVar5;
  unaff_ESI[5] = (double)fVar5;
  if (param_6 == '\0') {
    return;
  }
  fVar4 = fVar1 / (float10)(double)fVar6;
  *unaff_ESI = (double)((float10)(double)fVar7 * fVar4);
  unaff_ESI[1] = (double)((float10)(double)fVar8 * fVar4);
  unaff_ESI[2] = (double)((float10)(double)fVar11 * fVar4);
  unaff_ESI[4] = (double)(fVar3 * fVar4);
  unaff_ESI[5] = (double)(fVar5 * fVar4);
  unaff_ESI[3] = (double)fVar1;
  return;
}

// 014252B0  FUN_014252b0  size=405  [run]
void FUN_014252b0(int param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = (float10)1;
  *param_5 = (double)fVar2;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  param_5[5] = 0.0;
  param_5[3] = (double)fVar2;
  param_5[4] = (double)fVar2;
  fVar3 = (float10)param_1;
  if (param_1 < 0) {
    fVar3 = fVar3 + (float10)4294967296.0;
  }
  fVar3 = (float10)param_2 / fVar3;
  param_2 = (double)fVar3;
  fVar4 = (float10)0.00020833333333333335;
  if (fVar4 <= fVar3) {
    fVar4 = (float10)0.4583333333333333;
    if (fVar4 < fVar3) {
      param_2 = (double)fVar4;
      fVar3 = fVar4;
    }
  }
  else {
    param_2 = (double)fVar4;
    fVar3 = fVar4;
  }
  fVar5 = (float10)fptan(fVar3 * (float10)3.141592653589793);
  dVar1 = (double)((fVar2 / (float10)param_3) * (fVar5 + fVar2));
  fVar6 = (float10)FUN_00fdc1f0();
  fVar2 = (float10)1;
  fVar3 = fVar2;
  fVar4 = fVar2;
  if (fVar6 < fVar2) {
    fVar8 = (float10)dVar1;
    fVar6 = fVar2 / fVar6;
    fVar7 = fVar6 * fVar8;
    fVar3 = (fVar2 - ABS((float10)param_4 * (float10)0.08333333333333333)) +
            ((float10)param_2 * fVar7 + (fVar2 - (float10)param_2)) *
            ABS((float10)param_4 * (float10)0.08333333333333333);
    if (fVar3 < fVar2) {
      fVar3 = fVar2;
    }
    if (fVar6 < fVar3) {
      fVar3 = fVar6;
    }
  }
  else {
    fVar7 = (float10)dVar1;
    fVar8 = fVar6 * fVar7;
    fVar4 = (fVar2 - ABS((float10)param_4 * (float10)0.08333333333333333)) +
            ((float10)param_2 * fVar8 + (fVar2 - (float10)param_2)) *
            ABS((float10)param_4 * (float10)0.08333333333333333);
    if (fVar4 < fVar2) {
      fVar4 = fVar2;
    }
    if (fVar6 < fVar4) {
      fVar4 = fVar6;
    }
  }
  fVar8 = fVar8 * (float10)(double)fVar5;
  fVar6 = (float10)(double)(fVar5 * fVar5);
  dVar1 = (double)(fVar6 * (float10)2.0);
  fVar7 = fVar7 * (float10)(double)fVar5;
  fVar5 = fVar2 / (fVar7 + fVar3 + fVar6);
  *param_5 = (double)((fVar8 + fVar4 + fVar6) * fVar5);
  param_5[1] = (double)(((float10)dVar1 - fVar4 * (float10)2.0) * fVar5);
  param_5[2] = (double)(((fVar4 - fVar8) + fVar6) * fVar5);
  param_5[4] = (double)(((float10)dVar1 - (fVar3 + fVar3)) * fVar5);
  param_5[5] = (double)(fVar5 * ((fVar3 - (float10)(double)fVar7) + fVar6));
  param_5[3] = (double)fVar2;
  return;
}

// 01425450  FUN_01425450  size=137  [run]
void FUN_01425450(int param_1,double param_2,double *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)1;
  *param_3 = (double)fVar1;
  fVar2 = (float10)0;
  param_3[1] = (double)fVar2;
  param_3[2] = (double)fVar2;
  param_3[5] = (double)fVar2;
  param_3[3] = (double)fVar1;
  param_3[4] = (double)fVar1;
  fVar3 = (float10)param_1;
  if (param_1 < 0) {
    fVar3 = fVar3 + (float10)4294967296.0;
  }
  fVar3 = (float10)param_2 / fVar3;
  fVar4 = (float10)0.00020833333333333335;
  if (((float10)0.00020833333333333335 <= fVar3) &&
     (fVar4 = fVar3, (float10)0.4583333333333333 < fVar3)) {
    fVar4 = (float10)0.4583333333333333;
  }
  fVar3 = (float10)fptan(fVar4 * (float10)3.141592653589793);
  fVar4 = fVar1 / (fVar3 + fVar1);
  *param_3 = (double)fVar4;
  param_3[1] = (double)((float10)-1.0 * fVar4);
  param_3[2] = (double)(fVar4 * fVar2);
  param_3[4] = (double)((fVar3 - fVar1) * fVar4);
  param_3[5] = (double)(fVar4 * fVar2);
  param_3[3] = (double)fVar1;
  return;
}

// 014254E0  FUN_014254e0  size=156  [run]
void FUN_014254e0(int param_1,double param_2,double param_3,double *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)1;
  *param_4 = (double)fVar1;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[5] = 0.0;
  param_4[3] = (double)fVar1;
  param_4[4] = (double)fVar1;
  fVar2 = (float10)param_1;
  if (param_1 < 0) {
    fVar2 = fVar2 + (float10)4294967296.0;
  }
  fVar2 = (float10)param_2 / fVar2;
  fVar3 = (float10)0.00020833333333333335;
  if (((float10)0.00020833333333333335 <= fVar2) &&
     (fVar3 = fVar2, (float10)0.4583333333333333 < fVar2)) {
    fVar3 = (float10)0.4583333333333333;
  }
  fVar2 = (float10)fptan(fVar3 * (float10)3.141592653589793);
  fVar3 = fVar2 * fVar2;
  fVar4 = fVar1 / (fVar2 * (float10)param_3 + fVar1 + fVar3);
  *param_4 = (double)fVar4;
  param_4[1] = (double)(fVar4 * (float10)-2.0);
  param_4[2] = (double)fVar4;
  param_4[4] = (double)((fVar3 * (float10)2.0 - (float10)2.0) * fVar4);
  param_4[5] = (double)(fVar4 * ((fVar1 - fVar2 * (float10)param_3) + fVar3));
  param_4[3] = (double)fVar1;
  return;
}

// 01425580  FUN_01425580  size=133  [run]
void FUN_01425580(int param_1,double param_2,double *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)1;
  *param_3 = (double)fVar1;
  fVar2 = (float10)0;
  param_3[1] = (double)fVar2;
  param_3[2] = (double)fVar2;
  param_3[5] = (double)fVar2;
  param_3[3] = (double)fVar1;
  param_3[4] = (double)fVar1;
  fVar3 = (float10)param_1;
  if (param_1 < 0) {
    fVar3 = fVar3 + (float10)4294967296.0;
  }
  fVar3 = (float10)param_2 / fVar3;
  fVar4 = (float10)0.00020833333333333335;
  if (((float10)0.00020833333333333335 <= fVar3) &&
     (fVar4 = fVar3, (float10)0.4583333333333333 < fVar3)) {
    fVar4 = (float10)0.4583333333333333;
  }
  fVar3 = (float10)fptan(fVar4 * (float10)3.141592653589793);
  fVar4 = fVar1 / (fVar3 + fVar1);
  *param_3 = (double)(fVar4 * fVar3);
  param_3[1] = (double)(fVar4 * fVar3);
  param_3[2] = (double)(fVar4 * fVar2);
  param_3[4] = (double)((fVar3 - fVar1) * fVar4);
  param_3[5] = (double)(fVar4 * fVar2);
  param_3[3] = (double)fVar1;
  return;
}

// 01425610  FUN_01425610  size=158  [run]
void FUN_01425610(int param_1,double param_2,double param_3,double *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)1;
  *param_4 = (double)fVar1;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[5] = 0.0;
  param_4[3] = (double)fVar1;
  param_4[4] = (double)fVar1;
  fVar2 = (float10)param_1;
  if (param_1 < 0) {
    fVar2 = fVar2 + (float10)4294967296.0;
  }
  fVar2 = (float10)param_2 / fVar2;
  fVar3 = (float10)0.00020833333333333335;
  if (((float10)0.00020833333333333335 <= fVar2) &&
     (fVar3 = fVar2, (float10)0.4583333333333333 < fVar2)) {
    fVar3 = (float10)0.4583333333333333;
  }
  fVar2 = (float10)fptan(fVar3 * (float10)3.141592653589793);
  fVar3 = fVar2 * fVar2;
  fVar5 = fVar3 * (float10)2.0;
  fVar4 = fVar1 / (fVar2 * (float10)param_3 + fVar1 + fVar3);
  *param_4 = (double)(fVar4 * fVar3);
  param_4[1] = (double)(fVar5 * fVar4);
  param_4[2] = (double)(fVar4 * fVar3);
  param_4[4] = (double)((fVar5 - (float10)2.0) * fVar4);
  param_4[5] = (double)(((fVar1 - fVar2 * (float10)param_3) + fVar3) * fVar4);
  param_4[3] = (double)fVar1;
  return;
}

// 014256B0  FUN_014256b0  size=127  [run]
void FUN_014256b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  undefined4 extraout_EDX;
  double local_64;
  double local_5c;
  double local_44;
  double local_34;
  double local_2c;
  double local_14;
  
  FUN_01425450(param_1,param_2,&local_64);
  FUN_01425580(extraout_EDX,param_3,&local_34);
  *param_4 = local_34 * local_64;
  param_4[1] = local_5c * local_34 + local_2c * local_64;
  param_4[2] = local_5c * local_2c;
  param_4[3] = 1.0;
  param_4[4] = local_14 + local_44;
  param_4[5] = local_44 * local_14;
  return;
}

// 01425730  FUN_01425730  size=405  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01425730(int param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = (float10)1;
  *param_5 = (double)fVar2;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  param_5[5] = 0.0;
  param_5[3] = (double)fVar2;
  param_5[4] = (double)fVar2;
  fVar3 = (float10)param_1;
  if (param_1 < 0) {
    fVar3 = fVar3 + (float10)4294967296.0;
  }
  fVar3 = (float10)param_2 / fVar3;
  param_2 = (double)fVar3;
  fVar4 = (float10)0.00020833333333333335;
  if (fVar4 <= fVar3) {
    fVar4 = (float10)0.4583333333333333;
    if (fVar4 < fVar3) {
      param_2 = (double)fVar4;
      fVar3 = fVar4;
    }
  }
  else {
    param_2 = (double)fVar4;
    fVar3 = fVar4;
  }
  fVar5 = (float10)fptan(fVar3 * (float10)3.141592653589793);
  dVar1 = (double)((fVar2 / (float10)param_3) * (fVar5 + fVar2));
  fVar6 = (float10)FUN_00fdc1f0();
  fVar2 = (float10)1;
  fVar3 = fVar2;
  fVar4 = fVar2;
  if (fVar6 < fVar2) {
    fVar8 = (float10)dVar1;
    fVar6 = fVar2 / fVar6;
    fVar7 = fVar6 * fVar8;
    fVar3 = (fVar2 - ABS((float10)_DAT_01b321d0 * (float10)param_4)) +
            ((float10)param_2 * fVar7 + (fVar2 - (float10)param_2)) *
            ABS((float10)_DAT_01b321d0 * (float10)param_4);
    if (fVar3 < fVar2) {
      fVar3 = fVar2;
    }
    if (fVar6 < fVar3) {
      fVar3 = fVar6;
    }
  }
  else {
    fVar7 = (float10)dVar1;
    fVar8 = fVar6 * fVar7;
    fVar4 = (fVar2 - ABS((float10)_DAT_01b321d0 * (float10)param_4)) +
            ((float10)param_2 * fVar8 + (fVar2 - (float10)param_2)) *
            ABS((float10)_DAT_01b321d0 * (float10)param_4);
    if (fVar4 < fVar2) {
      fVar4 = fVar2;
    }
    if (fVar6 < fVar4) {
      fVar4 = fVar6;
    }
  }
  fVar8 = fVar8 * (float10)(double)fVar5;
  fVar6 = (float10)(double)(fVar5 * fVar5);
  dVar1 = (double)(fVar6 * (float10)2.0);
  fVar7 = fVar7 * (float10)(double)fVar5;
  fVar5 = fVar2 / (fVar7 + fVar3 + fVar6);
  *param_5 = (double)((fVar8 + fVar4 + fVar6) * fVar5);
  param_5[1] = (double)(((float10)dVar1 - fVar4 * (float10)2.0) * fVar5);
  param_5[2] = (double)(((fVar4 - fVar8) + fVar6) * fVar5);
  param_5[4] = (double)(((float10)dVar1 - (fVar3 + fVar3)) * fVar5);
  param_5[5] = (double)(fVar5 * ((fVar3 - (float10)(double)fVar7) + fVar6));
  param_5[3] = (double)fVar2;
  return;
}

// 014258D0  FUN_014258d0  size=97  [run]
void FUN_014258d0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0(0,param_5,1,0,0x3ff0000000000000);
  FUN_01424e10(param_2,0x3feb333333333333,(double)(fVar1 * (float10)100.0 * (float10)-0.016));
  return;
}

// 01425940  FUN_01425940  size=89  [run]
void FUN_01425940(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0(0,param_5,1,0);
  FUN_01425070(param_2,0x3feb333333333333,(double)(fVar1 * (float10)100.0 * (float10)-0.016));
  return;
}

// 014259A0  FUN_014259a0  size=46  [run]
void FUN_014259a0(int param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  if (param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_014323a0(dVar1 * param_2 * 0.001);
  return;
}

// 014259D0  FUN_014259d0  size=46  [run]
void FUN_014259d0(int param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  if (param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_014323a0(dVar1 * param_2 * 0.001);
  return;
}

// 01425A00  FUN_01425a00  size=36  [run]
void FUN_01425a00(void)

{
  FUN_00fdbc60();
  return;
}

// 01425A50  FUN_01425a50  size=49514  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01425a50(undefined4 param_1,undefined4 param_2,double param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  case 0:
    FUN_01425450();
    FUN_014258d0(param_1,param_3 * 237.0,_DAT_01b321e0 * 12.0,0x4011333333333333,param_5);
    FUN_01425730(param_1,param_3 * 336.0,0x401b333333333333,0x4010666666666666,param_6);
    FUN_01425730(param_1,param_3 * 595.0,0x402999999999999a,0x4021333333333333,param_7);
    FUN_01425730(param_1,param_3 * 868.0,0x402299999999999a,0xc01d333333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 1:
    FUN_01425450();
    FUN_014258d0(param_1,0x4095180000000000,_DAT_01b321e0 + _DAT_01b321e0,0xc02f000000000000,param_5
                );
    FUN_01425730(param_1,param_3 * 990.0,0x4030000000000000,0xc008000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1100.0,0x4030000000000000,0x4014000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2500.0,0x4030000000000000,0x3ff8000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 2:
    FUN_01425450();
    FUN_014258d0(param_1,0x4079000000000000,_DAT_01b321e0 * 10.5,0xc01a000000000000,param_5);
    FUN_01425730(param_1,param_3 * 625.0,0x4023666666666666,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1640.0,0x4025000000000000,0x4018cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 3590.0,0x401d99999999999a,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 3:
    FUN_014254e0();
    FUN_014258d0(param_1,0x4063d9999999999a,_DAT_01b321e0 * 11.0,0x401d333333333333,param_5);
    FUN_01425730(param_1,param_3 * 224.9,0x4022666666666666,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 692.0,0x4024000000000000,0x4024000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1680.0,0x400599999999999a,0x4020cccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 4:
    FUN_014254e0();
    FUN_01425730(param_1,0x4054000000000000,0x4030000000000000,0xc029333333333333,param_5);
    FUN_01425730(param_1,param_3 * 250.0,0x4014000000000000,0x4018000000000000,param_6);
    FUN_01425730(param_1,param_3 * 400.0,0x4014000000000000,0x4014000000000000,param_7);
    FUN_01425730(param_1,0x408c200000000000,0x4010000000000000,0xc014000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 5:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 290.0,0x4014000000000000,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 780.0,0x4028000000000000,0xc008000000000000,param_6);
    FUN_01425730(param_1,param_3 * 999.0,0x4010000000000000,0x4012000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1650.0,0x4030000000000000,0x402199999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 6:
    FUN_014254e0();
    FUN_014258d0(param_1,0x4047c00000000000,_DAT_01b321e0 * 16.0,0xc02b333333333333,param_5);
    FUN_01425730(param_1,param_3 * 212.9,0x401999999999999a,0x4008000000000000,param_6);
    FUN_01425730(param_1,param_3 * 439.4,0x4016cccccccccccd,0x4011333333333333,param_7);
    FUN_01425730(param_1,param_3 * 1810.0,0x4027333333333333,0x4021333333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 7:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 192.3,0x401c000000000000,0x4032000000000000,param_5);
    FUN_01425730(param_1,0x408479999999999a,0x401999999999999a,0x4022666666666666,param_6);
    FUN_01425730(param_1,0x409fe00000000000,0x4016cccccccccccd,0x402199999999999a,param_7);
    FUN_01425730(param_1,0x40ad9c0000000000,0x4027333333333333,0x4021333333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 8:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 108.0,0x4030000000000000,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 321.0,0x402e000000000000,0x4028000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff4cccccccccccd,0x401b99999999999a,param_7);
    FUN_01425730(param_1,param_3 * 4850.0,0x3ff999999999999a,0x4021333333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 9:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 120.6,0x402099999999999a,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 265.2,0x402a666666666666,0xc02fcccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 503.9,0x4030000000000000,0xc0304ccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 2190.0,0x4023000000000000,0xc02499999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 10:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 81.0,0x4030000000000000,0x4030b5c28f5c28f6,param_5);
    FUN_01425730(param_1,param_3 * 243.0,0x4030000000000000,0x4029b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 405.0,0x4030000000000000,0x402947ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 567.0,0x4030000000000000,0x402423d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 729.0,0x4030000000000000,0x4022000000000000,param_9);
    FUN_01425610();
    return;
  case 0xb:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 80.4,0x4003333333333333,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 224.9,0x402a000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 353.1,0x4030000000000000,0x4026cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 924.3,0x4030000000000000,0xc02d99999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0xc:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 484.0,0x4012666666666666,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 925.0,0x4030000000000000,0x402c000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1270.0,0x401ecccccccccccd,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1700.0,0x4030000000000000,0x402c000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0xd:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 161.2,0x4000000000000000,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 633.8,0x3ffe666666666666,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 803.1,0x4030000000000000,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1340.0,0x4030000000000000,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0xe:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 156.8,0x4015333333333333,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 587.1,0x4020666666666666,0xc0304ccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 825.4,0x4030000000000000,0x402ecccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 1040.0,0x4030000000000000,0xc02d99999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0xf:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 170.0,0x4000000000000000,0x4026cccccccccccd,param_5);
    FUN_01425730(param_1,param_3 * 498.1,0x4000000000000000,0xc018000000000000,param_6);
    FUN_01425730(param_1,param_3 * 921.1,0x4030000000000000,0x4023333333333333,param_7);
    FUN_01425730(param_1,param_3 * 1140.0,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x10:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 120.0,0x4000000000000000,0x4004000000000000,param_5);
    FUN_01425730(param_1,0x4076800000000000,0x4008000000000000,0xc00c000000000000,param_6);
    FUN_01425730(param_1,param_3 * 480.0,0x4014000000000000,0x3ff8000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1500.0,0x3ff0000000000000,0x3ff8000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x11:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 120.0,0x4020000000000000,0,param_5);
    FUN_01425730(param_1,param_3 * 240.0,0x4020000000000000,0,param_6);
    FUN_01425730(param_1,param_3 * 360.0,0x4020000000000000,0,param_7);
    FUN_01425730(param_1,param_3 * 480.0,0x4020000000000000,0,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x12:
    FUN_014254e0();
    FUN_01425730(param_1,0x4056800000000000,0x3ff0000000000000,0xc032800000000000,param_5);
    FUN_01425730(param_1,param_3 * 254.0,0x401c000000000000,0x401799999999999a,param_6);
    FUN_01425730(param_1,param_3 * 760.0,0x4010cccccccccccd,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2190.0,0x401f333333333333,0x4031cccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x13:
    FUN_01425450();
    FUN_014258d0(param_1,0x4079000000000000,_DAT_01b321e0 * 0.4,0x4023333333333333,param_5);
    FUN_01425730(param_1,param_3 * 511.9,0x4030000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 648.5,0x4030000000000000,0x4026cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 2070.0,0x4007333333333333,0xc02499999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x14:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 163.2,0x3ff8000000000000,0x402f333333333333,param_5);
    FUN_01425730(param_1,param_3 * 348.8,0x4023cccccccccccd,0xc030800000000000,param_6);
    FUN_01425730(param_1,param_3 * 648.5,0x4030000000000000,0x4026cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 1580.0,0x401999999999999a,0xc02499999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x15:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 43.43,0x40035c28f5c28f5c,0x4031ca3d70a3d70a,param_5);
    FUN_01425730(param_1,param_3 * 1174.24,0x4011eb851eb851ec,0,param_6);
    FUN_01425730(param_1,param_3 * 2858.28,0x40227ae147ae147b,0,param_7);
    FUN_01425730(param_1,param_3 * 6148.1,0x4030000000000000,0,param_8);
    FUN_01425940(param_1,0x407bb40000000000,_DAT_01b321e0 * 16.0,0xc02a051eb851eb85,param_9);
    FUN_01425610();
    return;
  case 0x16:
    FUN_014254e0();
    FUN_01425730(param_1,0x406ec0a3d70a3d71,0x4012a3d70a3d70a4,0xc02edc28f5c28f5c,param_5);
    FUN_01425730(param_1,0x4087295c28f5c28f,0x4028000000000000,0xc01128f5c28f5c29,param_6);
    FUN_01425730(param_1,param_3 * 2539.58,0x401eeb851eb851ec,0x4029b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 4225.42,0x40260a3d70a3d70a,0x4028dc28f5c28f5c,param_8);
    FUN_01425730(param_1,param_3 * 9729.61,0x4000000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x17:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 424.0,0x4010666666666666,0x4029cccccccccccd,param_5);
    FUN_01425730(param_1,param_3 * 1310.0,0x4027000000000000,0x4028000000000000,param_6);
    FUN_01425730(param_1,param_3 * 2920.0,0x402899999999999a,0x40304ccccccccccd,param_7);
    FUN_01425940(param_1,0x40c01d0000000000,_DAT_01b321e0,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x18:
    FUN_014254e0();
    FUN_014258d0(param_1,0x407a800000000000,_DAT_01b321e0 * 4.1,0xc02ccccccccccccd,param_5);
    FUN_01425730(param_1,param_3 * 474.0,0x401399999999999a,0x402d333333333333,param_6);
    FUN_01425730(param_1,param_3 * 1360.0,0x4027666666666666,0x402d99999999999a,param_7);
    FUN_01425730(param_1,param_3 * 2980.0,0x402e000000000000,0x4025cccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x19:
    FUN_01425450();
    FUN_01425730(param_1,0x405bf33333333333,0x400999999999999a,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 400.0,0x400d99999999999a,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1750.0,0x4030000000000000,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 3200.0,0x4030000000000000,0x4027333333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x1a:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 475.0,0x400ccccccccccccd,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 1070.0,0x4030000000000000,0x4018000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1430.0,0x4030000000000000,0x4020cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 5710.0,0x4030000000000000,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x1b:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 285.39,0x400b851eb851eb85,0x4030b5c28f5c28f6,param_5);
    FUN_01425730(param_1,0x407d5b3333333333,0x3ff23d70a3d70a3d,0xc02edc28f5c28f5c,param_6);
    FUN_01425730(param_1,0x4083aa8f5c28f5c3,0x4027051eb851eb85,0x4032000000000000,param_7);
    FUN_01425730(param_1,0x4079000000000000,0x4030000000000000,0x402947ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 1305.08,0x401c51eb851eb852,0x402bdc28f5c28f5c,param_9);
    FUN_01425610();
    return;
  case 0x1c:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 200.9,0x400c000000000000,0x4020cccccccccccd,param_5);
    FUN_01425730(param_1,param_3 * 400.0,0x400f333333333333,0xc012cccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 610.5,0x4024cccccccccccd,0x4024333333333333,param_7);
    FUN_01425730(param_1,param_3 * 1620.0,0x4004000000000000,0x401399999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x1d:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 163.9,0x4016000000000000,0xc01c000000000000,param_5);
    FUN_01425730(param_1,param_3 * 298.0,0x4028000000000000,0xc02d333333333333,param_6);
    FUN_01425730(param_1,param_3 * 554.7,0x4024000000000000,0x402a333333333333,param_7);
    FUN_01425730(param_1,param_3 * 861.8,0x4022000000000000,0x401ecccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x1e:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 346.32,0x401c70a3d70a3d71,0x402cb851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 626.35,0x4023cccccccccccd,0x402423d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 3831.73,0x400428f5c28f5c29,0x4024947ae147ae14,param_8);
    FUN_01425730(param_1,param_3 * 2015.77,0x4011333333333333,0xc025000000000000,param_9);
    FUN_01425580();
    return;
  case 0x1f:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 169.0,0x400a666666666666,0xc014666666666666,param_5);
    FUN_01425730(param_1,param_3 * 229.0,0x4014000000000000,0x402e333333333333,param_6);
    FUN_01425730(param_1,param_3 * 1860.0,0x4012cccccccccccd,0xc018000000000000,param_7);
    uVar3 = 0x4023333333333333;
    uVar2 = 0x4030000000000000;
    dVar1 = param_3 * 1320.0;
    goto LAB_01427c6b;
  case 0x20:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 258.3,0x402f666666666666,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 290.0,0x4028000000000000,0x4029cccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 439.4,0x4030000000000000,0xc02d333333333333,param_7);
    FUN_01425730(param_1,param_3 * 3030.0,0x402f99999999999a,0xc022666666666666,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x21:
    FUN_014254e0();
    FUN_014258d0(param_1,0x407181999999999a,_DAT_01b321e0 * 0.4,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 240.0,0x4018000000000000,0xc018000000000000,param_6);
    FUN_01425730(param_1,param_3 * 946.7,0x4030000000000000,0x4030666666666666,param_7);
    FUN_01425730(param_1,param_3 * 3000.0,0x401ccccccccccccd,0x4030b33333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x22:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 308.8,0x4020cccccccccccd,0x401c000000000000,param_5);
    FUN_01425730(param_1,param_3 * 617.9,0x401a000000000000,0x402ccccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 896.2,0x4030000000000000,0x4025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2730.0,0x4008000000000000,0x4020333333333333,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x23:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 440.0,0x4023333333333333,0x402b000000000000,param_5);
    FUN_01425730(param_1,param_3 * 1910.0,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 3530.0,0x402699999999999a,0x4032000000000000,param_7);
    FUN_01425730(param_1,0x40caf40000000000,0x4028000000000000,0xc028000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x24:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 922.0,0x4023333333333333,0xc023333333333333,param_5);
    FUN_01425730(param_1,0x4099500000000000,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 3730.0,0x402699999999999a,0x4032000000000000,param_7);
    FUN_01425730(param_1,0x40b7c00000000000,0x4028000000000000,0xc024cccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x25:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 116.5,0x4018000000000000,0xc033000000000000,param_5);
    FUN_01425730(param_1,param_3 * 218.9,0x4030000000000000,0xc022000000000000,param_6);
    FUN_01425730(param_1,param_3 * 290.0,0x402f666666666666,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2135.0,0x4015333333333333,0x402fcccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x26:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 861.92,0x4028000000000000,0x4012000000000000,param_5);
    FUN_01425730(param_1,param_3 * 2188.54,0x4030000000000000,0x400d1eb851eb851f,param_6);
    FUN_01425730(param_1,param_3 * 3433.32,0x4030000000000000,0x401d28f5c28f5c29,param_7);
    FUN_01425730(param_1,param_3 * 5712.44,0x4030000000000000,0xc02647ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 12115.28,0x401a000000000000,0x401a8f5c28f5c28f,param_9);
    goto LAB_014284e9;
  case 0x27:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 397.19,0x402c0f5c28f5c28f,0x402723d70a3d70a4,param_5);
    FUN_01425730(param_1,param_3 * 1765.29,0x4022e66666666666,0x402a23d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 2085.01,0x4030000000000000,0x40304a3d70a3d70a,param_7);
    FUN_01425730(param_1,param_3 * 3684.22,0x4030000000000000,0xc03011eb851eb852,param_8);
    FUN_01425730(param_1,param_3 * 9653.49,0x4030000000000000,0x402b6b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x28:
    FUN_01425450();
    FUN_014258d0(param_1,0x405bcccccccccccd,_DAT_01b321e0 + _DAT_01b321e0,0xc02f333333333333,param_5
                );
    FUN_01425730(param_1,param_3 * 272.0,0x401399999999999a,0x4017333333333333,param_6);
    FUN_01425730(param_1,param_3 * 562.3,0x4016000000000000,0xc02a333333333333,param_7);
    FUN_01425730(param_1,param_3 * 1810.0,0x401799999999999a,0xc023cccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x29:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 4000.0,0x4030000000000000,0,param_5);
    FUN_01425730(param_1,0x406e870a3d70a3d7,0x4012b851eb851eb8,0x4032000000000000,param_6);
    FUN_01425730(param_1,0x409a4da3d70a3d71,0x3ffc7ae147ae147b,0xc025dc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 4000.0,0x4030000000000000,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 5108.97,0x4030000000000000,0x402d23d70a3d70a4,param_9);
    FUN_01425610();
    return;
  case 0x2a:
    FUN_014254e0();
    FUN_01425730(param_1,0x4073700000000000,0x402e9eb851eb851f,0x402a947ae147ae14,param_5);
    FUN_01425730(param_1,0x407dfe6666666666,0x4030000000000000,0x4025cccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 792.27,0x401f000000000000,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2040.0,0x402ac7ae147ae148,0x402b000000000000,param_8);
    FUN_01425730(param_1,param_3 * 4480.75,0x402ad70a3d70a3d7,0x402a23d70a3d70a4,param_9);
    FUN_01425610();
    return;
  case 0x2b:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 306.5,0x3fd999999999999a,0x4025cccccccccccd,param_5);
    FUN_01425730(param_1,param_3 * 1770.0,0x400d99999999999a,0xc029333333333333,param_6);
    FUN_01425730(param_1,param_3 * 6630.0,0x402199999999999a,0xc032000000000000,param_7);
    FUN_01425610();
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x2c:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 80.0,0x401f99999999999a,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 160.0,0x402e000000000000,0x403019999999999a,param_6);
    FUN_01425730(param_1,param_3 * 240.0,0x4030000000000000,0x4032000000000000,param_7);
    uVar3 = 0x402a333333333333;
    uVar2 = 0x400ccccccccccccd;
    dVar1 = param_3 * 1270.0;
LAB_01427c6b:
    FUN_01425730(param_1,dVar1,uVar2,uVar3,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x2d:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 42.1,0x400b333333333333,0x4030e66666666666,param_5);
    FUN_01425730(param_1,param_3 * 175.7,0x402ecccccccccccd,0x40304ccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 179.4,0x401a666666666666,0x4023cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 1710.0,0x4002666666666666,0xc02499999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x2e:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 130.0,0x4012666666666666,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 311.3,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 165.0,0x4028000000000000,0x4027cccccccccccd,param_7);
    FUN_01425730(param_1,param_3 * 1190.0,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x2f:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 300.0,0x4026000000000000,0xc028666666666666,param_5);
    FUN_01425730(param_1,param_3 * 727.0,0x3fd999999999999a,0xc028cccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 3890.0,0x4015333333333333,0x402a99999999999a,param_7);
    FUN_01425730(param_1,param_3 * 8930.0,0x4025000000000000,0x401599999999999a,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x30:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 4000.0,0x401a000000000000,0x4023b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 1133.55,0x401c8f5c28f5c28f,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1146.9,0x3ff7851eb851eb85,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4859.41,0x402351eb851eb852,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 8961.5,0x4030000000000000,0xc0226b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x31:
    FUN_01425450();
    FUN_01425730(param_1,0x406defae147ae148,0x3fd999999999999a,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 1737.78,0x4021947ae147ae14,0x40315c28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 2993.58,0x402f4ccccccccccd,0x402d23d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 9323.87,0x401dae147ae147ae,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 3101.03,0x402b70a3d70a3d71,0x4029b851eb851eb8,param_9);
    FUN_01425580();
    return;
  case 0x32:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 515.96,0x4003851eb851eb85,0xc031ca3d70a3d70a,param_5);
    FUN_01425730(param_1,param_3 * 2878.74,0x4006147ae147ae14,0xc01b70a3d70a3d71,param_6);
    FUN_01425730(param_1,param_3 * 5179.47,0x4030000000000000,0xc0286b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 6202.06,0x4030000000000000,0x401fb851eb851eb8,param_8);
    uVar3 = 0xc019b851eb851eb8;
    uVar2 = 0x4030000000000000;
    param_3 = param_3 * 9466.52;
    goto LAB_01429549;
  case 0x33:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 831.3,0x4000000000000000,0x401570a3d70a3d71,param_5);
    FUN_01425730(param_1,param_3 * 1230.71,0x4024c28f5c28f5c3,0xc022000000000000,param_6);
    FUN_01425730(param_1,param_3 * 3831.19,0x402923d70a3d70a4,0xc032000000000000,param_7);
    FUN_01425730(param_1,0x40b6ef3333333333,0x402c3d70a3d70a3d,0x402a23d70a3d70a4,param_8);
    FUN_01425730(param_1,0x40a623c28f5c28f6,0x4030000000000000,0x40256b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x34:
    FUN_014254e0();
    FUN_01425730(param_1,0x40a7c1f0a3d70a3d,0x4026851eb851eb85,0x4020b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 935.64,0x400947ae147ae148,0x401647ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 1211.53,0x4000000000000000,0xc01128f5c28f5c29,param_7);
    FUN_01425730(param_1,param_3 * 3535.81,0x4030000000000000,0xc02fb851eb851eb8,param_8);
    FUN_01425730(param_1,0x40b20835c28f5c29,0x4030000000000000,0x402347ae147ae148,param_9);
    FUN_01425610();
    return;
  case 0x35:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 3212.34,0x401a99999999999a,0xc00651eb851eb852,param_5);
    FUN_01425730(param_1,param_3 * 4352.1,0x4017d70a3d70a3d7,0x4024947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 7530.09,0x402f4ccccccccccd,0x4022000000000000,param_7);
    FUN_01425730(param_1,param_3 * 9448.32,0x4030000000000000,0xc02123d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 10857.11,0x4030000000000000,0x4027947ae147ae14,param_9);
    FUN_01425580();
    return;
  case 0x36:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 1622.29,0x401d0a3d70a3d70a,0x4024947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 4893.62,0x401b333333333333,0xc02f47ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 3930.09,0x402c0f5c28f5c28f,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x37:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 484.61,0x4017d70a3d70a3d7,0x402c47ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 1520.49,0x401170a3d70a3d71,0x402423d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 2600.86,0x401bcccccccccccd,0x402a947ae147ae14,param_7);
    FUN_01425730(param_1,param_3 * 4325.49,0x40208f5c28f5c28f,0x4032000000000000,param_8);
    FUN_01425610();
    FUN_01425580();
    return;
  case 0x38:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 183.1,0x4020eb851eb851ec,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 627.52,0x4007333333333333,0x401728f5c28f5c29,param_6);
    FUN_01425730(param_1,param_3 * 1761.36,0x4030000000000000,0xc02d947ae147ae14,param_7);
    FUN_01425730(param_1,param_3 * 4780.82,0x4030000000000000,0x402723d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 6576.85,0x4030000000000000,0x402947ae147ae148,param_9);
    FUN_01425610();
    return;
  case 0x39:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 60.0,0x40208f5c28f5c28f,0xc018d70a3d70a3d7,param_5);
    FUN_01425730(param_1,param_3 * 209.21,0x400ca3d70a3d70a4,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 393.77,0x4010c28f5c28f5c3,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1000.0,0x4010c28f5c28f5c3,0x402e000000000000,param_8);
    FUN_01425730(param_1,param_3 * 4816.96,0x4030000000000000,0x4032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x3a:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 57.12,0x400f5c28f5c28f5c,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 348.77,0x4001c28f5c28f5c3,0x4020b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 2231.77,0x4014e147ae147ae1,0x4027947ae147ae14,param_7);
    FUN_01425730(param_1,param_3 * 4660.21,0x4030000000000000,0xc01b70a3d70a3d71,param_8);
    FUN_01425730(param_1,param_3 * 13257.41,0x4030000000000000,0x4028000000000000,param_9);
    FUN_01425580();
    return;
  case 0x3b:
    FUN_014254e0();
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 4300.0,0x4030000000000000,0x402e000000000000,param_6);
    FUN_01425730(param_1,param_3 * 5526.33,0x4030000000000000,0xc025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 9941.65,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x3c:
    FUN_014254e0();
    FUN_01425730(param_1,0x404c8f5c28f5c28f,0x3fd999999999999a,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 223.18,0x400af5c28f5c28f6,0xc0226b851eb851ec,param_6);
    FUN_01425730(param_1,param_3 * 1000.0,0x3fd999999999999a,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5000.0,0x4020eb851eb851ec,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 8000.0,0x4030000000000000,0xc032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x3d:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 57.12,0x400f5c28f5c28f5c,0,param_5);
    FUN_01425730(param_1,param_3 * 113.36,0x3ff6e147ae147ae1,0x4026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 346.04,0x4009333333333333,0x402d23d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 5802.88,0x4030000000000000,0x4012d70a3d70a3d7,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x3e:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 339.34,0x40278a3d70a3d70a,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 697.48,0x40125c28f5c28f5c,0x4026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 2316.84,0x4030000000000000,0xc0148f5c28f5c28f,param_7);
    FUN_01425730(param_1,param_3 * 3720.43,0x40278a3d70a3d70a,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 9977.2,0x40278a3d70a3d70a,0xc032000000000000,param_9);
    goto LAB_0142a39d;
  case 0x3f:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 2651.48,0x4024c28f5c28f5c3,0x401c47ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 255.17,0x40150a3d70a3d70a,0x400b70a3d70a3d71,param_6);
    FUN_01425730(param_1,0x408e67ae147ae148,0x3ff170a3d70a3d71,0xc028dc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 4111.16,0x401e851eb851eb85,0x400ee147ae147ae1,param_8);
    FUN_01425730(param_1,param_3 * 8961.5,0x40157ae147ae147b,0x4012000000000000,param_9);
    FUN_01425610();
    return;
  case 0x40:
    FUN_014254e0();
    FUN_014258d0(param_1,param_3 * 40.0,_DAT_01b321e0 + _DAT_01b321e0,0x401d28f5c28f5c29,param_5);
    FUN_01425730(param_1,param_3 * 885.72,0x40113d70a3d70a3d,0xc013b851eb851eb8,param_6);
    FUN_01425730(param_1,0x408f400000000000,0x3fd999999999999a,0xc028000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2442.16,0x401a333333333333,0x4018000000000000,param_8);
    FUN_01425730(param_1,param_3 * 4079.0,0x4017d70a3d70a3d7,0x401647ae147ae148,param_9);
    FUN_01425610();
    return;
  case 0x41:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 120.69,0x402df5c28f5c28f6,0xc028000000000000,param_6);
    FUN_01425730(param_1,param_3 * 582.53,0x402df5c28f5c28f6,0xc01647ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 4125.69,0x4030000000000000,0x401128f5c28f5c29,param_8);
    FUN_01425730(param_1,param_3 * 7057.47,0x401a99999999999a,0x400d1eb851eb851f,param_9);
    FUN_01425610();
    return;
  case 0x42:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 91.75,0x4014e147ae147ae1,0x402047ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 348.77,0x401b5c28f5c28f5c,0x402947ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 275.73,0x40258f5c28f5c28f,0x4024947ae147ae14,param_7);
    FUN_01425730(param_1,0x40989c3d70a3d70a,0x3ff599999999999a,0xc02947ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 8254.04,0x40204ccccccccccd,0x4022dc28f5c28f5c,param_9);
    FUN_01425580();
    return;
  case 0x43:
    FUN_014254e0();
    FUN_01425730(param_1,0x405d5ae147ae147b,0x3ff0f5c28f5c28f6,0xc01c47ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 259.49,0x401047ae147ae148,0x4032000000000000,param_6);
    FUN_01425730(param_1,0x40733ae147ae147b,0x3fd999999999999a,0xc02bdc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 5407.7,0x4030000000000000,0x3ff8000000000000,param_8);
    FUN_01425730(param_1,param_3 * 8254.04,0x4030000000000000,0x4018000000000000,param_9);
    goto LAB_0142a9af;
  case 0x44:
    FUN_014254e0();
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 84.51,0x402df5c28f5c28f6,0xc013b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 480.82,0x4030000000000000,0xc022000000000000,param_7);
    FUN_01425730(param_1,param_3 * 3187.21,0x4030000000000000,0x401eeb851eb851ec,param_8);
    FUN_01425730(param_1,param_3 * 4682.28,0x4030000000000000,0x401570a3d70a3d71,param_9);
    FUN_01425610();
    return;
  case 0x45:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 311.3,0x4030000000000000,0x402e000000000000,param_5);
    FUN_01425730(param_1,param_3 * 500.0,0x4030000000000000,0xc022000000000000,param_6);
    FUN_01425730(param_1,param_3 * 2700.0,0x4030000000000000,0x4025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4328.96,0x4020333333333333,0x402cb851eb851eb8,param_8);
    FUN_01425730(param_1,param_3 * 10000.0,0x4030000000000000,0,param_9);
    FUN_01425580();
    return;
  case 0x46:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 145.07,0x3ff5eb851eb851ec,0x4022000000000000,param_5);
    FUN_01425730(param_1,param_3 * 719.63,0x40227ae147ae147b,0x4026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 556.99,0x3feeb851eb851eb8,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5183.97,0x3fd999999999999a,0xc02947ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 4275.16,0x4020333333333333,0x4032000000000000,param_9);
    break;
  case 0x47:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 1387.96,0x4022147ae147ae14,0x4025000000000000,param_5);
    FUN_01425730(param_1,param_3 * 224.94,0x3ff599999999999a,0x4030ee147ae147ae,param_6);
    FUN_01425730(param_1,param_3 * 291.26,0x3ffc000000000000,0x402b000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5161.48,0x4030000000000000,0xc032000000000000,param_8);
    uVar3 = 0x4032000000000000;
    uVar2 = 0x40242e147ae147ae;
    param_3 = param_3 * 7196.86;
LAB_01429549:
    FUN_01425730(param_1,param_3,uVar2,uVar3,param_9);
    FUN_01425580();
    return;
  case 0x48:
    FUN_014254e0();
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 475.23,0x4030000000000000,0xc028dc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 632.46,0x4030000000000000,0xc02e6b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 2778.99,0x40138f5c28f5c28f,0xc020b851eb851eb8,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x49:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 46.24,0x3ff199999999999a,0x400b70a3d70a3d71,param_5);
    FUN_01425730(param_1,param_3 * 133.62,0x3ff70a3d70a3d70a,0x4018000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_7);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x4a:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 106.68,0x401999999999999a,0x400651eb851eb852,param_5);
    FUN_01425730(param_1,param_3 * 536.34,0x401a000000000000,0x4022dc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 221.43,0x401651eb851eb852,0x4027947ae147ae14,param_7);
    FUN_01425730(param_1,0x409ab83d70a3d70a,0x4010c28f5c28f5c3,0xc02047ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 6275.08,0x400c51eb851eb852,0x4022000000000000,param_9);
    FUN_01425580();
    return;
  case 0x4b:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 106.68,0x401999999999999a,0x4019b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 443.91,0x4000000000000000,0x401fb851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 221.43,0x401651eb851eb852,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1710.06,0x4010c28f5c28f5c3,0xc027947ae147ae14,param_8);
    FUN_01425730(param_1,param_3 * 6275.08,0x400c51eb851eb852,0x401e000000000000,param_9);
    FUN_01425580();
    return;
  case 0x4c:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 93.02,0x4006b851eb851eb8,0x4019b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 443.91,0x401b5c28f5c28f5c,0x401a8f5c28f5c28f,param_6);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_7);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x4d:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 92.76,0x3ff87ae147ae147b,0x401728f5c28f5c29,param_5);
    FUN_01425730(param_1,param_3 * 3816.47,0x3ffe666666666666,0x401728f5c28f5c29,param_6);
    FUN_01425730(param_1,param_3 * 1000.0,0x3fd999999999999a,0xc02b000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2188.54,0x401c99999999999a,0xc02d23d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 4565.87,0x4018000000000000,0x4022d1eb851eb852,param_9);
    goto LAB_01430b1c;
  case 0x4e:
    FUN_014254e0();
    FUN_01425730(param_1,0x40565147ae147ae1,0x3ffa8f5c28f5c28f,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 137.63,0x3ffd99999999999a,0xc032000000000000,param_6);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x4f:
    FUN_01425450();
    FUN_01425730(param_1,0x4069e5c28f5c28f6,0x4015d70a3d70a3d7,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 4031.54,0x4030000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 4811.66,0x4030000000000000,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5521.95,0x4026000000000000,0xc021947ae147ae14,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x50:
    FUN_01425730(param_1,0x405e847ae147ae14,0x3ffbd70a3d70a3d7,0xc032000000000000,param_4);
    FUN_01425730(param_1,param_3 * 188.6,0x4006147ae147ae14,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 1437.78,0x3ff3333333333333,0x40304a3d70a3d70a,param_6);
    FUN_01425730(param_1,param_3 * 1974.23,0x401dae147ae147ae,0x401647ae147ae148,param_7);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x51:
    FUN_014254e0();
    FUN_01425730(param_1,0x4060d570a3d70a3d,0x40100a3d70a3d70a,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 479.04,0x400f5c28f5c28f5c,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 765.39,0x40100a3d70a3d70a,0xc025000000000000,param_7);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x52:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 306.49,0x40028f5c28f5c28f,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 630.11,0x3ffbd70a3d70a3d7,0x4018000000000000,param_6);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    goto LAB_0142baae;
  case 0x53:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 620.21,0x40100a3d70a3d70a,0x4018d70a3d70a3d7,param_6);
    FUN_01425730(param_1,0x40af400000000000,0x4020eb851eb851ec,0xc032000000000000,param_7);
    FUN_01425730(param_1,0x40b5b5fae147ae14,0x4010666666666666,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x54:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 306.49,0x40028f5c28f5c28f,0x4030b5c28f5c28f6,param_5);
    FUN_01425730(param_1,param_3 * 667.45,0x3ffbd70a3d70a3d7,0x401c47ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 1974.23,0x400d5c28f5c28f5c,0x401647ae147ae148,param_7);
    FUN_01425610();
    FUN_01425610();
LAB_0142baae:
    FUN_01425610();
    return;
  case 0x55:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 1060.0,0x401199999999999a,0xc020cccccccccccd,param_5);
    FUN_01425730(param_1,param_3 * 4924.22,0x4030000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 4234.48,0x4030000000000000,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5802.88,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x56:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 2627.82,0x4014000000000000,0x402f47ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 3146.15,0x4020333333333333,0x402e000000000000,param_6);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x57:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 141.15,0x4018851eb851eb85,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 2755.21,0x400c28f5c28f5c29,0x400ccccccccccccd,param_6);
    FUN_01425940(param_1,0x40bce4dc28f5c28f,_DAT_01b321e0 * 16.0,0xc032000000000000,param_7);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x58:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 142.26,0x4009333333333333,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 2559.6,0x400d5c28f5c28f5c,0x402723d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 3863.23,0x4030000000000000,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5370.08,0x40155c28f5c28f5c,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425580();
    return;
  case 0x59:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 142.26,0x4009333333333333,0xc022dc28f5c28f5c,param_5);
    FUN_01425730(param_1,param_3 * 1400.45,0x40185c28f5c28f5c,0x402347ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 3863.23,0x4030000000000000,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5672.71,0x401c666666666666,0xc02fb851eb851eb8,param_8);
    FUN_01425610();
    FUN_01425580();
    return;
  case 0x5a:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 138.42,0x4030000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 4172.44,0x4017d70a3d70a3d7,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5964.15,0x40051eb851eb851f,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x5b:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 3786.61,0x4030000000000000,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 4377.09,0x4030000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 5224.07,0x40260a3d70a3d70a,0xc0286b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 6690.0,0x4026000000000000,0xc02edc28f5c28f5c,param_8);
    FUN_01425610();
    FUN_01425580();
    return;
  case 0x5c:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 110.29,0x4030000000000000,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 733.09,0x3ff6666666666666,0x401eae147ae147ae,param_6);
    FUN_01425940(param_1,0x40bce4dc28f5c28f,_DAT_01b321e0 * 16.0,0xc032000000000000,param_7);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x5d:
    FUN_014254e0();
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,0x407cac28f5c28f5c,0x3ffb851eb851eb85,0x401ed70a3d70a3d7,param_7);
    FUN_01425610();
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x5e:
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
    FUN_01425730(param_1,0x4054000000000000,0x4030000000000000,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 250.0,0x40100a3d70a3d70a,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 250.0,0x40100a3d70a3d70a,0x40226b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 5000.0,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x5f:
    FUN_01425450();
    FUN_014258d0(param_1,0x4081d9eb851eb852,_DAT_01b321e0 * 16.0,0xc01570a3d70a3d71,param_5);
    FUN_01425730(param_1,param_3 * 208.81,0x4009333333333333,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 980.63,0x3ffe666666666666,0x4024947ae147ae14,param_7);
    FUN_01425730(param_1,param_3 * 3970.59,0x40260a3d70a3d70a,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 7063.64,0x40035c28f5c28f5c,0xc022000000000000,param_9);
    FUN_01425610();
    return;
  case 0x60:
    FUN_014254e0();
    FUN_014258d0(param_1,0x4069000000000000,_DAT_01b321e0 * 9.04,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 400.0,0x400b70a3d70a3d71,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 180.0,0x4030000000000000,0xc022000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4143.58,0x4014d70a3d70a3d7,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425580();
    return;
  case 0x61:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 2000.0,0x401f333333333333,0x402799999999999a,param_5);
    FUN_01425730(param_1,param_3 * 4730.0,0x4030000000000000,0x40271eb851eb851f,param_6);
    FUN_01425730(param_1,0x40b3880000000000,0x4030000000000000,0xc025dc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 6399.01,0x4030000000000000,0x401ed70a3d70a3d7,param_8);
    FUN_01425730(param_1,0x40c3880000000000,0x4030000000000000,0xc024947ae147ae14,param_9);
    FUN_01425610();
    return;
  case 0x62:
    FUN_014254e0();
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 674.8,0x4030000000000000,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1339.06,0x3ff2666666666666,0x402123d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 5029.73,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 8699.31,0x4030000000000000,0,param_9);
    FUN_01425610();
    return;
  case 99:
    FUN_014254e0();
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 616.67,0x401170a3d70a3d71,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1160.0,0x40214ccccccccccd,0x4022000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2180.0,0x401c666666666666,0x40304ccccccccccd,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 100:
    FUN_014254e0();
    FUN_01425730(param_1,0x4074775c28f5c28f,0x4010666666666666,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 533.41,0x40035c28f5c28f5c,0x402947ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 883.95,0x4015d70a3d70a3d7,0x4020d70a3d70a3d7,param_7);
    FUN_01425730(param_1,param_3 * 3076.77,0x401fae147ae147ae,0x402d947ae147ae14,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x65:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 494.0,0x401d0a3d70a3d70a,0x401928f5c28f5c29,param_5);
    FUN_01425730(param_1,param_3 * 530.88,0x401251eb851eb852,0x4030800000000000,param_6);
    FUN_01425730(param_1,param_3 * 1418.2,0x3fd999999999999a,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1606.77,0x40214ccccccccccd,0x40256b851eb851ec,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x66:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 300.0,0x3ffdeb851eb851ec,0,param_5);
    FUN_01425730(param_1,param_3 * 99.62,0x4030000000000000,0xc03191eb851eb852,param_6);
    FUN_01425730(param_1,param_3 * 627.51,0x400799999999999a,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 3742.55,0x401fae147ae147ae,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x67:
    FUN_014254e0();
    FUN_014258d0(param_1,0x406753d70a3d70a4,_DAT_01b321e0 * 14.65,0xc0226b851eb851ec,param_5);
    FUN_01425730(param_1,0x406bf6b851eb851f,0x401dae147ae147ae,0xc032000000000000,param_6);
    FUN_01425730(param_1,0x40926b147ae147ae,0x3fe2e147ae147ae1,0xc02a947ae147ae14,param_7);
    FUN_01425730(param_1,param_3 * 1835.03,0x4006147ae147ae14,0x402d23d70a3d70a4,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x68:
    FUN_01425450();
    FUN_014258d0(param_1,0x4068e9eb851eb852,_DAT_01b321e0 * 0.4,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 312.55,0x4022147ae147ae14,0x402d23d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 594.03,0x400bae147ae147ae,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2673.38,0x4010c28f5c28f5c3,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 4503.72,0x3ff0cccccccccccd,0xc032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x69:
    FUN_014254e0();
    FUN_01425730(param_1,0x40701fae147ae148,0x40242e147ae147ae,0xc032000000000000,param_5);
    FUN_01425730(param_1,0x4096ef3333333333,0x40133d70a3d70a3d,0xc02edc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 1757.59,0x40278a3d70a3d70a,0x400d1eb851eb851f,param_7);
    FUN_01425730(param_1,param_3 * 2735.68,0x40278a3d70a3d70a,0x402e000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x6a:
    FUN_014254e0();
    FUN_01425730(param_1,0x40643c28f5c28f5c,0x40208f5c28f5c28f,0xc032000000000000,param_5);
    FUN_01425730(param_1,0x406060f5c28f5c29,0x4030000000000000,0xc01ed70a3d70a3d7,param_6);
    FUN_01425730(param_1,param_3 * 650.03,0x401251eb851eb852,0x4020b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 5365.39,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x6b:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 246.14,0x4030000000000000,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 695.88,0x4008cccccccccccd,0x40287ae147ae147b,param_6);
    FUN_01425730(param_1,param_3 * 1878.49,0x40242e147ae147ae,0x401c47ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 2275.01,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x6c:
    FUN_014254e0();
    FUN_01425730(param_1,0x4072c00000000000,0x400028f5c28f5c29,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 661.58,0x401f8f5c28f5c28f,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 830.2,0x4011eb851eb851ec,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 3977.22,0x4022e66666666666,0x4032000000000000,param_8);
    FUN_01425730(param_1,param_3 * 6238.46,0x4030000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x6d:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 782.94,0x4018000000000000,0x401e000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1131.28,0x3ff5eb851eb851ec,0x402647ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 2428.81,0x401f333333333333,0x402e000000000000,param_8);
    FUN_01425730(param_1,param_3 * 2888.78,0x401c99999999999a,0x402e6b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x6e:
    FUN_014254e0();
    FUN_01425730(param_1,0x4069000000000000,0x401599999999999a,0xc0300f5c28f5c28f,param_5);
    FUN_01425730(param_1,param_3 * 400.0,0x4007d70a3d70a3d7,0x4026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 2560.0,0x40236b851eb851ec,0x402af0a3d70a3d71,param_7);
    FUN_01425730(param_1,param_3 * 3971.27,0x4030000000000000,0xc02947ae147ae148,param_8);
    FUN_01425730(param_1,0x40c43b799999999a,0x401bcccccccccccd,0xc032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x6f:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 437.71,0x3ff91eb851eb851f,0,param_5);
    FUN_01425730(param_1,param_3 * 1730.44,0x4020eb851eb851ec,0x4019b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 1506.52,0x4030000000000000,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 2640.6,0x4023851eb851eb85,0x4030b5c28f5c28f6,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x70:
    FUN_01425450();
    FUN_01425730(param_1,0x406095c28f5c28f6,0x3ff1eb851eb851ec,0xc02423d70a3d70a4,param_5);
    FUN_01425730(param_1,param_3 * 346.48,0x4020eb851eb851ec,0x402d23d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 1162.89,0x400347ae147ae148,0x4025dc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 2224.84,0x401dae147ae147ae,0x4009ae147ae147ae,param_8);
    FUN_01425730(param_1,param_3 * 4127.02,0x40071eb851eb851f,0x401fb851eb851eb8,param_9);
    FUN_01425610();
    return;
  case 0x71:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 353.03,0x40195c28f5c28f5c,0x4030ee147ae147ae,param_5);
    FUN_01425730(param_1,0x408a1a0000000000,0x3ff3333333333333,0xc026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 3035.32,0x40208f5c28f5c28f,0x4025dc28f5c28f5c,param_7);
    FUN_01425730(param_1,0x40b8e66b851eb852,0x4030000000000000,0xc020b851eb851eb8,param_8);
    FUN_01425730(param_1,param_3 * 4605.28,0x4030000000000000,0x401c47ae147ae148,param_9);
    FUN_01425610();
    return;
  case 0x72:
    FUN_01425450();
    FUN_01425730(param_1,0x40565147ae147ae1,0x40068f5c28f5c28f,0xc028dc28f5c28f5c,param_5);
    FUN_01425730(param_1,param_3 * 344.39,0x4016cccccccccccd,0x4032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 446.35,0x401251eb851eb852,0x402b6b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 1433.84,0x4011eb851eb851ec,0x402347ae147ae148,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x73:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 231.71,0x401451eb851eb852,0xc0286b851eb851ec,param_5);
    FUN_01425730(param_1,param_3 * 367.01,0x402a5c28f5c28f5c,0x402347ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 1957.62,0x40214ccccccccccd,0xc020b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 2442.16,0x401a99999999999a,0x4018d70a3d70a3d7,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x74:
    FUN_01425730(param_1,0x408f400000000000,0x4030000000000000,0,param_4);
    FUN_01425730(param_1,param_3 * 321.23,0x4007333333333333,0x40315c28f5c28f5c,param_5);
    FUN_01425730(param_1,param_3 * 471.51,0x40262e147ae147ae,0x4030ee147ae147ae,param_6);
    FUN_01425730(param_1,0x405e000000000000,0x3fd999999999999a,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4715.07,0x401ac28f5c28f5c3,0x402647ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 10857.11,0x401128f5c28f5c29,0x402e000000000000,param_9);
    FUN_01425580();
    return;
  case 0x75:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 320.0,0x400147ae147ae148,0x4028000000000000,param_6);
    FUN_01425730(param_1,param_3 * 640.0,0x40227ae147ae147b,0x403191eb851eb852,param_7);
    FUN_01425730(param_1,param_3 * 2800.9,0x40242e147ae147ae,0x4030ee147ae147ae,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x76:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 751.4,0x401970a3d70a3d71,0xc02edc28f5c28f5c,param_5);
    FUN_01425730(param_1,param_3 * 1206.87,0x401970a3d70a3d71,0xc01b70a3d70a3d71,param_6);
    FUN_01425730(param_1,param_3 * 2295.44,0x4030000000000000,0xc012000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4684.51,0x4026000000000000,0x402047ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 7259.95,0x4030000000000000,0x4019b851eb851eb8,param_9);
    FUN_01425580();
    return;
  case 0x77:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 163.2,0x4014666666666666,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 642.47,0x40003d70a3d70a3d,0x402947ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 2045.81,0x4030000000000000,0xc009ae147ae147ae,param_7);
    FUN_01425730(param_1,param_3 * 4411.6,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
LAB_0142a39d:
    FUN_01425610();
    return;
  case 0x78:
    FUN_01425450();
    FUN_014258d0(param_1,param_3 * 190.82,_DAT_01b321e0 * 16.0,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 80.0,0x3ff87ae147ae147b,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 4059.62,0x4030000000000000,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5645.98,0x401128f5c28f5c29,0xc02a23d70a3d70a4,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x79:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 471.51,0x40071eb851eb851f,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 4031.54,0x401a99999999999a,0x402edc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 7419.76,0x4030000000000000,0x401728f5c28f5c29,param_7);
    FUN_01425730(param_1,param_3 * 10040.12,0x4025147ae147ae14,0x4023b851eb851eb8,param_8);
    FUN_01425730(param_1,param_3 * 16966.86,0x4030000000000000,0xc032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x7a:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,0x4093d80000000000,0x4021000000000000,0xc02e666666666666,param_6);
    FUN_01425730(param_1,param_3 * 8325.11,0x4030000000000000,0x402347ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 10650.3,0x4030000000000000,0x402947ae147ae148,param_8);
    FUN_01425730(param_1,0x40cceb55c28f5c29,0x4030000000000000,0xc032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x7b:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 4000.0,0x400c3d70a3d70a3d,0x4026b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 882.32,0x3ff30a3d70a3d70a,0xc027947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 3577.94,0x401847ae147ae148,0x4027947ae147ae14,param_7);
    FUN_01425730(param_1,param_3 * 5059.64,0x402351eb851eb852,0x403123d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 6225.99,0x402cb33333333333,0xc02edc28f5c28f5c,param_9);
    FUN_01425610();
    return;
  case 0x7c:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 4000.0,0x4030000000000000,0x4026b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 1663.82,0x402370a3d70a3d71,0x402723d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 631.84,0x401d0a3d70a3d70a,0x4025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 315.13,0x4022e66666666666,0x4030b5c28f5c28f6,param_8);
    FUN_01425730(param_1,param_3 * 9210.55,0x402923d70a3d70a4,0x401b70a3d70a3d71,param_9);
LAB_014284e9:
    FUN_01425610();
    return;
  case 0x7d:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 536.97,0x40117ae147ae147b,0x402e6b851eb851ec,param_5);
    FUN_01425730(param_1,param_3 * 2180.13,0x4030000000000000,0xc02a23d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 3396.36,0x402675c28f5c28f6,0x4028dc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 7937.41,0x4030000000000000,0x402b000000000000,param_8);
    FUN_01425730(param_1,param_3 * 10480.9,0x4030000000000000,0x40256b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x7e:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 392.35,0x401fae147ae147ae,0xc02d947ae147ae14,param_5);
    FUN_01425730(param_1,param_3 * 716.92,0x400a51eb851eb852,0xc027947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 3843.05,0x4022147ae147ae14,0x4025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 6655.3,0x402cae147ae147ae,0x401570a3d70a3d71,param_8);
    FUN_01425730(param_1,param_3 * 9283.18,0x4030000000000000,0xc02e000000000000,param_9);
    FUN_01425610();
    return;
  case 0x7f:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 392.2,0x402c0f5c28f5c28f,0x402347ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 996.16,0x4022e66666666666,0x4024947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 3949.85,0x4030000000000000,0x40226b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 10040.12,0x4030000000000000,0x402647ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 6866.64,0x4030000000000000,0x4023b851eb851eb8,param_9);
    goto LAB_0142ef97;
  case 0x80:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 304.1,0x400d5c28f5c28f5c,0x402e000000000000,param_5);
    FUN_01425730(param_1,param_3 * 1174.24,0x4011eb851eb851ec,0xc02edc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 2858.28,0x40227ae147ae147b,0x40226b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 6148.1,0x4030000000000000,0x4028000000000000,param_8);
    FUN_01425730(param_1,param_3 * 10656.15,0x4030000000000000,0xc026b851eb851eb8,param_9);
    FUN_01425580();
    return;
  case 0x81:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 446.35,0x40138f5c28f5c28f,0x402947ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 822.23,0x401970a3d70a3d71,0xc029cccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 5667.75,0x401470a3d70a3d71,0x4031ca3d70a3d70a,param_7);
    FUN_01425730(param_1,param_3 * 8554.38,0x4030000000000000,0x402423d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 10952.29,0x4030000000000000,0x40226b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x82:
    FUN_014254e0();
    FUN_01425730(param_1,0x408a68a3d70a3d71,0x4014e147ae147ae1,0x4018d70a3d70a3d7,param_5);
    FUN_01425730(param_1,0x4079000000000000,0x3ff028f5c28f5c29,0xc0148f5c28f5c28f,param_6);
    FUN_01425730(param_1,0x40b0b328f5c28f5c,0x4000000000000000,0x4018000000000000,param_7);
    FUN_01425730(param_1,param_3 * 8617.74,0x4025b33333333333,0x402423d70a3d70a4,param_8);
    FUN_01425730(param_1,0x40c666799999999a,0x401a333333333333,0x402647ae147ae148,param_9);
    FUN_01425580();
    return;
  case 0x83:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 312.55,0x4003c28f5c28f5c3,0xc0256b851eb851ec,param_5);
    FUN_01425730(param_1,param_3 * 892.71,0x4030000000000000,0x4026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 1440.41,0x4022e66666666666,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4684.51,0x4022147ae147ae14,0x402e000000000000,param_8);
    FUN_01425730(param_1,param_3 * 6506.01,0x4030000000000000,0x40148f5c28f5c28f,param_9);
    FUN_01425580();
    return;
  case 0x84:
    FUN_01425450();
    FUN_014258d0(param_1,param_3 * 1111.87,_DAT_01b321e0 * 2.08,0xc032000000000000,param_5);
    FUN_01425730(param_1,0x40a050428f5c28f6,0x4020eb851eb851ec,0x4009ae147ae147ae,param_6);
    FUN_01425730(param_1,0x40b13791eb851eb8,0x4030000000000000,0xc012d70a3d70a3d7,param_7);
    FUN_01425730(param_1,0x40b89c4000000000,0x401dae147ae147ae,0x401128f5c28f5c29,param_8);
    FUN_01425730(param_1,0x40c693b1eb851eb8,0x4030000000000000,0x3ffee147ae147ae1,param_9);
    FUN_01425580();
    return;
  case 0x85:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 903.95,0x4015c28f5c28f5c3,0x40148f5c28f5c28f,param_5);
    FUN_01425730(param_1,param_3 * 823.88,0x40161eb851eb851f,0x4028000000000000,param_6);
    FUN_01425730(param_1,param_3 * 1156.53,0x40258f5c28f5c28f,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 3487.68,0x4018d70a3d70a3d7,0x402e6b851eb851ec,param_8);
    FUN_01425730(param_1,param_3 * 5579.42,0x4023428f5c28f5c3,0x401ed70a3d70a3d7,param_9);
    FUN_01425610();
    return;
  case 0x86:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 267.2,0x4020eb851eb851ec,0x402f47ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 414.36,0x401651eb851eb852,0xc022000000000000,param_6);
    FUN_01425730(param_1,param_3 * 2618.24,0x4030000000000000,0x402e000000000000,param_7);
    FUN_01425730(param_1,param_3 * 6655.3,0x402cae147ae147ae,0x401a8f5c28f5c28f,param_8);
    FUN_01425730(param_1,param_3 * 8550.32,0x4030000000000000,0xc02e000000000000,param_9);
    FUN_01425610();
    return;
  case 0x87:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 560.1,0x40100a3d70a3d70a,0x402647ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 1771.45,0x4009c28f5c28f5c3,0x402b6b851eb851ec,param_6);
    FUN_01425730(param_1,param_3 * 5339.89,0x4030000000000000,0x4025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 7426.54,0x4030000000000000,0x401ed70a3d70a3d7,param_8);
    FUN_01425730(param_1,param_3 * 9806.32,0x4030000000000000,0x401728f5c28f5c29,param_9);
    FUN_01425580();
    return;
  case 0x88:
    FUN_01425450();
    FUN_014258d0(param_1,0x40727deb851eb852,_DAT_01b321e0 * 2.89,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 295.9,0x40028f5c28f5c28f,0xc02bdc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 1215.28,0x3ff5eb851eb851ec,0x4023b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 5802.88,0x4030000000000000,0x4019b851eb851eb8,param_8);
    FUN_01425610();
    FUN_01425580();
    return;
  case 0x89:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 1663.82,0x4030000000000000,0x4020b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 2394.86,0x4030000000000000,0xc026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 5224.07,0x4030000000000000,0x4018000000000000,param_7);
    FUN_01425730(param_1,param_3 * 8321.83,0x4030000000000000,0xc01ed70a3d70a3d7,param_8);
    FUN_01425730(param_1,param_3 * 14406.3,0x4030000000000000,0xc0148f5c28f5c28f,param_9);
    FUN_01425580();
    return;
  case 0x8a:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 625.25,0x4000a3d70a3d70a4,0xc026b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 2088.13,0x401651eb851eb852,0x401728f5c28f5c29,param_6);
    FUN_01425730(param_1,param_3 * 3638.03,0x401d0a3d70a3d70a,0x402047ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 6475.34,0x4030000000000000,0xc0315c28f5c28f5c,param_8);
    FUN_01425730(param_1,param_3 * 11246.83,0x4030000000000000,0xc0226b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x8b:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 3463.2,0x4022e66666666666,0x4019b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 8000.0,0x4030000000000000,0xc01a8f5c28f5c28f,param_6);
    FUN_01425730(param_1,0x4072f87ae147ae14,0x3fe947ae147ae148,0xc025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1856.64,0x40173d70a3d70a3d,0x402b6b851eb851ec,param_8);
    FUN_01425730(param_1,param_3 * 4668.83,0x401bb851eb851eb8,0x4018d70a3d70a3d7,param_9);
    FUN_01425580();
    return;
  case 0x8c:
    FUN_014254e0();
    FUN_01425730(param_1,0x405cec28f5c28f5c,0x3ff1eb851eb851ec,0xc0011eb851eb851f,param_5);
    FUN_01425730(param_1,param_3 * 1657.43,0x3ff1eb851eb851ec,0xc025dc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 3119.67,0x400ae147ae147ae1,0x402647ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 7722.79,0x4030000000000000,0x402b000000000000,param_8);
    FUN_01425730(param_1,param_3 * 5000.0,0x3ff8f5c28f5c28f6,0x400ee147ae147ae1,param_9);
    goto LAB_0143089f;
  case 0x8d:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 2753.67,0x40161eb851eb851f,0x40286147ae147ae1,param_5);
    FUN_01425730(param_1,param_3 * 420.92,0x3fe6147ae147ae14,0xc02a947ae147ae14,param_6);
    FUN_01425730(param_1,0x40b645d1eb851eb8,0x402b9eb851eb851f,0x403123d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 4587.58,0x40117ae147ae147b,0xc02bdc28f5c28f5c,param_8);
    FUN_01425730(param_1,0x40c009f99999999a,0x4030000000000000,0x4029b851eb851eb8,param_9);
    FUN_01425610();
    return;
  case 0x8e:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 2571.77,0x402370a3d70a3d71,0x4021947ae147ae14,param_5);
    FUN_01425730(param_1,param_3 * 2442.16,0x4000000000000000,0x402a947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 3433.32,0x402923d70a3d70a4,0xc02b000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4587.58,0x40148f5c28f5c28f,0x4009ae147ae147ae,param_8);
    FUN_01425730(param_1,param_3 * 8530.07,0x4029b33333333333,0x40286b851eb851ec,param_9);
    FUN_01425610();
    return;
  case 0x8f:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 2242.38,0x40278a3d70a3d70a,0x40286b851eb851ec,param_5);
    FUN_01425730(param_1,param_3 * 2725.17,0x4000000000000000,0x4020b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 4903.16,0x40100a3d70a3d70a,0xc02b000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4980.79,0x4030000000000000,0x4029b851eb851eb8,param_8);
    FUN_01425730(param_1,param_3 * 7856.66,0x402a428f5c28f5c3,0x402c47ae147ae148,param_9);
    FUN_01425610();
    return;
  case 0x90:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 378.66,0x4021ae147ae147ae,0x4030800000000000,param_5);
    FUN_01425730(param_1,param_3 * 1111.6,0x40043d70a3d70a3d,0xc030b5c28f5c28f6,param_6);
    FUN_01425730(param_1,param_3 * 3278.14,0x4030000000000000,0x403011eb851eb852,param_7);
    FUN_01425730(param_1,param_3 * 4084.51,0x4022147ae147ae14,0xc023b851eb851eb8,param_8);
    FUN_01425730(param_1,param_3 * 7461.71,0x4030000000000000,0x4028000000000000,param_9);
    FUN_01425580();
    return;
  case 0x91:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 711.31,0x401a000000000000,0xc031ca3d70a3d70a,param_5);
    FUN_01425730(param_1,param_3 * 2088.13,0x40227ae147ae147b,0xc02d23d70a3d70a4,param_6);
    FUN_01425730(param_1,param_3 * 7023.93,0x401dae147ae147ae,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 10605.93,0x4030000000000000,0x402d947ae147ae14,param_8);
    FUN_01425730(param_1,param_3 * 14793.73,0x4030000000000000,0x402cb851eb851eb8,param_9);
    FUN_01425580();
    return;
  case 0x92:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 426.53,0x401547ae147ae148,0x4027947ae147ae14,param_5);
    FUN_01425730(param_1,param_3 * 569.05,0x402675c28f5c28f6,0x4022000000000000,param_6);
    FUN_01425730(param_1,0x4096037ae147ae14,0x3ff4000000000000,0xc02e6b851eb851ec,param_7);
    FUN_01425730(param_1,param_3 * 1757.59,0x4019eb851eb851ec,0x4022000000000000,param_8);
    FUN_01425730(param_1,param_3 * 4070.84,0x401bcccccccccccd,0x402a947ae147ae14,param_9);
    FUN_01425610();
    return;
  case 0x93:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 130.72,0x3ffc7ae147ae147b,0x4019b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 1839.72,0x40117ae147ae147b,0x4022000000000000,param_6);
    FUN_01425730(param_1,param_3 * 9376.45,0x4028947ae147ae14,0x402723d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 12163.89,0x4017c28f5c28f5c3,0x402fb851eb851eb8,param_8);
    FUN_01425730(param_1,param_3 * 5825.27,0x4023bd70a3d70a3d,0x40304a3d70a3d70a,param_9);
    FUN_01425580();
    return;
  case 0x94:
    FUN_01425730(param_1,param_3 * 368.42,0x4030000000000000,0xc01d28f5c28f5c29,param_4);
    FUN_01425730(param_1,param_3 * 144.62,0x3fee147ae147ae14,0x402947ae147ae148,param_5);
    FUN_01425730(param_1,param_3 * 1373.33,0x402299999999999a,0xc02bdc28f5c28f5c,param_6);
    FUN_01425730(param_1,param_3 * 2275.85,0x40138f5c28f5c28f,0x402047ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 6034.36,0x4030000000000000,0xc01e000000000000,param_8);
    FUN_01425730(param_1,param_3 * 9518.56,0x4014e147ae147ae1,0x402c47ae147ae148,param_9);
LAB_0143089f:
    FUN_01425580();
    return;
  case 0x95:
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
    FUN_01425730(param_1,param_3 * 108.18,0x4016cccccccccccd,0x4025000000000000,param_5);
    FUN_01425730(param_1,param_3 * 1502.79,0x4009333333333333,0xc030800000000000,param_6);
    FUN_01425730(param_1,param_3 * 3443.95,0x4030000000000000,0xc028dc28f5c28f5c,param_7);
    FUN_01425730(param_1,param_3 * 8287.16,0x4030000000000000,0xc02a947ae147ae14,param_8);
    FUN_01425730(param_1,param_3 * 16061.71,0x4030000000000000,0xc032000000000000,param_9);
    FUN_01425610();
    return;
  case 0x96:
    FUN_014254e0();
    FUN_014258d0(param_1,param_3 * 446.35,_DAT_01b321e0 * 4.89,0x4026b851eb851eb8,param_5);
    FUN_01425730(param_1,param_3 * 969.22,0x40280f5c28f5c28f,0x402047ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 1792.3,0x4030000000000000,0xc02c47ae147ae148,param_7);
    FUN_01425730(param_1,param_3 * 7879.06,0x4030000000000000,0x4018d70a3d70a3d7,param_8);
    FUN_01425730(param_1,param_3 * 13269.0,0x4030000000000000,0x401728f5c28f5c29,param_9);
LAB_01430b1c:
    FUN_01425580();
    return;
  case 0x97:
    FUN_014254e0();
    FUN_014258d0(param_1,param_3 * 446.35,_DAT_01b321e0 * 4.89,0x402423d70a3d70a4,param_5);
    FUN_01425730(param_1,param_3 * 969.22,0x4015d70a3d70a3d7,0x402047ae147ae148,param_6);
    FUN_01425730(param_1,param_3 * 8100.0,0x4030000000000000,0xc025000000000000,param_7);
    FUN_01425730(param_1,param_3 * 12200.0,0x4030000000000000,0xc01a666666666666,param_8);
    FUN_01425940(param_1,param_3 * 4082.57,_DAT_01b321e0 * 16.0,0xc018d70a3d70a3d7,param_9);
    FUN_01425610();
    return;
  case 0x98:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 300.0,0x4018000000000000,0x4020000000000000,param_5);
    FUN_01425730(param_1,param_3 * 933.0,0x401999999999999a,0x402ccccccccccccd,param_6);
    FUN_01425730(param_1,param_3 * 1230.0,0x4016cccccccccccd,0xc033000000000000,param_7);
    FUN_01425730(param_1,param_3 * 3300.0,0x4028000000000000,0x4018cccccccccccd,param_8);
    FUN_01425730(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_01425610();
    return;
  case 0x99:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 131.06,0x4017d70a3d70a3d7,0xc032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 131.03,0x3fee147ae147ae14,0xc032000000000000,param_6);
    FUN_01425730(param_1,param_3 * 923.91,0x40028f5c28f5c28f,0x4032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 4922.83,0x40258f5c28f5c28f,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x9a:
    FUN_01425450();
    FUN_014258d0(param_1,param_3 * 163.2,_DAT_01b321e0 * 16.0,0xc02e000000000000,param_5);
    FUN_01425730(param_1,param_3 * 80.0,0x400799999999999a,0xc031ca3d70a3d70a,param_6);
    FUN_01425730(param_1,param_3 * 3172.07,0x4030000000000000,0x4023b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 4411.6,0x4030000000000000,0xc032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x9b:
    FUN_014254e0();
    FUN_014258d0(param_1,param_3 * 177.14,0x4000000000000000,0xc025000000000000,param_5);
    FUN_01425730(param_1,param_3 * 400.0,0x4008f5c28f5c28f6,0x4028000000000000,param_6);
    FUN_01425730(param_1,param_3 * 2762.78,0x4030000000000000,0x4030ee147ae147ae,param_7);
    FUN_01425730(param_1,param_3 * 1904.42,0x402199999999999a,0x401d28f5c28f5c29,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x9c:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 263.29,0x4015c28f5c28f5c3,0x402e6b851eb851ec,param_6);
    FUN_01425730(param_1,param_3 * 482.75,0x400e147ae147ae14,0xc030ee147ae147ae,param_7);
    FUN_01425730(param_1,param_3 * 1803.07,0x40208f5c28f5c28f,0x402047ae147ae148,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x9d:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 338.03,0x4001ae147ae147ae,0x4018000000000000,param_6);
    FUN_01425730(param_1,param_3 * 3584.6,0x4002e147ae147ae1,0x402a947ae147ae14,param_7);
    FUN_01425610();
    FUN_01425610();
LAB_0142ef97:
    FUN_01425610();
    return;
  case 0x9e:
    FUN_014254e0();
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 385.99,0x401bc28f5c28f5c3,0x4031ca3d70a3d70a,param_6);
    FUN_01425730(param_1,param_3 * 1352.12,0x40051eb851eb851f,0x4023b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 3269.24,0x401151eb851eb852,0x4032000000000000,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0x9f:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 142.26,0x40113d70a3d70a3d,0x4030b5c28f5c28f6,param_5);
    FUN_01425730(param_1,param_3 * 458.76,0x4020a8f5c28f5c29,0xc02b000000000000,param_6);
    FUN_01425730(param_1,param_3 * 307.68,0x4021c28f5c28f5c3,0x402b000000000000,param_7);
    FUN_01425730(param_1,param_3 * 1149.19,0x4017d70a3d70a3d7,0x401047ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 4442.41,0x4023bd70a3d70a3d,0x401a8f5c28f5c28f,param_9);
    FUN_01425580();
    return;
  case 0xa0:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 172.35,0x4022147ae147ae14,0x40256b851eb851ec,param_5);
    FUN_01425730(param_1,param_3 * 1856.64,0x401a333333333333,0x4021947ae147ae14,param_6);
    FUN_01425730(param_1,param_3 * 3831.19,0x40141eb851eb851f,0x4020b851eb851eb8,param_7);
    FUN_01425730(param_1,param_3 * 5712.44,0x4000000000000000,0xc01d28f5c28f5c29,param_8);
    FUN_01425730(param_1,param_3 * 10738.72,0x4030000000000000,0x402b000000000000,param_9);
    FUN_01425610();
    return;
  case 0xa1:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 84.51,0x4000000000000000,0x401ed70a3d70a3d7,param_5);
    FUN_01425730(param_1,param_3 * 201.58,0x4000000000000000,0xc002e147ae147ae1,param_6);
    FUN_01425730(param_1,param_3 * 464.16,0x4000000000000000,0x401e000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5407.7,0x4021cccccccccccd,0x402123d70a3d70a4,param_8);
    FUN_01425730(param_1,param_3 * 1211.53,0x40227ae147ae147b,0x40148f5c28f5c28f,param_9);
LAB_0142a9af:
    FUN_01425610();
    return;
  case 0xa2:
    FUN_014254e0();
    FUN_01425730(param_1,param_3 * 368.42,0x4020333333333333,0x402b6b851eb851ec,param_5);
    FUN_01425730(param_1,param_3 * 3922.53,0x4030000000000000,0x403011eb851eb852,param_6);
    FUN_01425730(param_1,param_3 * 5640.82,0x40260a3d70a3d70a,0x402d23d70a3d70a4,param_7);
    FUN_01425730(param_1,param_3 * 5645.98,0x4027051eb851eb85,0x402d23d70a3d70a4,param_8);
    FUN_01425610();
    FUN_01425610();
    return;
  case 0xa3:
    FUN_01425450();
    FUN_01425730(param_1,param_3 * 145.07,0x3ff5eb851eb851ec,0x4032000000000000,param_5);
    FUN_01425730(param_1,param_3 * 719.63,0x40227ae147ae147b,0x4026b851eb851eb8,param_6);
    FUN_01425730(param_1,param_3 * 556.99,0x3feeb851eb851eb8,0xc032000000000000,param_7);
    FUN_01425730(param_1,param_3 * 5183.97,0x3fd999999999999a,0xc02947ae147ae148,param_8);
    FUN_01425730(param_1,param_3 * 4275.16,0x4020333333333333,0x4032000000000000,param_9);
    break;
  default:
    goto switchD_01425a65_default;
  }
  FUN_01425610();
switchD_01425a65_default:
  return;
}

// 01431E50  FUN_01431e50  size=684  [run]
float10 FUN_01431e50(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (float10)-0.9;
  default:
    return (float10)1;
  case 2:
    return (float10)-7.2;
  case 3:
  case 0x11:
  case 0x52:
  case 0x80:
  case 0x96:
    return (float10)-4.9;
  case 4:
  case 8:
  case 0x10:
  case 0x58:
  case 0x8b:
    return (float10)-6.6;
  case 5:
    return (float10)-8.7;
  case 6:
  case 0xc:
  case 0x3d:
  case 0x45:
  case 0x9e:
    return (float10)-7.0;
  case 7:
  case 0x2a:
    return (float10)-10.0;
  case 9:
  case 0x3f:
  case 0x42:
    return (float10)-0.8;
  case 10:
  case 0x1c:
  case 0x5d:
  case 0x8a:
    return (float10)-5.0;
  case 0xb:
    return (float10)-2.5;
  case 0xd:
  case 0xe:
  case 0x14:
    return (float10)-4.0;
  case 0xf:
  case 0x92:
    return (float10)-0.4;
  case 0x12:
  case 0x85:
    return (float10)-11.3;
  case 0x13:
  case 0x4a:
    return (float10)-1.5;
  case 0x16:
  case 0x27:
    return (float10)-11.4;
  case 0x17:
  case 0x22:
  case 0x3b:
    return (float10)-8.2;
  case 0x18:
    return (float10)-13.5;
  case 0x19:
    return (float10)-8.9;
  case 0x1a:
    return (float10)-13.1;
  case 0x1b:
  case 0x1d:
  case 0x7c:
  case 0x7e:
    return (float10)-5.4;
  case 0x1e:
  case 0x8c:
  case 0x9a:
    return (float10)-6.0;
  case 0x1f:
  case 0x69:
  case 0x95:
    return (float10)-2.3;
  case 0x21:
  case 0x35:
    return (float10)-9.2;
  case 0x23:
    return (float10)-1.8;
  case 0x25:
    return (float10)-9.0;
  case 0x26:
    return (float10)-1.4;
  case 0x29:
  case 0x87:
  case 0x94:
    return (float10)-7.5;
  case 0x2b:
  case 0x41:
  case 0x7d:
    return (float10)-4.3;
  case 0x2c:
  case 0x88:
    return (float10)-8.0;
  case 0x2d:
  case 0x48:
    return (float10)-5.1;
  case 0x2e:
    return (float10)-3.5;
  case 0x2f:
  case 0x4e:
  case 0x5a:
    return (float10)-5.9;
  case 0x31:
  case 0x89:
    return (float10)-2.6;
  case 0x33:
    return (float10)-3.8;
  case 0x34:
    return (float10)-1.7;
  case 0x36:
  case 0x9b:
    return (float10)-11.8;
  case 0x37:
    return (float10)-17.3;
  case 0x38:
    return (float10)-12.4;
  case 0x39:
    return (float10)-16.7;
  case 0x3a:
  case 0x57:
    return (float10)-4.5;
  case 0x3c:
    return (float10)-12.3;
  case 0x3e:
  case 0x74:
  case 0xa1:
    return (float10)-5.3;
  case 0x44:
    return (float10)-4.4;
  case 0x47:
  case 0x6a:
  case 0x78:
  case 0x7f:
  case 0x93:
    return (float10)-6.4;
  case 0x4f:
  case 0x5b:
    return (float10)-3.3;
  case 0x50:
  case 0x5f:
    return (float10)-6.7;
  case 0x53:
    return (float10)-8.4;
  case 0x54:
    return (float10)-8.3;
  case 0x55:
    return (float10)-11.1;
  case 0x56:
  case 0x90:
    return (float10)-5.6;
  case 0x59:
  case 0x6b:
    return (float10)-5.5;
  case 0x5c:
    return (float10)-2.9;
  case 0x5e:
    return (float10)-16.8;
  case 0x60:
    return (float10)-4.8;
  case 0x61:
    return (float10)-9.4;
  case 0x62:
    return (float10)-8.6;
  case 99:
  case 0x81:
    return (float10)-18.0;
  case 100:
    return (float10)-7.1;
  case 0x66:
    return (float10)-10.9;
  case 0x68:
    return (float10)-4.7;
  case 0x6c:
    return (float10)-17.9;
  case 0x6d:
    return (float10)-12.8;
  case 0x6e:
    return (float10)-6.1;
  case 0x6f:
    return (float10)-13.3;
  case 0x70:
  case 0x7a:
  case 0xa2:
    return (float10)-6.9;
  case 0x72:
    return (float10)-11.7;
  case 0x73:
    return (float10)-0.5;
  case 0x75:
    return (float10)-13.7;
  case 0x76:
  case 0x84:
    return (float10)-3.0;
  case 0x77:
    return (float10)-6.3;
  case 0x79:
    return (float10)-12.0;
  case 0x7b:
    return (float10)-18.2;
  case 0x82:
    return (float10)-13.9;
  case 0x83:
  case 0x86:
    return (float10)-7.7;
  case 0x8e:
    return (float10)-14.5;
  case 0x8f:
    return (float10)-10.2;
  case 0x91:
    return (float10)-6.8;
  case 0x97:
  case 0xa0:
    return (float10)-6.2;
  case 0x99:
    return (float10)-8.5;
  case 0x9c:
    return (float10)-3.1;
  case 0x9d:
    return (float10)-18.1;
  case 0x9f:
    return (float10)-1.0;
  }
}

// 01432390  FUN_01432390  size=9  [run]
void FUN_01432390(void)

{
  FUN_01424cb0();
  return;
}

// 014323A0  FUN_014323a0  size=48  [run]
float10 FUN_014323a0(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((float10)param_1 == (float10)0) {
    return (float10)1;
  }
  fVar1 = (float10)1;
  fVar2 = fVar1 / (float10)param_1;
  if (fVar1 < fVar2) {
    return fVar1;
  }
  return fVar2;
}

// 014323D0  FUN_014323d0  size=77  [run]
float10 FUN_014323d0(double param_1,double param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00fdc1f0();
  fVar1 = (float10)1;
  fVar3 = (float10)param_2;
  fVar2 = fVar3 - (fVar1 - fVar2) * (float10)0.0025;
  if ((float10)param_1 < (float10)0) {
    return fVar2 * (fVar1 - (float10)param_1 * (float10)-0.1 * (fVar1 - fVar3 * fVar3));
  }
  return fVar2;
}

// 01432420  FUN_01432420  size=353  [run]
void FUN_01432420(int param_1,int param_2,double param_3,undefined4 param_4,undefined4 param_5,
                 double param_6,double *param_7)

{
  int iVar1;
  short sVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)FUN_00fdc1f0();
  fVar5 = (float10)1;
  fVar4 = (float10)param_3;
  fVar3 = fVar4 - (fVar5 - fVar3) * (float10)0.0025;
  if ((float10)param_6 < (float10)0) {
    fVar3 = (fVar5 - (float10)-0.1 * (float10)param_6 * (fVar5 - fVar4 * fVar4)) * fVar3;
  }
  *param_7 = (double)fVar3;
  sVar2 = 0;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      if (0.0 < param_6) {
        FUN_00fdc1f0();
        FUN_00fdc1f0();
      }
      FUN_00fdc1f0();
      fVar5 = (float10)FUN_00fdc1f0();
      sVar2 = sVar2 + 1;
      *(float *)(param_1 + iVar1 * 4) = (float)fVar5;
      iVar1 = (int)sVar2;
    } while (iVar1 < param_2);
    return;
  }
  return;
}

// 01432590  FUN_01432590  size=173  [run]
void FUN_01432590(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  char in_stack_0000001c;
  
  if (in_stack_0000001c == '\0') {
    FUN_00fdc1f0();
  }
  iVar1 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    FUN_00fdc1f0();
    fVar2 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + iVar1 * 4) = (float)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_2);
  return;
}

// 01432640  FUN_01432640  size=184  [run]
void FUN_01432640(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  double dStack0000001c;
  char in_stack_00000024;
  
  if (in_stack_00000024 == '\0') {
    fVar2 = (float10)FUN_00fdc1f0();
    dStack0000001c = (double)fVar2;
  }
  else {
    dStack0000001c = 1.0;
  }
  iVar1 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    FUN_00fdc1f0();
    fVar2 = (float10)FUN_00fdc1f0();
    if ((float10)1 < fVar2) {
      fVar2 = (float10)1;
    }
    if (fVar2 < (float10)dStack0000001c) {
      fVar2 = (float10)dStack0000001c;
    }
    *(float *)(param_1 + iVar1 * 4) = (float)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_2);
  return;
}

// 01432700  FUN_01432700  size=38  [run]
void __thiscall
FUN_01432700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_6;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 01432730  FUN_01432730  size=13  [run]
void __thiscall FUN_01432730(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}

// 01432740  FUN_01432740  size=49  [run]
void __thiscall FUN_01432740(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

// 01432780  FUN_01432780  size=18  [run]
void __thiscall FUN_01432780(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}

// 014327A0  FUN_014327a0  size=24  [run]
void __thiscall FUN_014327a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x48);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// 014327F0  FUN_014327f0  size=27  [run]
undefined4 FUN_014327f0(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01432810  FUN_01432810  size=114  [run]
float10 __fastcall FUN_01432810(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  undefined4 local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar2 = *(int *)(param_1 + 4);
  local_1c = *(float *)(iVar2 + 4);
  local_18 = *(float *)(iVar2 + 8);
  local_14 = *(float *)(iVar2 + 0xc);
  local_10 = *(float *)(iVar2 + 0x10);
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined1 *)(iVar2 + 0x18) = 0;
  if ((char)uVar1 == '\x01') {
    local_44 = (double)*(float *)(iVar2 + 4);
    local_24 = *(undefined4 *)(iVar2 + 0x14);
    local_3c = (double)*(float *)(iVar2 + 8);
    local_34 = (double)*(float *)(iVar2 + 0xc);
    local_2c = (double)*(float *)(iVar2 + 0x10);
    pdVar3 = &local_44;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + 0x48);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pdVar3;
      pdVar3 = (double *)((int)pdVar3 + 4);
      puVar4 = puVar4 + 1;
    }
    (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  return (float10)local_18;
}

// 01432890  FUN_01432890  size=222  [run]
int __thiscall
FUN_01432890(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = param_5[1] & 0x3ffff;
  if (((uVar4 != 4) && (uVar4 != 3)) && (uVar4 != 0x3f)) {
    return 0x4e;
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  iVar2 = (**(code **)(*param_2 + 4))(0x70);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01436a70();
  }
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    return 0x34;
  }
  if (*param_5 != *(int *)(iVar2 + 4)) {
    *(int *)(iVar2 + 4) = *param_5;
  }
  iVar2 = FUN_01432a70(param_2,uVar4);
  if (iVar2 == 1) {
    iVar2 = *param_5;
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar3 = FUN_01436740(iVar2);
      *(undefined4 *)(param_1 + 0x14) = uVar3;
      return 1;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      uVar3 = FUN_01434180(iVar2);
      *(undefined4 *)(param_1 + 0x14) = uVar3;
      return 1;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      uVar3 = FUN_01435070(iVar2);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    iVar2 = 1;
  }
  return iVar2;
}

// 01432970  FUN_01432970  size=54  [run]
void __thiscall FUN_01432970(int param_1,int param_2)

{
  FUN_01432810();
  FUN_013517e0(param_2,*(undefined4 *)(param_1 + 0x14));
  if (*(short *)(param_2 + 0xe) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
  }
  return;
}

// 014329D0  FUN_014329d0  size=90  [run]
undefined4 __thiscall FUN_014329d0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[2] != 0) {
    FUN_01432d60(param_2);
    puVar1 = (undefined4 *)param_1[2];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(0);
      (**(code **)(*param_2 + 8))(puVar1);
    }
    param_1[2] = 0;
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 01432A30  FUN_01432a30  size=49  [run]
undefined4 * FUN_01432a30(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_018234f8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01432A70  FUN_01432a70  size=337  [run]
int __thiscall FUN_01432a70(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 3) {
    if (param_1[3] != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*param_2 + 4))(4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_01433f50();
    }
    param_1[3] = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    uVar2 = FUN_01433f70();
    iVar1 = FUN_01420600(param_2,uVar2);
    if (iVar1 != 1) {
      return iVar1;
    }
    iVar1 = FUN_01433f80(param_1 + 9,param_2,param_1[1]);
  }
  else if (param_3 == 4) {
    if (param_1[2] != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*param_2 + 4))(4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_01434e60();
    }
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    uVar2 = FUN_01434e80();
    iVar1 = FUN_01420600(param_2,uVar2);
    if (iVar1 != 1) {
      return iVar1;
    }
    iVar1 = FUN_01434e90(param_1 + 5,param_2,param_1[1]);
  }
  else {
    if (param_3 != 0x3f) {
      return 0x4e;
    }
    if (param_1[4] != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*param_2 + 4))(4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_014364e0();
    }
    param_1[4] = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    uVar2 = FUN_01436500();
    iVar1 = FUN_01420600(param_2,uVar2);
    if (iVar1 != 1) {
      return iVar1;
    }
    iVar1 = FUN_01436510(param_1 + 0xd,param_2,param_1[1]);
  }
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 8))();
    return 1;
  }
  return iVar1;
}

// 01432BD0  FUN_01432bd0  size=50  [run]
undefined4 __fastcall FUN_01432bd0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_01436740();
    return uVar1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_01434180();
    return uVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_01435070();
    return uVar1;
  }
  return 0;
}

// 01432C10  FUN_01432c10  size=35  [run]
void FUN_01432c10(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01432C40  FUN_01432c40  size=35  [run]
void FUN_01432c40(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01432C70  FUN_01432c70  size=33  [run]
undefined4 __thiscall FUN_01432c70(undefined4 param_1,byte param_2)

{
  FUN_01434e70();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01432CA0  FUN_01432ca0  size=33  [run]
undefined4 __thiscall FUN_01432ca0(undefined4 param_1,byte param_2)

{
  FUN_01433f60();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01432CD0  FUN_01432cd0  size=33  [run]
undefined4 __thiscall FUN_01432cd0(undefined4 param_1,byte param_2)

{
  FUN_014364f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01432D00  FUN_01432d00  size=32  [run]
void FUN_01432d00(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01434e70();
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01432D20  FUN_01432d20  size=32  [run]
void FUN_01432d20(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01433f60();
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01432D40  FUN_01432d40  size=32  [run]
void FUN_01432d40(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_014364f0();
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01432D60  FUN_01432d60  size=203  [run]
void __thiscall FUN_01432d60(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01420650(param_2);
    FUN_01435110(param_2);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      FUN_01434e70();
      (**(code **)(*param_2 + 8))(iVar1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_01420650(param_2);
    FUN_01434240(param_2);
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      FUN_01433f60();
      (**(code **)(*param_2 + 8))(iVar1);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_01420650(param_2);
    FUN_01436890(param_2);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      FUN_014364f0();
      (**(code **)(*param_2 + 8))(iVar1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 01432E40  FUN_01432e40  size=34  [run]
undefined4 * __thiscall FUN_01432e40(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01432E80  FUN_01432e80  size=72  [run]
void __thiscall FUN_01432e80(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    param_1[5] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0x41200000;
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
  (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return;
}

// 01432ED0  FUN_01432ed0  size=338  [run]
undefined4 __thiscall FUN_01432ed0(int param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  int local_c;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  uVar2 = 1;
  switch(param_2) {
  case 0:
    fVar1 = *param_3;
    *(float *)(param_1 + 4) = fVar1;
    if ((fVar1 < -36.0) || (0.0 < fVar1)) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
    break;
  case 1:
    fVar1 = *param_3;
    *(float *)(param_1 + 8) = fVar1;
    if ((fVar1 < -36.0) || (0.0 < fVar1)) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
    break;
  case 2:
    fVar1 = *param_3;
    *(float *)(param_1 + 0xc) = fVar1;
    if ((fVar1 < 0.0) || (100.0 < fVar1)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
    break;
  case 3:
    fVar1 = *param_3;
    *(float *)(param_1 + 0x10) = fVar1;
    if ((fVar1 < 1.0) || (5000.0 < fVar1)) {
      *(undefined4 *)(param_1 + 0x10) = 0x41200000;
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
    break;
  case 4:
    local_c = (int)(longlong)ROUND(*param_3);
    *(int *)(param_1 + 0x14) = local_c;
    if ((local_c < 0) || (5 < local_c)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
    break;
  default:
    uVar2 = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return uVar2;
}

// 01433040  FUN_01433040  size=54  [run]
void __thiscall FUN_01433040(undefined4 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_01823518;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 01433080  FUN_01433080  size=76  [run]
undefined4 * __thiscall FUN_01433080(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01823518;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 014330D0  FUN_014330d0  size=39  [run]
undefined4 __thiscall FUN_014330d0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01433100  FUN_01433100  size=176  [run]
undefined4 __thiscall FUN_01433100(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  *(float *)(param_1 + 4) = fVar1;
  fVar2 = param_2[1];
  *(float *)(param_1 + 8) = fVar2;
  fVar3 = param_2[2];
  *(float *)(param_1 + 0xc) = fVar3;
  *(float *)(param_1 + 0x10) = param_2[3];
  fVar4 = param_2[4];
  *(float *)(param_1 + 0x14) = fVar4;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((fVar1 < -36.0) || (0.0 < fVar1)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((fVar2 < -36.0) || (0.0 < fVar2)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((fVar3 < 0.0) || (100.0 < fVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((*(float *)(param_1 + 0x10) < 1.0) || (5000.0 < *(float *)(param_1 + 0x10))) {
    *(undefined4 *)(param_1 + 0x10) = 0x41200000;
  }
  if (((int)fVar4 < 0) || (5 < (int)fVar4)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 1;
}

// 014331C0  FUN_014331c0  size=31  [run]
undefined4 * FUN_014331c0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01823518;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 014331E0  FUN_014331e0  size=35  [run]
void FUN_014331e0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01433210  FUN_01433210  size=17  [run]
undefined4 FUN_01433210(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01433230  FUN_01433230  size=34  [run]
undefined4 * __thiscall FUN_01433230(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01433280  FUN_01433280  size=20  [run]
void FUN_01433280(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 014332A0  FUN_014332a0  size=20  [run]
void FUN_014332a0(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 014332C0  FUN_014332c0  size=20  [run]
void FUN_014332c0(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 014332E0  FUN_014332e0  size=1734  [run]
void FUN_014332e0(float param_1,int param_2,float *param_3,float *param_4,float *param_5,int param_6
                 )

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  int local_2c;
  int local_28;
  int local_10;
  float local_8;
  
  iVar8 = (int)param_1;
  iVar9 = (int)*(float *)((int)param_1 + 8);
  fVar4 = *(float *)((int)param_1 + 0xc);
  fVar5 = *(float *)((int)param_1 + 0x10);
  iVar12 = (int)*(float *)((int)param_1 + 0xf10);
  local_28 = (int)*(float *)((int)param_1 + 0xf20);
  pfVar2 = (float *)((int)param_1 + 0xf20);
  fVar6 = *(float *)((int)param_1 + 0x1c);
  fVar7 = *(float *)((int)param_1 + 0x30);
  iVar14 = (int)*(float *)((int)param_1 + 0x34);
  pfVar3 = (float *)((int)param_1 + 0xf10);
  pfVar1 = (float *)((int)param_1 + 0x38);
  local_2c = (int)*pfVar1;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  if (param_6 != 0) {
    param_2 = param_2 - (int)param_3;
    iVar13 = iVar12;
    do {
      fVar19 = *param_3;
      param_6 = param_6 + -1;
      fVar16 = *(float *)(param_2 + (int)param_3) * DAT_01b321ec;
      param_3 = param_3 + 1;
      fVar19 = fVar19 * DAT_01b321ec;
      if (fVar16 < 1.0) {
        if (fVar16 <= -1.0) {
          fVar16 = -1.0;
        }
      }
      else {
        fVar16 = 1.0;
      }
      if (fVar19 < 1.0) {
        if (fVar19 <= -1.0) {
          fVar19 = -1.0;
        }
      }
      else {
        fVar19 = 1.0;
      }
      iVar12 = iVar13 + 1;
      if (iVar9 <= iVar12) {
        iVar12 = 0;
      }
      iVar15 = ((int)fVar4 + iVar13) * 4;
      fVar18 = *(float *)(iVar15 + iVar8);
      *(float *)(iVar15 + iVar8) = fVar16;
      fVar17 = *(float *)(iVar15 + 0xf08 + iVar8);
      *(float *)(iVar15 + 0xf08 + iVar8) = fVar19;
      *(float *)(iVar8 + 0xf14) = fVar18;
      *(float *)(iVar8 + 0xf18) = fVar17;
      iVar15 = (int)fVar5 + iVar13;
      if (ABS(fVar17) < ABS(fVar18)) {
        fVar17 = fVar18;
      }
      *(float *)(iVar8 + 0xf1c) = fVar17;
      fVar18 = ABS(fVar19);
      fVar17 = fVar16;
      if (ABS(fVar16) < fVar18) {
        fVar17 = fVar19;
      }
      *(float *)(iVar8 + 0xf08 + iVar15 * 4) = fVar17;
      iVar10 = 0;
      fVar19 = 0.0;
      param_1 = 0.0;
      pfVar11 = (float *)(iVar8 + 0xf08 + (iVar15 - iVar13) * 4);
      if (3 < iVar9) {
        iVar13 = (iVar9 - 4U >> 2) + 1;
        iVar10 = iVar13 * 4;
        do {
          fVar17 = *pfVar11;
          if (ABS(param_1) < ABS(fVar17)) {
            fVar19 = fVar17;
            param_1 = fVar17;
          }
          fVar17 = pfVar11[1];
          if (ABS(param_1) < ABS(fVar17)) {
            fVar19 = fVar17;
            param_1 = fVar17;
          }
          fVar17 = pfVar11[2];
          if (ABS(param_1) < ABS(fVar17)) {
            fVar19 = fVar17;
            param_1 = fVar17;
          }
          fVar17 = pfVar11[3];
          if (ABS(param_1) < ABS(fVar17)) {
            fVar19 = fVar17;
            param_1 = fVar17;
          }
          pfVar11 = pfVar11 + 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (iVar10 < iVar9) {
        iVar10 = iVar9 - iVar10;
        do {
          fVar17 = *pfVar11;
          if (ABS(param_1) < ABS(fVar17)) {
            fVar19 = fVar17;
            param_1 = fVar17;
          }
          pfVar11 = pfVar11 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_8 = ABS(fVar16);
      if (ABS(fVar16) < fVar18) {
        local_8 = fVar18;
      }
      if (1.0 <= local_8) {
        local_8 = 1.0;
      }
      if (ABS(*(float *)(iVar8 + 0x14)) <= ABS(local_8)) {
        local_8 = *(float *)(iVar8 + 0x14);
      }
      fVar16 = *(float *)(iVar8 + 0xf24);
      if (ABS(*(float *)(iVar8 + 0xf24)) < ABS(local_8)) {
        local_28 = (int)fVar6;
        fVar16 = local_8;
      }
      *(float *)(iVar8 + 0xf24) = ABS(fVar16);
      fVar16 = ABS(fVar16) - *(float *)(iVar8 + 0x18);
      if (ABS(fVar16) < ABS(*(float *)(iVar8 + 0xf28))) {
        fVar16 = *(float *)(iVar8 + 0xf28);
      }
      local_28 = local_28 + -1;
      *(float *)(iVar8 + 0xf28) = fVar16;
      if (local_28 < 0) {
        local_28 = 0;
      }
      fVar16 = *(float *)(iVar8 + 0x24);
      fVar18 = 0.0;
      if (local_28 < 1) {
        fVar16 = 0.0;
        fVar18 = *(float *)(iVar8 + 0x20);
      }
      fVar19 = ABS(fVar19);
      param_1 = (fVar19 - *(float *)(iVar8 + 0x18)) * fVar18 +
                fVar16 * *(float *)(iVar8 + 0xf28) + *(float *)(iVar8 + 0x18);
      if (ABS(*(float *)(iVar8 + 0xf24)) <= ABS(param_1)) {
        param_1 = *(float *)(iVar8 + 0xf24);
      }
      uVar20 = *(undefined4 *)(iVar8 + 0xf28);
      if (local_28 < 1) {
        uVar20 = 0;
      }
      *(undefined4 *)(iVar8 + 0xf28) = uVar20;
      fVar16 = *(float *)(iVar8 + 0xf1c);
      if (ABS(param_1) < ABS(fVar16)) {
        param_1 = fVar16;
      }
      *(float *)(iVar8 + 0x18) = ABS(param_1);
      local_8 = *(float *)(iVar8 + 0xf24);
      if (ABS(ABS(param_1)) < ABS(fVar16)) {
        local_8 = fVar16;
      }
      *(float *)(iVar8 + 0xf24) = ABS(local_8);
      fVar16 = *(float *)(iVar8 + 0xf2c);
      fVar18 = *(float *)(iVar8 + 0x28);
      if (ABS(fVar16) < ABS(fVar19)) {
        fVar18 = *(float *)(iVar8 + 0x2c);
      }
      fVar16 = (fVar19 - fVar16) * fVar18 + fVar16;
      *(float *)(iVar8 + 0xf2c) = fVar16;
      if (fVar16 < *(float *)(iVar8 + 0x18)) {
        fVar16 = *(float *)(iVar8 + 0x18);
      }
      *(float *)(iVar8 + 0x18) = fVar16;
      fVar19 = *(float *)(iVar8 + 0xf24);
      if (local_28 < 1) {
        fVar19 = fVar16;
      }
      iVar15 = local_2c + 1;
      *(float *)(iVar8 + 0xf24) = fVar19;
      if (iVar14 <= iVar15) {
        iVar15 = 0;
      }
      iVar13 = local_2c + (int)fVar7;
      *(float *)(iVar8 + 0xf08 + iVar13 * 4) = fVar16;
      iVar13 = iVar13 - local_2c;
      fVar19 = *(float *)(iVar8 + (int)fVar7 * 4);
      fVar16 = *(float *)(iVar8 + 0xf08 + iVar13 * 4);
      iVar13 = iVar13 + 1;
      fVar18 = 0.0;
      local_10 = 0;
      if (3 < iVar14) {
        iVar10 = (iVar14 - 4U >> 2) + 1;
        local_10 = iVar10 * 4;
        pfVar11 = (float *)(iVar8 + 0xf10 + iVar13 * 4);
        iVar13 = iVar13 + local_10;
        do {
          fVar18 = *pfVar11 * fVar19 +
                   fVar16 * fVar19 + fVar18 + pfVar11[-2] * fVar19 + pfVar11[-1] * fVar19;
          fVar16 = pfVar11[1];
          pfVar11 = pfVar11 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (local_10 < iVar14) {
        local_10 = iVar14 - local_10;
        pfVar11 = (float *)(iVar8 + 0xf08 + iVar13 * 4);
        do {
          fVar18 = fVar18 + fVar16 * fVar19;
          fVar16 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      fVar19 = fVar18 * 2.0 - fVar18 * fVar18;
      fVar16 = (fVar19 * 2.0 - fVar19 * fVar19) * 599.0;
      iVar13 = (int)fVar16;
      fVar19 = *(float *)(iVar8 + 0xf34 + iVar13 * 4);
      fVar19 = (*(float *)(iVar8 + 0xf38 + iVar13 * 4) - fVar19) * (fVar16 - (float)iVar13) + fVar19
      ;
      fVar16 = fVar19;
      if (ABS(fVar19) < ABS(*(float *)(iVar8 + 0x3c))) {
        fVar16 = *(float *)(iVar8 + 0x3c);
      }
      *(float *)(iVar8 + 0x3c) = fVar16;
      fVar16 = *(float *)(iVar8 + 0x40);
      fVar18 = *(float *)(iVar8 + 0xf14);
      if (ABS(fVar16) < ABS(fVar18)) {
        fVar16 = fVar18;
      }
      *(float *)(iVar8 + 0x40) = fVar16;
      fVar18 = fVar18 * fVar19 * *(float *)(iVar8 + 0x44);
      fVar16 = *(float *)(iVar8 + 0x4c);
      if (ABS(fVar16) < ABS(fVar18)) {
        fVar16 = fVar18;
      }
      *(float *)(iVar8 + 0x4c) = fVar16;
      *param_4 = fVar18;
      fVar16 = *(float *)(iVar8 + 0x50);
      param_4 = param_4 + 1;
      fVar18 = *(float *)(iVar8 + 0xf18);
      if (ABS(fVar16) < ABS(fVar18)) {
        fVar16 = fVar18;
      }
      *(float *)(iVar8 + 0x50) = fVar16;
      fVar16 = fVar18 * fVar19 * *(float *)(iVar8 + 0x54);
      fVar19 = *(float *)(iVar8 + 0x5c);
      if (ABS(fVar19) < ABS(fVar16)) {
        fVar19 = fVar16;
      }
      *(float *)(iVar8 + 0x5c) = fVar19;
      *param_5 = fVar16;
      param_5 = param_5 + 1;
      iVar13 = iVar12;
      local_2c = iVar15;
    } while (param_6 != 0);
  }
  *pfVar2 = (float)local_28;
  *pfVar3 = (float)iVar12;
  *pfVar1 = (float)local_2c;
  return;
}

// 014339C0  FUN_014339c0  size=71  [run]
void FUN_014339c0(int param_1,undefined4 *param_2)

{
  *param_2 = 2;
  param_2[1] = *(undefined4 *)(param_1 + 0x3c);
  param_2[2] = *(float *)(param_1 + 0x40) * 3.9810717;
  param_2[3] = *(float *)(param_1 + 0x50) * 3.9810717;
  param_2[4] = *(undefined4 *)(param_1 + 0x4c);
  param_2[5] = *(undefined4 *)(param_1 + 0x5c);
  return;
}

// 01433A10  FUN_01433a10  size=44  [run]
undefined4 __fastcall FUN_01433a10(undefined4 param_1)

{
  FUN_01424b10();
  FUN_01436cc0(0x3a5ed289,0x39aa64c3);
  return param_1;
}

// 01433A40  FUN_01433a40  size=19  [run]
void FUN_01433a40(void)

{
  FUN_01436ce0();
  FUN_01424b20();
  return;
}

// 01433A70  FUN_01433a70  size=87  [run]
undefined4 __thiscall FUN_01433a70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1[1] = 2;
  *param_1 = param_3;
  iVar1 = FUN_014206d0(0x1e10);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1[2] + 0x10) = 0x443e8000;
  return 1;
}

// 01433AE0  FUN_01433ae0  size=59  [run]
void __fastcall FUN_01433ae0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 0x54) = (float)fVar2;
  *(float *)(iVar1 + 0x44) = (float)fVar2;
  return;
}

// 01433B20  FUN_01433b20  size=67  [run]
void __fastcall FUN_01433b20(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 0x54) = (float)fVar2;
  *(float *)(iVar1 + 0x44) = (float)fVar2;
  return;
}

// 01433B80  FUN_01433b80  size=45  [run]
void __thiscall FUN_01433b80(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_01436d30(*(int *)(param_1 + 8) + 0xf34,600,param_3,param_2);
  return;
}

// 01433BB0  FUN_01433bb0  size=130  [run]
void __thiscall FUN_01433bb0(undefined4 *param_1,double param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  
  dVar1 = param_2;
  dVar2 = param_2;
  switch(param_3) {
  case 0:
    dVar1 = 3.0;
    dVar2 = 0.0;
    break;
  case 1:
    dVar1 = 4.0;
    dVar2 = 0.0;
    break;
  case 2:
    dVar1 = 5.0;
    dVar2 = 0.0;
    break;
  case 3:
    dVar1 = 6.0;
    dVar2 = 0.0;
    break;
  case 4:
    dVar1 = 10.0;
    dVar2 = 0.0;
    break;
  case 5:
    dVar1 = 15.0;
    dVar2 = 0.0;
  }
  if (dVar1 < param_2) {
    param_2 = dVar1;
  }
  fVar3 = (float10)FUN_014259d0(*param_1,param_2 + dVar2);
  *(float *)(param_1[2] + 0x20) = (float)fVar3;
  return;
}

// 01433C50  FUN_01433c50  size=262  [run]
void __thiscall FUN_01433c50(undefined4 *param_1,undefined4 param_2,double param_3)

{
  double dVar1;
  float10 fVar2;
  double local_14;
  double local_c;
  
  dVar1 = param_3;
  switch(param_2) {
  case 0:
    local_14 = 800.0;
    local_c = 3.0;
    dVar1 = 50.0;
    break;
  case 1:
    local_14 = 600.0;
    local_c = 4.0;
    dVar1 = 40.0;
    break;
  case 2:
    local_14 = 400.0;
    local_c = 5.0;
    dVar1 = 30.0;
    break;
  case 3:
    local_14 = 200.0;
    local_c = 6.0;
    dVar1 = 20.0;
    break;
  case 4:
    local_14 = 100.0;
    local_c = 10.0;
    dVar1 = 10.0;
    break;
  case 5:
    local_14 = 50.0;
    local_c = 15.0;
    dVar1 = 5.0;
  }
  fVar2 = (float10)FUN_014259d0(*param_1,dVar1);
  *(float *)(param_1[2] + 0x2c) = (float)fVar2;
  param_3 = param_3 - local_c;
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  fVar2 = (float10)FUN_014259d0(*param_1,param_3 + local_14);
  *(float *)(param_1[2] + 0x28) = (float)fVar2;
  return;
}

// 01433D70  FUN_01433d70  size=66  [run]
void __fastcall FUN_01433d70(int *param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436cf0(dVar1);
  fVar3 = (float10)FUN_014323a0((double)iVar2);
  *(float *)(param_1[2] + 0x24) = (float)fVar3;
  return;
}

// 01433DC0  FUN_01433dc0  size=56  [run]
void __fastcall FUN_01433dc0(int *param_1)

{
  double dVar1;
  int iVar2;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436e80(dVar1);
  *(float *)(param_1[2] + 0x1c) = (float)(iVar2 + 1);
  return;
}

// 01433E00  FUN_01433e00  size=204  [run]
void __fastcall FUN_01433e00(int *param_1)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  *(undefined4 *)(param_1[2] + 0xc) = 0x4418c000;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436e80(dVar1);
  *(float *)(param_1[2] + 8) = (float)iVar2;
  *(undefined4 *)(param_1[2] + 0x30) = 0x44644000;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436d10(dVar1);
  *(float *)(param_1[2] + 0x34) = (float)iVar2;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436d10(dVar1);
  fVar4 = (float)iVar2;
  if (0 < iVar2) {
    pfVar3 = (float *)(param_1[2] + 0xe44);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = 1.0 / fVar4;
      pfVar3 = pfVar3 + 1;
    }
  }
  return;
}

// 01433ED0  FUN_01433ed0  size=38  [run]
void __fastcall FUN_01433ed0(int *param_1)

{
  double dVar1;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_01436e80(dVar1);
  return;
}

// 01433F00  FUN_01433f00  size=73  [run]
void __thiscall FUN_01433f00(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = 2;
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  param_2[2] = *(float *)(iVar1 + 0x40) * 3.9810717;
  param_2[3] = *(float *)(iVar1 + 0x50) * 3.9810717;
  param_2[4] = *(undefined4 *)(iVar1 + 0x4c);
  param_2[5] = *(undefined4 *)(iVar1 + 0x5c);
  return;
}

// 01433F50  FUN_01433f50  size=9  [run]
void __fastcall FUN_01433f50(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 01433F60  FUN_01433f60  size=1  [run]
void FUN_01433f60(void)

{
  return;
}

// 01433F70  FUN_01433f70  size=6  [run]
undefined4 FUN_01433f70(void)

{
  return 0x1e10;
}

// 01433F80  FUN_01433f80  size=155  [run]
undefined4 __thiscall FUN_01433f80(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 4))(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_01424b10();
    FUN_01436cc0(0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 2;
    *puVar1 = param_4;
    iVar2 = FUN_014206d0(0x1e10);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
      *(undefined4 *)(puVar1[2] + 0x10) = 0x443e8000;
      return 1;
    }
  }
  return 0x34;
}

// 01434020  FUN_01434020  size=341  [run]
void __thiscall
FUN_01434020(int *param_1,undefined4 param_2,undefined4 param_3,double param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  double local_c;
  
  local_c = param_4 - 12.0;
  if (local_c < -36.0) {
    local_c = -36.0;
  }
  iVar4 = *param_1;
  fVar5 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(iVar4 + 8);
  *(float *)(iVar1 + 0x54) = (float)fVar5;
  *(float *)(iVar1 + 0x44) = (float)fVar5;
  fVar5 = (float10)FUN_00fdc1f0();
  iVar4 = *(int *)(iVar4 + 8);
  *(float *)(iVar4 + 0x54) = (float)fVar5;
  *(float *)(iVar4 + 0x44) = (float)fVar5;
  FUN_01436d30(iVar4 + 0xf34,600,SUB84(local_c,0),(int)((ulonglong)local_c >> 0x20),(int)param_5,
               (int)((ulonglong)param_5 >> 0x20));
  piVar2 = (int *)*param_1;
  dVar3 = (double)*piVar2;
  if (*piVar2 < 0) {
    dVar3 = dVar3 + 4294967296.0;
  }
  iVar4 = FUN_01436cf0(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
  fVar5 = (float10)FUN_014323a0((double)iVar4);
  *(float *)(piVar2[2] + 0x24) = (float)fVar5;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  FUN_01433bb0((int)param_6,uVar6,param_7);
  FUN_01433c50(param_7,(int)param_6,uVar6);
  param_1 = (int *)*param_1;
  dVar3 = (double)*param_1;
  if (*param_1 < 0) {
    dVar3 = dVar3 + 4294967296.0;
  }
  iVar4 = FUN_01436e80(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
  *(float *)(param_1[2] + 0x1c) = (float)(iVar4 + 1);
  FUN_01433e00();
  return;
}

// 01434180  FUN_01434180  size=40  [run]
void __fastcall FUN_01434180(undefined4 *param_1)

{
  double dVar1;
  
  dVar1 = (double)*(int *)*param_1;
  if (*(int *)*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_01436e80(dVar1);
  return;
}

// 014341B0  FUN_014341b0  size=75  [run]
void __thiscall FUN_014341b0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 8);
  *param_2 = 2;
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  param_2[2] = *(float *)(iVar1 + 0x40) * 3.9810717;
  param_2[3] = *(float *)(iVar1 + 0x50) * 3.9810717;
  param_2[4] = *(undefined4 *)(iVar1 + 0x4c);
  param_2[5] = *(undefined4 *)(iVar1 + 0x5c);
  return;
}

// 01434200  FUN_01434200  size=56  [run]
void FUN_01434200(undefined4 param_1,int *param_2,int *param_3)

{
  FUN_014332e0(param_1,*param_2,*param_2 + (uint)*(ushort *)(param_2 + 3) * 4,*param_3,
               *param_3 + (uint)*(ushort *)(param_3 + 3) * 4,*(undefined2 *)((int)param_2 + 0xe));
  return;
}

// 01434240  FUN_01434240  size=51  [run]
void __thiscall FUN_01434240(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_01436ce0();
    FUN_01424b20();
    (**(code **)(*param_2 + 8))(iVar1);
  }
  *param_1 = 0;
  return;
}

// 01434280  FUN_01434280  size=17  [run]
void FUN_01434280(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 014342A0  FUN_014342a0  size=43  [run]
undefined4 __thiscall FUN_014342a0(undefined4 param_1,byte param_2)

{
  FUN_01436ce0();
  FUN_01424b20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 014342D0  FUN_014342d0  size=40  [run]
void FUN_014342d0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01436ce0();
    FUN_01424b20();
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01434320  FUN_01434320  size=20  [run]
void FUN_01434320(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01434340  FUN_01434340  size=20  [run]
void FUN_01434340(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01434360  FUN_01434360  size=20  [run]
void FUN_01434360(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01434380  FUN_01434380  size=1432  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01434380(float param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_10;
  float local_8;
  
  iVar7 = (int)param_1;
  iVar8 = (int)*(float *)((int)param_1 + 4);
  fVar4 = *(float *)((int)param_1 + 8);
  iVar14 = (int)*(float *)((int)param_1 + 0xcb0);
  pfVar2 = (float *)((int)param_1 + 0xcb0);
  fVar5 = *(float *)((int)param_1 + 0x14);
  fVar6 = *(float *)((int)param_1 + 0x28);
  iVar15 = (int)*(float *)((int)param_1 + 0x2c);
  pfVar3 = (float *)((int)param_1 + 0xca8);
  pfVar1 = (float *)((int)param_1 + 0x30);
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  iVar10 = (int)*(float *)((int)param_1 + 0xca8);
  iVar13 = (int)*pfVar1;
  while (param_4 != 0) {
    fVar17 = *param_2 * _DAT_01b321f4;
    param_4 = param_4 + -1;
    param_2 = param_2 + 1;
    if (fVar17 < 1.0) {
      if (fVar17 <= -1.0) {
        fVar17 = -1.0;
      }
    }
    else {
      fVar17 = 1.0;
    }
    iVar16 = iVar10 + 1;
    if (iVar8 <= iVar16) {
      iVar16 = 0;
    }
    iVar9 = (int)fVar4 + iVar10;
    fVar19 = *(float *)(iVar7 + 0xca4 + iVar9 * 4);
    *(float *)(iVar7 + 0xca4 + iVar9 * 4) = fVar17;
    pfVar12 = (float *)(iVar7 + 0xcac);
    pfVar11 = (float *)(iVar7 + 0xca4 + (iVar9 - iVar10) * 4);
    iVar10 = 0;
    fVar18 = 0.0;
    *pfVar12 = fVar19;
    param_1 = 0.0;
    if (3 < iVar8) {
      iVar9 = (iVar8 - 4U >> 2) + 1;
      iVar10 = iVar9 * 4;
      do {
        fVar19 = *pfVar11;
        if (ABS(param_1) < ABS(fVar19)) {
          fVar18 = fVar19;
          param_1 = fVar19;
        }
        fVar19 = pfVar11[1];
        if (ABS(param_1) < ABS(fVar19)) {
          fVar18 = fVar19;
          param_1 = fVar19;
        }
        fVar19 = pfVar11[2];
        if (ABS(param_1) < ABS(fVar19)) {
          fVar18 = fVar19;
          param_1 = fVar19;
        }
        fVar19 = pfVar11[3];
        if (ABS(param_1) < ABS(fVar19)) {
          fVar18 = fVar19;
          param_1 = fVar19;
        }
        pfVar11 = pfVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (iVar10 < iVar8) {
      iVar10 = iVar8 - iVar10;
      do {
        fVar19 = *pfVar11;
        if (ABS(param_1) < ABS(fVar19)) {
          fVar18 = fVar19;
          param_1 = fVar19;
        }
        pfVar11 = pfVar11 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    fVar17 = ABS(fVar17);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (ABS(*(float *)(iVar7 + 0xc)) <= ABS(fVar17)) {
      fVar17 = *(float *)(iVar7 + 0xc);
    }
    fVar19 = *(float *)(iVar7 + 0xcb4);
    if (ABS(*(float *)(iVar7 + 0xcb4)) < ABS(fVar17)) {
      iVar14 = (int)fVar5;
      fVar19 = fVar17;
    }
    *(float *)(iVar7 + 0xcb4) = ABS(fVar19);
    fVar17 = ABS(fVar19) - *(float *)(iVar7 + 0x10);
    if (ABS(fVar17) < ABS(*(float *)(iVar7 + 0xcb8))) {
      fVar17 = *(float *)(iVar7 + 0xcb8);
    }
    iVar14 = iVar14 + -1;
    *(float *)(iVar7 + 0xcb8) = fVar17;
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    fVar17 = *(float *)(iVar7 + 0x1c);
    fVar19 = 0.0;
    if (iVar14 < 1) {
      fVar17 = 0.0;
      fVar19 = *(float *)(iVar7 + 0x18);
    }
    fVar18 = ABS(fVar18);
    param_1 = (fVar18 - *(float *)(iVar7 + 0x10)) * fVar19 +
              fVar17 * *(float *)(iVar7 + 0xcb8) + *(float *)(iVar7 + 0x10);
    if (ABS(*(float *)(iVar7 + 0xcb4)) <= ABS(param_1)) {
      param_1 = *(float *)(iVar7 + 0xcb4);
    }
    fVar17 = *(float *)(iVar7 + 0xcb8);
    if (iVar14 < 1) {
      fVar17 = (float)iVar14;
    }
    *(float *)(iVar7 + 0xcb8) = fVar17;
    fVar17 = *pfVar12;
    if (ABS(param_1) < ABS(fVar17)) {
      param_1 = fVar17;
    }
    *(float *)(iVar7 + 0x10) = ABS(param_1);
    local_8 = *(float *)(iVar7 + 0xcb4);
    if (ABS(ABS(param_1)) < ABS(fVar17)) {
      local_8 = fVar17;
    }
    *(float *)(iVar7 + 0xcb4) = ABS(local_8);
    fVar17 = *(float *)(iVar7 + 0xcbc);
    fVar19 = *(float *)(iVar7 + 0x20);
    if (ABS(fVar17) < ABS(fVar18)) {
      fVar19 = *(float *)(iVar7 + 0x24);
    }
    fVar17 = (fVar18 - fVar17) * fVar19 + fVar17;
    *(float *)(iVar7 + 0xcbc) = fVar17;
    if (fVar17 < *(float *)(iVar7 + 0x10)) {
      fVar17 = *(float *)(iVar7 + 0x10);
    }
    *(float *)(iVar7 + 0x10) = fVar17;
    fVar19 = *(float *)(iVar7 + 0xcb4);
    if (iVar14 < 1) {
      fVar19 = fVar17;
    }
    iVar9 = iVar13 + 1;
    *(float *)(iVar7 + 0xcb4) = fVar19;
    if (iVar15 <= iVar9) {
      iVar9 = 0;
    }
    iVar10 = iVar13 + (int)fVar6;
    *(float *)(iVar7 + 0xca4 + iVar10 * 4) = fVar17;
    iVar10 = iVar10 - iVar13;
    fVar17 = *(float *)(iVar7 + (int)fVar6 * 4);
    fVar19 = *(float *)(iVar7 + 0xca4 + iVar10 * 4);
    iVar10 = iVar10 + 1;
    fVar18 = 0.0;
    local_10 = 0;
    if (3 < iVar15) {
      iVar13 = (iVar15 - 4U >> 2) + 1;
      local_10 = iVar13 * 4;
      pfVar11 = (float *)(iVar7 + 0xcac + iVar10 * 4);
      iVar10 = iVar10 + local_10;
      do {
        fVar18 = *pfVar11 * fVar17 +
                 fVar19 * fVar17 + fVar18 + pfVar11[-2] * fVar17 + pfVar11[-1] * fVar17;
        fVar19 = pfVar11[1];
        pfVar11 = pfVar11 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    if (local_10 < iVar15) {
      local_10 = iVar15 - local_10;
      pfVar11 = (float *)(iVar7 + 0xca4 + iVar10 * 4);
      do {
        fVar18 = fVar18 + fVar19 * fVar17;
        fVar19 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    fVar17 = fVar18 * 2.0 - fVar18 * fVar18;
    fVar19 = (fVar17 * 2.0 - fVar17 * fVar17) * 599.0;
    iVar10 = (int)fVar19;
    fVar17 = *(float *)(iVar7 + 0xcc4 + iVar10 * 4);
    fVar17 = (*(float *)(iVar7 + 0xcc8 + iVar10 * 4) - fVar17) * (fVar19 - (float)iVar10) + fVar17;
    fVar19 = fVar17;
    if (ABS(fVar17) < ABS(*(float *)(iVar7 + 0x34))) {
      fVar19 = *(float *)(iVar7 + 0x34);
    }
    *(float *)(iVar7 + 0x34) = fVar19;
    fVar19 = *(float *)(iVar7 + 0x38);
    fVar18 = *pfVar12;
    if (ABS(fVar19) < ABS(fVar18)) {
      fVar19 = fVar18;
    }
    *(float *)(iVar7 + 0x38) = fVar19;
    fVar19 = fVar18 * fVar17 * *(float *)(iVar7 + 0x3c);
    fVar17 = *(float *)(iVar7 + 0x44);
    if (ABS(fVar17) < ABS(fVar19)) {
      fVar17 = fVar19;
    }
    *(float *)(iVar7 + 0x44) = fVar17;
    *param_3 = fVar19;
    param_3 = param_3 + 1;
    iVar10 = iVar16;
    iVar13 = iVar9;
  }
  *pfVar2 = (float)iVar14;
  *pfVar3 = (float)iVar10;
  *pfVar1 = (float)iVar13;
  return;
}

// 01434920  FUN_01434920  size=47  [run]
void FUN_01434920(int param_1,undefined4 *param_2)

{
  *param_2 = 1;
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  param_2[2] = *(float *)(param_1 + 0x38) * 3.9810717;
  param_2[3] = *(undefined4 *)(param_1 + 0x44);
  return;
}

// 01434950  FUN_01434950  size=44  [run]
undefined4 __fastcall FUN_01434950(undefined4 param_1)

{
  FUN_01424b10();
  FUN_01436cc0(0x3a5ed289,0x39aa64c3);
  return param_1;
}

// 01434980  FUN_01434980  size=19  [run]
void FUN_01434980(void)

{
  FUN_01436ce0();
  FUN_01424b20();
  return;
}

// 014349B0  FUN_014349b0  size=70  [run]
undefined4 __thiscall FUN_014349b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1[1] = 1;
  *param_1 = param_3;
  iVar1 = FUN_014206d0(0x1948);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0x3f800000;
  return 1;
}

// 01434A10  FUN_01434a10  size=56  [run]
void __fastcall FUN_01434a10(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(*(int *)(param_1 + 8) + 0x3c) = (float)fVar1;
  return;
}

// 01434A50  FUN_01434a50  size=64  [run]
void __fastcall FUN_01434a50(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(*(int *)(param_1 + 8) + 0x3c) = (float)fVar1;
  return;
}

// 01434AA0  FUN_01434aa0  size=45  [run]
void __thiscall FUN_01434aa0(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_01436d30(*(int *)(param_1 + 8) + 0xcc4,600,param_3,param_2);
  return;
}

// 01434AD0  FUN_01434ad0  size=130  [run]
void __thiscall FUN_01434ad0(undefined4 *param_1,double param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  
  dVar1 = param_2;
  dVar2 = param_2;
  switch(param_3) {
  case 0:
    dVar1 = 3.0;
    dVar2 = 0.0;
    break;
  case 1:
    dVar1 = 4.0;
    dVar2 = 0.0;
    break;
  case 2:
    dVar1 = 5.0;
    dVar2 = 0.0;
    break;
  case 3:
    dVar1 = 6.0;
    dVar2 = 0.0;
    break;
  case 4:
    dVar1 = 10.0;
    dVar2 = 0.0;
    break;
  case 5:
    dVar1 = 15.0;
    dVar2 = 0.0;
  }
  if (dVar1 < param_2) {
    param_2 = dVar1;
  }
  fVar3 = (float10)FUN_014259d0(*param_1,param_2 + dVar2);
  *(float *)(param_1[2] + 0x18) = (float)fVar3;
  return;
}

// 01434B70  FUN_01434b70  size=262  [run]
void __thiscall FUN_01434b70(undefined4 *param_1,undefined4 param_2,double param_3)

{
  double dVar1;
  float10 fVar2;
  double local_14;
  double local_c;
  
  dVar1 = param_3;
  switch(param_2) {
  case 0:
    local_14 = 800.0;
    local_c = 3.0;
    dVar1 = 50.0;
    break;
  case 1:
    local_14 = 600.0;
    local_c = 4.0;
    dVar1 = 40.0;
    break;
  case 2:
    local_14 = 400.0;
    local_c = 5.0;
    dVar1 = 30.0;
    break;
  case 3:
    local_14 = 200.0;
    local_c = 6.0;
    dVar1 = 20.0;
    break;
  case 4:
    local_14 = 100.0;
    local_c = 10.0;
    dVar1 = 10.0;
    break;
  case 5:
    local_14 = 50.0;
    local_c = 15.0;
    dVar1 = 5.0;
  }
  fVar2 = (float10)FUN_014259a0(*param_1,dVar1);
  *(float *)(param_1[2] + 0x24) = (float)fVar2;
  param_3 = param_3 - local_c;
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  fVar2 = (float10)FUN_014259d0(*param_1,param_3 + local_14);
  *(float *)(param_1[2] + 0x20) = (float)fVar2;
  return;
}

// 01434C90  FUN_01434c90  size=66  [run]
void __fastcall FUN_01434c90(int *param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436cf0(dVar1);
  fVar3 = (float10)FUN_014323a0((double)iVar2);
  *(float *)(param_1[2] + 0x1c) = (float)fVar3;
  return;
}

// 01434CE0  FUN_01434ce0  size=56  [run]
void __fastcall FUN_01434ce0(int *param_1)

{
  double dVar1;
  int iVar2;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436e80(dVar1);
  *(float *)(param_1[2] + 0x14) = (float)(iVar2 + 1);
  return;
}

// 01434D20  FUN_01434d20  size=204  [run]
void __fastcall FUN_01434d20(int *param_1)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  *(undefined4 *)(param_1[2] + 8) = 0x44180000;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436e80(dVar1);
  *(float *)(param_1[2] + 4) = (float)iVar2;
  *(undefined4 *)(param_1[2] + 0x28) = 0x443dc000;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436d10(dVar1);
  *(float *)(param_1[2] + 0x2c) = (float)iVar2;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436d10(dVar1);
  fVar4 = (float)iVar2;
  if (0 < iVar2) {
    pfVar3 = (float *)(param_1[2] + 0xbdc);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = 1.0 / fVar4;
      pfVar3 = pfVar3 + 1;
    }
  }
  return;
}

// 01434DF0  FUN_01434df0  size=38  [run]
void __fastcall FUN_01434df0(int *param_1)

{
  double dVar1;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_01436e80(dVar1);
  return;
}

// 01434E20  FUN_01434e20  size=49  [run]
void __thiscall FUN_01434e20(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = 1;
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  param_2[2] = *(float *)(iVar1 + 0x38) * 3.9810717;
  param_2[3] = *(undefined4 *)(iVar1 + 0x44);
  return;
}

// 01434E60  FUN_01434e60  size=9  [run]
void __fastcall FUN_01434e60(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 01434E70  FUN_01434e70  size=1  [run]
void FUN_01434e70(void)

{
  return;
}

// 01434E80  FUN_01434e80  size=6  [run]
undefined4 FUN_01434e80(void)

{
  return 0x1948;
}

// 01434E90  FUN_01434e90  size=139  [run]
undefined4 __thiscall FUN_01434e90(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 4))(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_01424b10();
    FUN_01436cc0(0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = param_4;
    iVar2 = FUN_014206d0(0x1948);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xc) = 0x3f800000;
      return 1;
    }
  }
  return 0x34;
}

// 01434F20  FUN_01434f20  size=323  [run]
void __thiscall FUN_01434f20(int *param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  double local_c;
  
  local_c = *(double *)(param_2 + 8) - 12.0;
  if (local_c < -36.0) {
    local_c = -36.0;
  }
  iVar3 = *param_1;
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(*(int *)(iVar3 + 8) + 0x3c) = (float)fVar4;
  fVar4 = (float10)FUN_00fdc1f0();
  iVar3 = *(int *)(iVar3 + 8);
  *(float *)(iVar3 + 0x3c) = (float)fVar4;
  FUN_01436d30(iVar3 + 0xcc4,600,SUB84(local_c,0),(int)((ulonglong)local_c >> 0x20),
               (int)*(undefined8 *)(param_2 + 0x10),
               (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20));
  piVar1 = (int *)*param_1;
  dVar2 = (double)*piVar1;
  if (*piVar1 < 0) {
    dVar2 = dVar2 + 4294967296.0;
  }
  iVar3 = FUN_01436cf0(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  fVar4 = (float10)FUN_014323a0((double)iVar3);
  *(float *)(piVar1[2] + 0x1c) = (float)fVar4;
  FUN_01434ad0((int)*(undefined8 *)(param_2 + 0x18),
               (int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20),
               *(undefined4 *)(param_2 + 0x20));
  FUN_01434b70(*(undefined4 *)(param_2 + 0x20),(int)*(undefined8 *)(param_2 + 0x18),
               (int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20));
  param_1 = (int *)*param_1;
  dVar2 = (double)*param_1;
  if (*param_1 < 0) {
    dVar2 = dVar2 + 4294967296.0;
  }
  iVar3 = FUN_01436e80(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  *(float *)(param_1[2] + 0x14) = (float)(iVar3 + 1);
  FUN_01434d20();
  return;
}

// 01435070  FUN_01435070  size=40  [run]
void __fastcall FUN_01435070(undefined4 *param_1)

{
  double dVar1;
  
  dVar1 = (double)*(int *)*param_1;
  if (*(int *)*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_01436e80(dVar1);
  return;
}

// 014350A0  FUN_014350a0  size=51  [run]
void __thiscall FUN_014350a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 8);
  *param_2 = 1;
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  param_2[2] = *(float *)(iVar1 + 0x38) * 3.9810717;
  param_2[3] = *(undefined4 *)(iVar1 + 0x44);
  return;
}

// 014350E0  FUN_014350e0  size=36  [run]
void FUN_014350e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_01434380(param_1,*param_2,*param_3,*(undefined2 *)((int)param_2 + 0xe));
  return;
}

// 01435110  FUN_01435110  size=51  [run]
void __thiscall FUN_01435110(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_01436ce0();
    FUN_01424b20();
    (**(code **)(*param_2 + 8))(iVar1);
  }
  *param_1 = 0;
  return;
}

// 01435150  FUN_01435150  size=17  [run]
void FUN_01435150(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 01435170  FUN_01435170  size=43  [run]
undefined4 __thiscall FUN_01435170(undefined4 param_1,byte param_2)

{
  FUN_01436ce0();
  FUN_01424b20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 014351A0  FUN_014351a0  size=40  [run]
void FUN_014351a0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01436ce0();
    FUN_01424b20();
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 014351F0  FUN_014351f0  size=20  [run]
void FUN_014351f0(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01435210  FUN_01435210  size=20  [run]
void FUN_01435210(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01435230  FUN_01435230  size=20  [run]
void FUN_01435230(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01435250  FUN_01435250  size=3090  [run]
void FUN_01435250(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11,float *param_12,float *param_13,int param_14)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float *local_10;
  int local_c;
  float local_8;
  
  iVar11 = (int)param_1;
  fVar4 = *(float *)((int)param_1 + 0x1c);
  iVar13 = (int)*(float *)((int)param_1 + 0x18);
  fVar5 = *(float *)((int)param_1 + 0x20);
  iVar19 = (int)*(float *)((int)param_1 + 0x1418);
  pfVar2 = (float *)((int)param_1 + 0x1418);
  fVar6 = *(float *)((int)param_1 + 0x2c);
  fVar7 = *(float *)((int)param_1 + 0x40);
  iVar20 = (int)*(float *)((int)param_1 + 0x44);
  pfVar3 = (float *)((int)param_1 + 0x13f8);
  pfVar1 = (float *)((int)param_1 + 0x48);
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  fVar10 = DAT_01b321fc;
  iVar18 = (int)*(float *)((int)param_1 + 0x48);
  iVar14 = (int)*pfVar3;
  while (param_14 != 0) {
    fVar21 = *param_2;
    param_14 = param_14 + -1;
    param_2 = param_2 + 1;
    fVar23 = *param_3;
    param_3 = param_3 + 1;
    fVar21 = fVar21 * fVar10;
    fVar23 = fVar23 * fVar10;
    if (fVar21 < 1.0) {
      if (fVar21 <= -1.0) {
        fVar21 = -1.0;
      }
    }
    else {
      fVar21 = 1.0;
    }
    if (fVar23 < 1.0) {
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
    }
    else {
      fVar23 = 1.0;
    }
    *(float *)(iVar11 + 0x13e0) = fVar21;
    *(float *)(iVar11 + 0x13e4) = fVar23;
    fVar21 = *param_4;
    param_4 = param_4 + 1;
    fVar23 = *param_5;
    param_5 = param_5 + 1;
    fVar21 = fVar21 * fVar10;
    fVar23 = fVar23 * fVar10;
    if (fVar21 < 1.0) {
      if (fVar21 <= -1.0) {
        fVar21 = -1.0;
      }
    }
    else {
      fVar21 = 1.0;
    }
    if (fVar23 < 1.0) {
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
    }
    else {
      fVar23 = 1.0;
    }
    *(float *)(iVar11 + 0x13e8) = fVar21;
    *(float *)(iVar11 + 0x13ec) = fVar23;
    fVar21 = *param_6;
    param_6 = param_6 + 1;
    fVar23 = fVar10 * *param_7;
    param_7 = param_7 + 1;
    fVar21 = fVar21 * fVar10;
    if (fVar21 < 1.0) {
      if (fVar21 <= -1.0) {
        fVar21 = -1.0;
      }
    }
    else {
      fVar21 = 1.0;
    }
    if (fVar23 < 1.0) {
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
    }
    else {
      fVar23 = 1.0;
    }
    param_1 = (float)(iVar14 + 1);
    *(float *)(iVar11 + 0x13f0) = fVar21;
    *(float *)(iVar11 + 0x13f4) = fVar23;
    fVar21 = *(float *)(iVar11 + 0x18);
    if (iVar13 <= (int)param_1) {
      param_1 = 0.0;
    }
    iVar12 = (int)param_1;
    iVar16 = (int)fVar4 + iVar14;
    iVar17 = (int)fVar5 + iVar14;
    uVar24 = *(undefined4 *)(iVar11 + iVar16 * 4);
    *(undefined4 *)(iVar11 + iVar16 * 4) = *(undefined4 *)(iVar11 + 0x13e0);
    uVar8 = *(undefined4 *)(iVar11 + 0x13e0 + iVar16 * 4);
    *(undefined4 *)(iVar11 + 0x13e0 + iVar16 * 4) = *(undefined4 *)(iVar11 + 0x13e4);
    *(undefined4 *)(iVar11 + 0x13fc) = uVar24;
    *(undefined4 *)(iVar11 + 0x1400) = uVar8;
    iVar16 = iVar16 + 1 + (int)fVar21;
    iVar9 = iVar16 * 4;
    uVar24 = *(undefined4 *)(iVar9 + iVar11);
    *(undefined4 *)(iVar9 + iVar11) = *(undefined4 *)(iVar11 + 0x13e8);
    uVar8 = *(undefined4 *)(iVar9 + 0x13e0 + iVar11);
    *(undefined4 *)(iVar9 + 0x13e0 + iVar11) = *(undefined4 *)(iVar11 + 0x13ec);
    *(undefined4 *)(iVar11 + 0x1404) = uVar24;
    *(undefined4 *)(iVar11 + 0x1408) = uVar8;
    iVar16 = (iVar16 + 1 + (int)fVar21) * 4;
    uVar24 = *(undefined4 *)(iVar16 + iVar11);
    *(undefined4 *)(iVar16 + iVar11) = *(undefined4 *)(iVar11 + 0x13f0);
    uVar8 = *(undefined4 *)(iVar16 + 0x13e0 + iVar11);
    *(undefined4 *)(iVar16 + 0x13e0 + iVar11) = *(undefined4 *)(iVar11 + 0x13f4);
    *(undefined4 *)(iVar11 + 0x140c) = uVar24;
    *(undefined4 *)(iVar11 + 0x1410) = uVar8;
    fVar21 = *(float *)(iVar11 + 0x13e4);
    if (ABS(fVar21) < ABS(*(float *)(iVar11 + 0x13e0))) {
      fVar21 = *(float *)(iVar11 + 0x13e0);
    }
    if (ABS(fVar21) < ABS(*(float *)(iVar11 + 0x13e8))) {
      fVar21 = *(float *)(iVar11 + 0x13e8);
    }
    if (ABS(fVar21) < ABS(*(float *)(iVar11 + 0x13ec))) {
      fVar21 = *(float *)(iVar11 + 0x13ec);
    }
    if (ABS(fVar21) < ABS(*(float *)(iVar11 + 0x13f0))) {
      fVar21 = *(float *)(iVar11 + 0x13f0);
    }
    if (ABS(fVar21) < ABS(*(float *)(iVar11 + 0x13f4))) {
      fVar21 = *(float *)(iVar11 + 0x13f4);
    }
    fVar23 = *(float *)(iVar11 + 0x13fc);
    fVar22 = *(float *)(iVar11 + 0x1400);
    if (ABS(fVar22) < ABS(fVar23)) {
      fVar22 = fVar23;
    }
    if (ABS(fVar22) < ABS(*(float *)(iVar11 + 0x1404))) {
      fVar22 = *(float *)(iVar11 + 0x1404);
    }
    if (ABS(fVar22) < ABS(*(float *)(iVar11 + 0x1408))) {
      fVar22 = *(float *)(iVar11 + 0x1408);
    }
    if (ABS(fVar22) < ABS(*(float *)(iVar11 + 0x140c))) {
      fVar22 = *(float *)(iVar11 + 0x140c);
    }
    if (ABS(fVar22) < ABS(*(float *)(iVar11 + 0x1410))) {
      fVar22 = *(float *)(iVar11 + 0x1410);
    }
    *(float *)(iVar11 + 0x1414) = fVar22;
    *(float *)(iVar11 + 0x13e0 + iVar17 * 4) = fVar21;
    fVar21 = 0.0;
    local_10 = (float *)(iVar11 + 0x13e0 + (iVar17 - iVar14) * 4);
    iVar14 = 0;
    param_1 = 0.0;
    if (3 < iVar13) {
      iVar16 = (iVar13 - 4U >> 2) + 1;
      iVar14 = iVar16 * 4;
      do {
        fVar23 = *local_10;
        if (ABS(param_1) < ABS(fVar23)) {
          fVar21 = fVar23;
          param_1 = fVar23;
        }
        fVar23 = local_10[1];
        if (ABS(param_1) < ABS(fVar23)) {
          fVar21 = fVar23;
          param_1 = fVar23;
        }
        fVar23 = local_10[2];
        if (ABS(param_1) < ABS(fVar23)) {
          fVar21 = fVar23;
          param_1 = fVar23;
        }
        fVar23 = local_10[3];
        if (ABS(param_1) < ABS(fVar23)) {
          fVar21 = fVar23;
          param_1 = fVar23;
        }
        local_10 = local_10 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    if (iVar14 < iVar13) {
      iVar14 = iVar13 - iVar14;
      do {
        fVar23 = *local_10;
        if (ABS(param_1) < ABS(fVar23)) {
          fVar21 = fVar23;
          param_1 = fVar23;
        }
        local_10 = local_10 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    local_8 = ABS(*(float *)(iVar11 + 0x13e0));
    if (ABS(*(float *)(iVar11 + 0x13e0)) < ABS(*(float *)(iVar11 + 0x13e4))) {
      local_8 = ABS(*(float *)(iVar11 + 0x13e4));
    }
    if (local_8 < ABS(*(float *)(iVar11 + 0x13e8))) {
      local_8 = ABS(*(float *)(iVar11 + 0x13e8));
    }
    if (local_8 < ABS(*(float *)(iVar11 + 0x13ec))) {
      local_8 = ABS(*(float *)(iVar11 + 0x13ec));
    }
    if (local_8 < ABS(*(float *)(iVar11 + 0x13f0))) {
      local_8 = ABS(*(float *)(iVar11 + 0x13f0));
    }
    if (local_8 < ABS(*(float *)(iVar11 + 0x13f4))) {
      local_8 = ABS(*(float *)(iVar11 + 0x13f4));
    }
    if (1.0 <= local_8) {
      local_8 = 1.0;
    }
    if (ABS(*(float *)(iVar11 + 0x24)) <= ABS(local_8)) {
      local_8 = *(float *)(iVar11 + 0x24);
    }
    fVar23 = *(float *)(iVar11 + 0x141c);
    if (ABS(*(float *)(iVar11 + 0x141c)) < ABS(local_8)) {
      iVar19 = (int)fVar6;
      fVar23 = local_8;
    }
    *(float *)(iVar11 + 0x141c) = ABS(fVar23);
    fVar23 = ABS(fVar23) - *(float *)(iVar11 + 0x28);
    if (ABS(fVar23) < ABS(*(float *)(iVar11 + 0x1420))) {
      fVar23 = *(float *)(iVar11 + 0x1420);
    }
    iVar19 = iVar19 + -1;
    *(float *)(iVar11 + 0x1420) = fVar23;
    if (iVar19 < 0) {
      iVar19 = 0;
    }
    fVar23 = *(float *)(iVar11 + 0x34);
    fVar22 = 0.0;
    if (iVar19 < 1) {
      fVar23 = 0.0;
      fVar22 = *(float *)(iVar11 + 0x30);
    }
    fVar21 = ABS(fVar21);
    param_1 = (fVar21 - *(float *)(iVar11 + 0x28)) * fVar22 +
              fVar23 * *(float *)(iVar11 + 0x1420) + *(float *)(iVar11 + 0x28);
    if (ABS(*(float *)(iVar11 + 0x141c)) <= ABS(param_1)) {
      param_1 = *(float *)(iVar11 + 0x141c);
    }
    uVar24 = *(undefined4 *)(iVar11 + 0x1420);
    if (iVar19 < 1) {
      uVar24 = 0;
    }
    *(undefined4 *)(iVar11 + 0x1420) = uVar24;
    fVar23 = *(float *)(iVar11 + 0x1414);
    if (ABS(param_1) < ABS(fVar23)) {
      param_1 = fVar23;
    }
    *(float *)(iVar11 + 0x28) = ABS(param_1);
    local_8 = *(float *)(iVar11 + 0x141c);
    if (ABS(ABS(param_1)) < ABS(fVar23)) {
      local_8 = fVar23;
    }
    *(float *)(iVar11 + 0x141c) = ABS(local_8);
    fVar23 = *(float *)(iVar11 + 0x1424);
    fVar22 = *(float *)(iVar11 + 0x38);
    if (ABS(fVar23) < ABS(fVar21)) {
      fVar22 = *(float *)(iVar11 + 0x3c);
    }
    fVar23 = (fVar21 - fVar23) * fVar22 + fVar23;
    *(float *)(iVar11 + 0x1424) = fVar23;
    if (fVar23 < *(float *)(iVar11 + 0x28)) {
      fVar23 = *(float *)(iVar11 + 0x28);
    }
    *(float *)(iVar11 + 0x28) = fVar23;
    fVar21 = *(float *)(iVar11 + 0x141c);
    if (iVar19 < 1) {
      fVar21 = fVar23;
    }
    param_1 = (float)(iVar18 + 1);
    *(float *)(iVar11 + 0x141c) = fVar21;
    if (iVar20 <= (int)param_1) {
      param_1 = 0.0;
    }
    iVar14 = iVar18 + (int)fVar7;
    *(float *)(iVar11 + 0x13e0 + iVar14 * 4) = fVar23;
    iVar14 = iVar14 - iVar18;
    fVar23 = *(float *)(iVar11 + 0x13e0 + iVar14 * 4);
    fVar21 = *(float *)(iVar11 + (int)fVar7 * 4);
    iVar14 = iVar14 + 1;
    fVar22 = 0.0;
    local_c = 0;
    if (3 < iVar20) {
      iVar18 = (iVar20 - 4U >> 2) + 1;
      local_c = iVar18 * 4;
      pfVar15 = (float *)(iVar11 + 0x13e8 + iVar14 * 4);
      iVar14 = iVar14 + local_c;
      do {
        fVar22 = *pfVar15 * fVar21 +
                 pfVar15[-1] * fVar21 + pfVar15[-2] * fVar21 + fVar23 * fVar21 + fVar22;
        fVar23 = pfVar15[1];
        pfVar15 = pfVar15 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    if (local_c < iVar20) {
      local_c = iVar20 - local_c;
      pfVar15 = (float *)(iVar11 + 0x13e0 + iVar14 * 4);
      do {
        fVar22 = fVar22 + fVar23 * fVar21;
        fVar23 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    fVar21 = fVar22 * 2.0 - fVar22 * fVar22;
    fVar23 = (fVar21 * 2.0 - fVar21 * fVar21) * 599.0;
    iVar18 = (int)fVar23;
    fVar21 = *(float *)(iVar11 + 0x142c + iVar18 * 4);
    fVar21 = (*(float *)(iVar11 + 0x1430 + iVar18 * 4) - fVar21) * (fVar23 - (float)iVar18) + fVar21
    ;
    fVar23 = fVar21;
    if (ABS(fVar21) < ABS(*(float *)(iVar11 + 0x4c))) {
      fVar23 = *(float *)(iVar11 + 0x4c);
    }
    *(float *)(iVar11 + 0x4c) = fVar23;
    fVar23 = *(float *)(iVar11 + 0x50);
    fVar22 = *(float *)(iVar11 + 0x13fc);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x50) = fVar23;
    fVar22 = fVar22 * fVar21 * *(float *)(iVar11 + 0x54);
    fVar23 = *(float *)(iVar11 + 0x5c);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x5c) = fVar23;
    *param_8 = fVar22;
    fVar23 = *(float *)(iVar11 + 0x60);
    param_8 = param_8 + 1;
    fVar22 = *(float *)(iVar11 + 0x1400);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x60) = fVar23;
    fVar22 = fVar22 * fVar21 * *(float *)(iVar11 + 100);
    fVar23 = *(float *)(iVar11 + 0x6c);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x6c) = fVar23;
    *param_9 = fVar22;
    fVar23 = *(float *)(iVar11 + 0x70);
    param_9 = param_9 + 1;
    fVar22 = *(float *)(iVar11 + 0x1404);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x70) = fVar23;
    fVar22 = fVar22 * fVar21 * *(float *)(iVar11 + 0x74);
    fVar23 = *(float *)(iVar11 + 0x7c);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x7c) = fVar23;
    *param_10 = fVar22;
    fVar23 = *(float *)(iVar11 + 0x80);
    param_10 = param_10 + 1;
    fVar22 = *(float *)(iVar11 + 0x1408);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x80) = fVar23;
    fVar22 = fVar22 * fVar21 * *(float *)(iVar11 + 0x84);
    fVar23 = *(float *)(iVar11 + 0x8c);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x8c) = fVar23;
    *param_11 = fVar22;
    fVar23 = *(float *)(iVar11 + 0x90);
    param_11 = param_11 + 1;
    fVar22 = *(float *)(iVar11 + 0x140c);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x90) = fVar23;
    fVar22 = fVar22 * fVar21 * *(float *)(iVar11 + 0x94);
    fVar23 = *(float *)(iVar11 + 0x9c);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0x9c) = fVar23;
    *param_12 = fVar22;
    fVar23 = *(float *)(iVar11 + 0xa0);
    param_12 = param_12 + 1;
    fVar22 = *(float *)(iVar11 + 0x1410);
    if (ABS(fVar23) < ABS(fVar22)) {
      fVar23 = fVar22;
    }
    *(float *)(iVar11 + 0xa0) = fVar23;
    fVar23 = fVar22 * fVar21 * *(float *)(iVar11 + 0xa4);
    fVar21 = *(float *)(iVar11 + 0xac);
    if (ABS(fVar21) < ABS(fVar23)) {
      fVar21 = fVar23;
    }
    *(float *)(iVar11 + 0xac) = fVar21;
    *param_13 = fVar23;
    param_13 = param_13 + 1;
    iVar18 = (int)param_1;
    iVar14 = iVar12;
  }
  *pfVar2 = (float)iVar19;
  *pfVar3 = (float)iVar14;
  *pfVar1 = (float)iVar18;
  return;
}

// 01435E70  FUN_01435e70  size=169  [run]
void FUN_01435e70(int param_1,undefined4 *param_2)

{
  *param_2 = 6;
  param_2[1] = *(undefined4 *)(param_1 + 0x4c);
  param_2[2] = *(float *)(param_1 + 0x50) * 3.9810717;
  param_2[3] = *(float *)(param_1 + 0x70) * 3.9810717;
  param_2[4] = *(float *)(param_1 + 0x60) * 3.9810717;
  param_2[5] = *(float *)(param_1 + 0x80) * 3.9810717;
  param_2[6] = *(float *)(param_1 + 0x90) * 3.9810717;
  param_2[7] = *(float *)(param_1 + 0xa0) * 3.9810717;
  param_2[8] = *(undefined4 *)(param_1 + 0x5c);
  param_2[9] = *(undefined4 *)(param_1 + 0x7c);
  param_2[10] = *(undefined4 *)(param_1 + 0x6c);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x8c);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x9c);
  param_2[0xd] = *(undefined4 *)(param_1 + 0xac);
  return;
}

// 01435F20  FUN_01435f20  size=44  [run]
undefined4 __fastcall FUN_01435f20(undefined4 param_1)

{
  FUN_01424b10();
  FUN_01436cc0(0x3a5ed289,0x39aa64c3);
  return param_1;
}

// 01435F50  FUN_01435f50  size=19  [run]
void FUN_01435f50(void)

{
  FUN_01436ce0();
  FUN_01424b20();
  return;
}

// 01435F80  FUN_01435f80  size=87  [run]
undefined4 __thiscall FUN_01435f80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1[1] = 6;
  *param_1 = param_3;
  iVar1 = FUN_014206d0(0x27c0);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(undefined4 *)(iVar1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1[2] + 0x20) = 0x44860000;
  return 1;
}

// 01435FF0  FUN_01435ff0  size=80  [run]
void __fastcall FUN_01435ff0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 0xa4) = (float)fVar2;
  *(float *)(iVar1 + 0x94) = (float)fVar2;
  *(float *)(iVar1 + 0x84) = (float)fVar2;
  *(float *)(iVar1 + 0x74) = (float)fVar2;
  *(float *)(iVar1 + 100) = (float)fVar2;
  *(float *)(iVar1 + 0x54) = (float)fVar2;
  return;
}

// 01436040  FUN_01436040  size=88  [run]
void __fastcall FUN_01436040(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 0xa4) = (float)fVar2;
  *(float *)(iVar1 + 0x94) = (float)fVar2;
  *(float *)(iVar1 + 0x84) = (float)fVar2;
  *(float *)(iVar1 + 0x74) = (float)fVar2;
  *(float *)(iVar1 + 100) = (float)fVar2;
  *(float *)(iVar1 + 0x54) = (float)fVar2;
  return;
}

// 014360B0  FUN_014360b0  size=45  [run]
void __thiscall FUN_014360b0(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_01436d30(*(int *)(param_1 + 8) + 0x142c,600,param_3,param_2);
  return;
}

// 014360E0  FUN_014360e0  size=130  [run]
void __thiscall FUN_014360e0(undefined4 *param_1,double param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  
  dVar1 = param_2;
  dVar2 = param_2;
  switch(param_3) {
  case 0:
    dVar1 = 3.0;
    dVar2 = 0.0;
    break;
  case 1:
    dVar1 = 4.0;
    dVar2 = 0.0;
    break;
  case 2:
    dVar1 = 5.0;
    dVar2 = 0.0;
    break;
  case 3:
    dVar1 = 6.0;
    dVar2 = 0.0;
    break;
  case 4:
    dVar1 = 10.0;
    dVar2 = 0.0;
    break;
  case 5:
    dVar1 = 15.0;
    dVar2 = 0.0;
  }
  if (dVar1 < param_2) {
    param_2 = dVar1;
  }
  fVar3 = (float10)FUN_014259d0(*param_1,param_2 + dVar2);
  *(float *)(param_1[2] + 0x30) = (float)fVar3;
  return;
}

// 01436180  FUN_01436180  size=262  [run]
void __thiscall FUN_01436180(undefined4 *param_1,undefined4 param_2,double param_3)

{
  double dVar1;
  float10 fVar2;
  double local_14;
  double local_c;
  
  dVar1 = param_3;
  switch(param_2) {
  case 0:
    local_14 = 800.0;
    local_c = 3.0;
    dVar1 = 50.0;
    break;
  case 1:
    local_14 = 600.0;
    local_c = 4.0;
    dVar1 = 40.0;
    break;
  case 2:
    local_14 = 400.0;
    local_c = 5.0;
    dVar1 = 30.0;
    break;
  case 3:
    local_14 = 200.0;
    local_c = 6.0;
    dVar1 = 20.0;
    break;
  case 4:
    local_14 = 100.0;
    local_c = 10.0;
    dVar1 = 10.0;
    break;
  case 5:
    local_14 = 50.0;
    local_c = 15.0;
    dVar1 = 5.0;
  }
  fVar2 = (float10)FUN_014259d0(*param_1,dVar1);
  *(float *)(param_1[2] + 0x3c) = (float)fVar2;
  param_3 = param_3 - local_c;
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  fVar2 = (float10)FUN_014259d0(*param_1,param_3 + local_14);
  *(float *)(param_1[2] + 0x38) = (float)fVar2;
  return;
}

// 014362A0  FUN_014362a0  size=66  [run]
void __fastcall FUN_014362a0(int *param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436cf0(dVar1);
  fVar3 = (float10)FUN_014323a0((double)iVar2);
  *(float *)(param_1[2] + 0x34) = (float)fVar3;
  return;
}

// 014362F0  FUN_014362f0  size=56  [run]
void __fastcall FUN_014362f0(int *param_1)

{
  double dVar1;
  int iVar2;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436e80(dVar1);
  *(float *)(param_1[2] + 0x2c) = (float)(iVar2 + 1);
  return;
}

// 01436330  FUN_01436330  size=204  [run]
void __fastcall FUN_01436330(int *param_1)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  *(undefined4 *)(param_1[2] + 0x1c) = 0x441ac000;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436e80(dVar1);
  *(float *)(param_1[2] + 0x18) = (float)iVar2;
  *(undefined4 *)(param_1[2] + 0x40) = 0x4498e000;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436d10(dVar1);
  *(float *)(param_1[2] + 0x44) = (float)iVar2;
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  iVar2 = FUN_01436d10(dVar1);
  fVar4 = (float)iVar2;
  if (0 < iVar2) {
    pfVar3 = (float *)(param_1[2] + 0x131c);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = 1.0 / fVar4;
      pfVar3 = pfVar3 + 1;
    }
  }
  return;
}

// 01436400  FUN_01436400  size=38  [run]
void __fastcall FUN_01436400(int *param_1)

{
  double dVar1;
  
  dVar1 = (double)*param_1;
  if (*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_01436e80(dVar1);
  return;
}

// 01436430  FUN_01436430  size=171  [run]
void __thiscall FUN_01436430(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = 6;
  param_2[1] = *(undefined4 *)(iVar1 + 0x4c);
  param_2[2] = *(float *)(iVar1 + 0x50) * 3.9810717;
  param_2[3] = *(float *)(iVar1 + 0x70) * 3.9810717;
  param_2[4] = *(float *)(iVar1 + 0x60) * 3.9810717;
  param_2[5] = *(float *)(iVar1 + 0x80) * 3.9810717;
  param_2[6] = *(float *)(iVar1 + 0x90) * 3.9810717;
  param_2[7] = *(float *)(iVar1 + 0xa0) * 3.9810717;
  param_2[8] = *(undefined4 *)(iVar1 + 0x5c);
  param_2[9] = *(undefined4 *)(iVar1 + 0x7c);
  param_2[10] = *(undefined4 *)(iVar1 + 0x6c);
  param_2[0xb] = *(undefined4 *)(iVar1 + 0x8c);
  param_2[0xc] = *(undefined4 *)(iVar1 + 0x9c);
  param_2[0xd] = *(undefined4 *)(iVar1 + 0xac);
  return;
}

// 014364E0  FUN_014364e0  size=9  [run]
void __fastcall FUN_014364e0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 014364F0  FUN_014364f0  size=1  [run]
void FUN_014364f0(void)

{
  return;
}

// 01436500  FUN_01436500  size=6  [run]
undefined4 FUN_01436500(void)

{
  return 0x27c0;
}

// 01436510  FUN_01436510  size=155  [run]
undefined4 __thiscall FUN_01436510(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 4))(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_01424b10();
    FUN_01436cc0(0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 6;
    *puVar1 = param_4;
    iVar2 = FUN_014206d0(0x27c0);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = 0x3f800000;
      *(undefined4 *)(puVar1[2] + 0x20) = 0x44860000;
      return 1;
    }
  }
  return 0x34;
}

// 014365B0  FUN_014365b0  size=392  [run]
void __thiscall
FUN_014365b0(int *param_1,undefined4 param_2,undefined4 param_3,double param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  double local_c;
  
  local_c = param_4 - 12.0;
  if (local_c < -36.0) {
    local_c = -36.0;
  }
  iVar4 = *param_1;
  fVar5 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(iVar4 + 8);
  *(float *)(iVar1 + 0xa4) = (float)fVar5;
  *(float *)(iVar1 + 0x94) = (float)fVar5;
  *(float *)(iVar1 + 0x84) = (float)fVar5;
  *(float *)(iVar1 + 0x74) = (float)fVar5;
  *(float *)(iVar1 + 100) = (float)fVar5;
  *(float *)(iVar1 + 0x54) = (float)fVar5;
  fVar5 = (float10)FUN_00fdc1f0();
  iVar4 = *(int *)(iVar4 + 8);
  *(float *)(iVar4 + 0xa4) = (float)fVar5;
  *(float *)(iVar4 + 0x94) = (float)fVar5;
  *(float *)(iVar4 + 0x84) = (float)fVar5;
  *(float *)(iVar4 + 0x74) = (float)fVar5;
  *(float *)(iVar4 + 100) = (float)fVar5;
  *(float *)(iVar4 + 0x54) = (float)fVar5;
  FUN_01436d30(iVar4 + 0x142c,600,SUB84(local_c,0),(int)((ulonglong)local_c >> 0x20),(int)param_5,
               (int)((ulonglong)param_5 >> 0x20));
  piVar2 = (int *)*param_1;
  dVar3 = (double)*piVar2;
  if (*piVar2 < 0) {
    dVar3 = dVar3 + 4294967296.0;
  }
  iVar4 = FUN_01436cf0(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
  fVar5 = (float10)FUN_014323a0((double)iVar4);
  *(float *)(piVar2[2] + 0x34) = (float)fVar5;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  FUN_014360e0((int)param_6,uVar6,param_7);
  FUN_01436180(param_7,(int)param_6,uVar6);
  param_1 = (int *)*param_1;
  dVar3 = (double)*param_1;
  if (*param_1 < 0) {
    dVar3 = dVar3 + 4294967296.0;
  }
  iVar4 = FUN_01436e80(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
  *(float *)(param_1[2] + 0x2c) = (float)(iVar4 + 1);
  FUN_01436330();
  return;
}

// 01436740  FUN_01436740  size=40  [run]
void __fastcall FUN_01436740(undefined4 *param_1)

{
  double dVar1;
  
  dVar1 = (double)*(int *)*param_1;
  if (*(int *)*param_1 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  FUN_01436e80(dVar1);
  return;
}

// 01436770  FUN_01436770  size=173  [run]
void __thiscall FUN_01436770(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 8);
  *param_2 = 6;
  param_2[1] = *(undefined4 *)(iVar1 + 0x4c);
  param_2[2] = *(float *)(iVar1 + 0x50) * 3.9810717;
  param_2[3] = *(float *)(iVar1 + 0x70) * 3.9810717;
  param_2[4] = *(float *)(iVar1 + 0x60) * 3.9810717;
  param_2[5] = *(float *)(iVar1 + 0x80) * 3.9810717;
  param_2[6] = *(float *)(iVar1 + 0x90) * 3.9810717;
  param_2[7] = *(float *)(iVar1 + 0xa0) * 3.9810717;
  param_2[8] = *(undefined4 *)(iVar1 + 0x5c);
  param_2[9] = *(undefined4 *)(iVar1 + 0x7c);
  param_2[10] = *(undefined4 *)(iVar1 + 0x6c);
  param_2[0xb] = *(undefined4 *)(iVar1 + 0x8c);
  param_2[0xc] = *(undefined4 *)(iVar1 + 0x9c);
  param_2[0xd] = *(undefined4 *)(iVar1 + 0xac);
  return;
}

// 01436820  FUN_01436820  size=108  [run]
void FUN_01436820(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_3;
  uVar3 = (uint)*(ushort *)(param_3 + 3);
  iVar2 = *param_2;
  uVar4 = (uint)*(ushort *)(param_2 + 3);
  FUN_01435250(param_1,iVar2,iVar2 + uVar4 * 8,iVar2 + uVar4 * 4,iVar2 + uVar4 * 0xc,
               uVar4 * 0x10 + iVar2,iVar2 + uVar4 * 0x14,iVar1,iVar1 + uVar3 * 8,iVar1 + uVar3 * 4,
               iVar1 + uVar3 * 0xc,uVar3 * 0x10 + iVar1,iVar1 + uVar3 * 0x14,
               *(undefined2 *)((int)param_2 + 0xe));
  return;
}

// 01436890  FUN_01436890  size=51  [run]
void __thiscall FUN_01436890(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_01436ce0();
    FUN_01424b20();
    (**(code **)(*param_2 + 8))(iVar1);
  }
  *param_1 = 0;
  return;
}

// 014368D0  FUN_014368d0  size=17  [run]
void FUN_014368d0(undefined4 param_1)

{
  FUN_014206d0(param_1);
  return;
}

// 014368F0  FUN_014368f0  size=43  [run]
undefined4 __thiscall FUN_014368f0(undefined4 param_1,byte param_2)

{
  FUN_01436ce0();
  FUN_01424b20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01436920  FUN_01436920  size=40  [run]
void FUN_01436920(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01436ce0();
    FUN_01424b20();
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01436970  FUN_01436970  size=34  [run]
undefined4 * __thiscall FUN_01436970(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_018235a4;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 014369A0  FUN_014369a0  size=19  [run]
void __fastcall FUN_014369a0(int param_1)

{
  FUN_01434f20(param_1 + 0x48);
  return;
}

// 014369C0  FUN_014369c0  size=34  [run]
void __fastcall FUN_014369c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_34 [10];
  
  puVar2 = (undefined4 *)(param_1 + 0x48);
  puVar3 = auStack_34;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_01434020();
  return;
}

// 014369F0  FUN_014369f0  size=34  [run]
void __fastcall FUN_014369f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_34 [10];
  
  puVar2 = (undefined4 *)(param_1 + 0x48);
  puVar3 = auStack_34;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_014365b0();
  return;
}

// 01436A40  FUN_01436a40  size=40  [run]
void __fastcall FUN_01436a40(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_01436770();
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_014341b0();
    return;
  }
  FUN_014350a0();
  return;
}

// 01436A70  FUN_01436a70  size=86  [run]
undefined4 * __fastcall FUN_01436a70(undefined4 *param_1)

{
  param_1[1] = 0xac44;
  *param_1 = &PTR_FUN_018235b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  *param_1 = &PTR_FUN_018235d0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x4024000000000000;
  return param_1;
}

// 01436AD0  FUN_01436ad0  size=41  [run]
void __fastcall FUN_01436ad0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_018235b0;
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  *param_1 = &PTR_FUN_018235a4;
  return;
}

// 01436B00  FUN_01436b00  size=55  [run]
undefined4 * __fastcall FUN_01436b00(undefined4 *param_1)

{
  param_1[1] = 0xac44;
  *param_1 = &PTR_FUN_018235b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_014205e0();
  FUN_014205e0();
  FUN_014205e0();
  return param_1;
}

// 01436B40  FUN_01436b40  size=41  [run]
void __fastcall FUN_01436b40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_018235b0;
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  *param_1 = &PTR_FUN_018235a4;
  return;
}

// 01436B70  FUN_01436b70  size=102  [run]
void FUN_01436b70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 3) {
    iVar2 = param_1;
    uVar1 = FUN_01420690(0);
    FUN_01434200(uVar1,param_1,iVar2);
  }
  else {
    if (iVar2 == 4) {
      iVar2 = param_1;
      uVar1 = FUN_01420690(0);
      FUN_014350e0(uVar1,param_1,iVar2);
      return;
    }
    if (iVar2 == 0x3f) {
      iVar2 = param_1;
      uVar1 = FUN_01420690(0);
      FUN_01436820(uVar1,param_1,iVar2);
      return;
    }
  }
  return;
}

// 01436C00  FUN_01436c00  size=54  [run]
void __fastcall FUN_01436c00(int *param_1)

{
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x14))(param_1[2]);
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1[3]);
  }
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x1c))(param_1[4]);
  }
  return;
}

// 01436C40  FUN_01436c40  size=64  [run]
undefined4 * __thiscall FUN_01436c40(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_018235b0;
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  *param_1 = &PTR_FUN_018235a4;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01436C80  FUN_01436c80  size=64  [run]
undefined4 * __thiscall FUN_01436c80(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_018235b0;
  FUN_014205f0();
  FUN_014205f0();
  FUN_014205f0();
  *param_1 = &PTR_FUN_018235a4;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01436CC0  FUN_01436cc0  size=28  [run]
void __thiscall FUN_01436cc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01436CE0  FUN_01436ce0  size=1  [run]
void FUN_01436ce0(void)

{
  return;
}

// 01436CF0  FUN_01436cf0  size=17  [run]
void FUN_01436cf0(void)

{
  FUN_00fdbc60();
  return;
}

// 01436D10  FUN_01436d10  size=18  [run]
void FUN_01436d10(void)

{
  FUN_00fdbc60();
  return;
}

// 01436D30  FUN_01436d30  size=335  [run]
void FUN_01436d30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = param_2;
  iVar1 = param_2 + -1;
  FUN_00fdc1f0();
  fVar3 = (float10)FUN_00fdc1f0();
  fVar4 = (float10)FUN_00fdc1f0();
  param_2 = 0;
  if (0 < iVar2) {
    do {
      fVar6 = (float10)(double)fVar3;
      if (0.0 < (double)param_2 * (1.0 / (double)iVar1)) {
        FUN_00fdc1f0();
        FUN_00fdc1f0();
        fVar5 = (float10)FUN_00fdc1f0();
        fVar6 = (float10)FUN_00fdc1f0();
        fVar6 = fVar6 + (float10)(double)fVar4;
        if ((float10)(double)fVar5 < fVar6) {
          fVar6 = (float10)(double)fVar5;
        }
      }
      fVar5 = (float10)(double)fVar3;
      if (fVar6 < (float10)1) {
        fVar6 = (float10)1;
      }
      if (fVar5 < fVar6) {
        fVar6 = fVar5;
      }
      *(float *)(param_1 + param_2 * 4) = (float)fVar6;
      param_2 = param_2 + 1;
    } while (param_2 < iVar2);
  }
  return;
}

// 01436E80  FUN_01436e80  size=39  [run]
int FUN_01436e80(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00fdbc60();
  iVar2 = FUN_00fdbc60();
  return iVar2 + iVar1;
}

