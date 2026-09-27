// src/unsorted/unit_00FA8DF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA8DF0..00FA99F0, 18 functions

#include "mgrr.h"

// 00FA8DF0  FUN_00fa8df0  size=141  [run]
undefined4 __thiscall FUN_00fa8df0(int *param_1,int param_2,int param_3)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (int)((param_3 + 0x1f >> 0x1f & 0x1fU) + param_3 + 0x1f) >> 5;
  _Size = (iVar1 + param_3 * 2) * 4;
  _Dst = (void *)FUN_00dd29b0(_Size,0x20,0,0);
  *param_1 = (int)_Dst;
  if (_Dst == (void *)0x0) {
    return 0;
  }
  _memset(_Dst,0,_Size);
  iVar1 = *param_1 + iVar1 * 4;
  param_1[0xe] = *param_1;
  param_1[0xc] = iVar1;
  param_1[0xb] = param_3;
  param_1[0xd] = iVar1 + param_3 * 8;
  param_1[10] = 0;
  param_1[0xf] = param_2;
  return 1;
}

// 00FA8E80  FUN_00fa8e80  size=263  [run]
undefined4 * __fastcall FUN_00fa8e80(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) &&
     (uVar4 = 0, 0 < *(int *)(param_1 + 0x2c))) {
    do {
      uVar2 = uVar4 & 0x8000001f;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xffffffe0) == 0xffffffff;
      }
      if ((bVar5) &&
         (*(int *)(*(int *)(param_1 + 0x38) + ((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4
                  ) == -1)) {
        uVar4 = uVar4 + 0x1f;
      }
      else if ((*(uint *)(*(int *)(param_1 + 0x38) + (uVar4 >> 5) * 4) &
               0x80000000U >> ((byte)uVar4 & 0x1f)) == 0) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x38) + (uVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar4 & 0x1f);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x30) + uVar4 * 8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          return puVar3;
        }
        LeaveCriticalSection(lpCriticalSection);
        return puVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x2c));
  }
  FUN_00dd5650(&DAT_016ebe34);
  puVar3 = (undefined4 *)FUN_00dd3540(8,*(undefined4 *)(param_1 + 0x3c));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return puVar3;
}

// 00FA8FA0  FUN_00fa8fa0  size=146  [run]
void __thiscall FUN_00fa8fa0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  if ((param_2 < *(uint *)(param_1 + 0x30)) || (*(uint *)(param_1 + 0x34) <= param_2)) {
    if (param_2 != 0) {
      if (*(int *)(param_2 + 4) != 0) {
        FUN_00fa8fa0(*(int *)(param_2 + 4));
      }
      FUN_00dd4920(param_2);
    }
  }
  else {
    uVar2 = param_2 - *(uint *)(param_1 + 0x30);
    if (*(int *)(param_2 + 4) != 0) {
      FUN_00fa8fa0(*(int *)(param_2 + 4));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0x38) + (uVar2 >> 8) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)(uVar2 >> 3) & 0x1f));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00FA9040  FUN_00fa9040  size=147  [run]
undefined4 __thiscall FUN_00fa9040(int *param_1,int param_2,int param_3)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (int)((param_3 + 0x1f >> 0x1f & 0x1fU) + param_3 + 0x1f) >> 5;
  _Size = (iVar1 + param_3 * 6) * 4;
  _Dst = (void *)FUN_00dd29b0(_Size,0x20,0,0);
  *param_1 = (int)_Dst;
  if (_Dst == (void *)0x0) {
    return 0;
  }
  _memset(_Dst,0,_Size);
  iVar1 = *param_1 + iVar1 * 4;
  param_1[0xb] = param_3;
  param_1[0xe] = *param_1;
  param_1[0xc] = iVar1;
  param_1[0xf] = param_2;
  param_1[0xd] = iVar1 + param_3 * 0x18;
  param_1[10] = 0;
  return 1;
}

// 00FA90E0  FUN_00fa90e0  size=288  [run]
undefined4 * __fastcall FUN_00fa90e0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) &&
     (uVar4 = 0, 0 < *(int *)(param_1 + 0x2c))) {
    do {
      uVar2 = uVar4 & 0x8000001f;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xffffffe0) == 0xffffffff;
      }
      if ((bVar5) &&
         (*(int *)(*(int *)(param_1 + 0x38) + ((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4
                  ) == -1)) {
        uVar4 = uVar4 + 0x1f;
      }
      else if ((*(uint *)(*(int *)(param_1 + 0x38) + (uVar4 >> 5) * 4) &
               0x80000000U >> ((byte)uVar4 & 0x1f)) == 0) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x38) + (uVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar4 & 0x1f);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x30) + uVar4 * 0x18);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0x80000000;
          puVar3[5] = 0;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          return puVar3;
        }
        LeaveCriticalSection(lpCriticalSection);
        return puVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x2c));
  }
  FUN_00dd5650(&DAT_016ebe50);
  puVar3 = (undefined4 *)FUN_00dd3540(0x18,*(undefined4 *)(param_1 + 0x3c));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0x80000000;
    puVar3[5] = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return puVar3;
}

// 00FA9220  FUN_00fa9220  size=114  [run]
void __fastcall FUN_00fa9220(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x18) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x1c;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00FA92C0  FUN_00fa92c0  size=141  [run]
undefined4 __thiscall FUN_00fa92c0(int *param_1,int param_2,int param_3)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (int)((param_3 + 0x1f >> 0x1f & 0x1fU) + param_3 + 0x1f) >> 5;
  _Size = (iVar1 + param_3 * 2) * 4;
  _Dst = (void *)FUN_00dd29b0(_Size,0x20,0,0);
  *param_1 = (int)_Dst;
  if (_Dst == (void *)0x0) {
    return 0;
  }
  _memset(_Dst,0,_Size);
  iVar1 = *param_1 + iVar1 * 4;
  param_1[0xe] = *param_1;
  param_1[0xc] = iVar1;
  param_1[0xb] = param_3;
  param_1[0xd] = iVar1 + param_3 * 8;
  param_1[10] = 0;
  param_1[0xf] = param_2;
  return 1;
}

// 00FA9350  FUN_00fa9350  size=251  [run]
int __fastcall FUN_00fa9350(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) &&
     (uVar4 = 0, 0 < *(int *)(param_1 + 0x2c))) {
    do {
      uVar2 = uVar4 & 0x8000001f;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xffffffe0) == 0xffffffff;
      }
      if ((bVar5) &&
         (*(int *)(*(int *)(param_1 + 0x38) + ((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4
                  ) == -1)) {
        uVar4 = uVar4 + 0x1f;
      }
      else if ((*(uint *)(*(int *)(param_1 + 0x38) + (uVar4 >> 5) * 4) &
               0x80000000U >> ((byte)uVar4 & 0x1f)) == 0) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x38) + (uVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar4 & 0x1f);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        iVar3 = *(int *)(param_1 + 0x30) + uVar4 * 8;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          return iVar3;
        }
        LeaveCriticalSection(lpCriticalSection);
        return iVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x2c));
  }
  FUN_00dd5650(&DAT_016ebe94);
  iVar3 = FUN_00dd3540(8,*(undefined4 *)(param_1 + 0x3c));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00FA9460  FUN_00fa9460  size=100  [run]
void __thiscall FUN_00fa9460(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  if ((param_2 < *(uint *)(param_1 + 0x30)) || (*(uint *)(param_1 + 0x34) <= param_2)) {
    FUN_00dd4920(param_2);
  }
  else {
    param_2 = param_2 - *(uint *)(param_1 + 0x30);
    puVar1 = (uint *)(*(int *)(param_1 + 0x38) + (param_2 >> 8) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)(param_2 >> 3) & 0x1f));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00FA9540  FUN_00fa9540  size=48  [run]
void __fastcall FUN_00fa9540(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00FA9580  FUN_00fa9580  size=20  [run]
void FUN_00fa9580(void)

{
  FUN_00dd7270();
  FUN_00dd7270();
  return;
}

// 00FA95E0  FUN_00fa95e0  size=121  [run]
undefined4 __thiscall FUN_00fa95e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x1c,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00fa9220();
  return 1;
}

// 00FA96A0  FUN_00fa96a0  size=65  [run]
void __fastcall FUN_00fa96a0(undefined4 *param_1)

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

// 00FA9740  FUN_00fa9740  size=219  [run]
void __fastcall FUN_00fa9740(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *local_8;
  int local_4;
  
  if (param_1[0x10] != 0) {
    local_8 = (uint *)(param_1 + 0x1a);
    local_4 = 0x409;
    do {
      if (*local_8 != 0) {
        uVar3 = *local_8;
        do {
          uVar2 = *(uint *)(uVar3 + 4);
          if (param_1[8] != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
          }
          if ((uVar3 < (uint)param_1[0xc]) || ((uint)param_1[0xd] <= uVar3)) {
            FUN_00dd4920(uVar3);
          }
          else {
            uVar3 = uVar3 - param_1[0xc];
            puVar1 = (uint *)(param_1[0xe] + (uVar3 >> 8) * 4);
            *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)(uVar3 >> 3) & 0x1f));
            param_1[10] = param_1[10] + -1;
          }
          if (param_1[8] != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
          }
          uVar3 = uVar2;
        } while (uVar2 != 0);
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (*param_1 != 0) {
      FUN_00dd48d0(*param_1,0);
    }
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xf] = 0;
    *param_1 = 0;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    FUN_00dd7270();
    FUN_00dd7270();
    return;
  }
  return;
}

// 00FA9820  FUN_00fa9820  size=152  [run]
undefined4 __thiscall FUN_00fa9820(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x60) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar4 = *(uint *)(param_2 + 0xc) % 0x409;
  piVar3 = (int *)FUN_00fa9350();
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_2;
    iVar1 = *(int *)(param_1 + 0x68 + uVar4 * 4);
    if (iVar1 == 0) {
      *(int **)(param_1 + 0x68 + uVar4 * 4) = piVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar1 + 4);
        iVar2 = *(int *)(iVar1 + 4);
      }
      *(int **)(iVar1 + 4) = piVar3;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00FA98C0  FUN_00fa98c0  size=163  [run]
void __thiscall FUN_00fa98c0(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x60) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar5 = *(uint *)(param_2 + 0xc) % 0x409;
  piVar4 = *(int **)(param_1 + 0x68 + uVar5 * 4);
  piVar3 = (int *)0x0;
  while( true ) {
    piVar2 = piVar4;
    if (piVar2 == (int *)0x0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00fa9922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    if (*piVar2 == param_2) break;
    piVar4 = (int *)piVar2[1];
    piVar3 = piVar2;
  }
  iVar1 = piVar2[1];
  FUN_00fa9460(piVar2);
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0x68 + uVar5 * 4) = iVar1;
  }
  else {
    piVar3[1] = iVar1;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fa9955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// 00FA9970  FUN_00fa9970  size=73  [run]
int * __thiscall FUN_00fa9970(int *param_1,byte param_2)

{
  if (*param_1 != 0) {
    FUN_00fa8fa0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00fa8fa0(param_1[1]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FA99F0  FUN_00fa99f0  size=85  [run]
void __fastcall FUN_00fa99f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x28);
    do {
      *piVar1 = (int)(piVar1 + -0x16);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x30) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

