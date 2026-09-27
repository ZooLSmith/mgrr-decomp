// src/unsorted/unit_00C94F90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C94F90..00C95EC0, 24 functions

#include "mgrr.h"

// 00C94F90  FUN_00c94f90  size=43  [run]
void __fastcall FUN_00c94f90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C94FC0  FUN_00c94fc0  size=60  [run]
void __thiscall FUN_00c94fc0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00C95020  FUN_00c95020  size=43  [run]
void __fastcall FUN_00c95020(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C95050  FUN_00c95050  size=79  [run]
void __thiscall FUN_00c95050(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 8;
  iVar2 = param_1[1] + iVar1;
  if (iVar2 != 0) {
    FUN_00a7c940(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00C950A0  FUN_00c950a0  size=267  [run]
undefined4 __thiscall
FUN_00c950a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [28];
  undefined4 uStack_4;
  
  pcVar2 = param_5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(param_5 + 1);
  if (uVar3 < 0x18) {
    _strcpy_s((char *)&local_38,0x20,param_5);
  }
  else {
    local_38 = *(undefined4 *)(param_5 + (uVar3 - 0x17));
    local_34 = *(undefined4 *)(param_5 + (uVar3 - 0x13));
    local_30 = *(undefined4 *)(param_5 + (uVar3 - 0xf));
    local_2c = *(undefined4 *)(param_5 + (uVar3 - 0xb));
    local_28 = *(undefined4 *)(param_5 + (uVar3 - 7));
    local_24 = *(undefined4 *)(param_5 + (uVar3 - 3));
  }
  _sprintf_s(local_20,0x20,"%s(%d)",&local_38,param_6);
  pcVar2 = _strrchr(local_20,0x5c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = local_20;
  }
  else {
    pcVar2 = pcVar2 + 1;
  }
  uVar4 = FUN_00a701f0(&LAB_00c90480,0,param_4,pcVar2);
  iVar5 = FUN_00a6e850(uVar4);
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar4;
  }
  FUN_00a6e740(uVar4,&LAB_00c83d30);
  *(undefined4 *)(iVar5 + 0x24) = 0xfffe;
  *(undefined4 *)(iVar5 + 0x28) = param_1;
  *(undefined4 *)(iVar5 + 0x2c) = uStack_4;
  *(undefined4 *)(iVar5 + 0x30) = unaff_retaddr;
  return uVar4;
}

// 00C95250  FUN_00c95250  size=51  [run]
void __fastcall FUN_00c95250(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C95290  FUN_00c95290  size=311  [run]
undefined4 __thiscall FUN_00c95290(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  undefined4 uVar5;
  void *local_4;
  
  uVar5 = 0;
  if ((param_2 == (char *)0x0) || (*(int *)(param_1 + 0x14) == 1)) {
    return 0;
  }
  uVar3 = FUN_00e03ea0(param_2);
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar4 = FUN_00c84190(uVar3);
    if (iVar4 == -1) {
      _Dst = (void *)FUN_00dd3540(0x3c,*(undefined4 *)(param_1 + 0x38));
      local_4 = _Dst;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,0x3c);
        iVar4 = 0;
        if ((param_3 == 1) &&
           ((iVar4 = FUN_00dd3540(8,*(undefined4 *)(param_1 + 0x38)), iVar4 == 0 ||
            (iVar4 = FUN_00de3530(), iVar4 == 0)))) {
          FUN_00dd4920(_Dst);
          return 0;
        }
        _strcpy_s((char *)((int)_Dst + 4),0x20,param_2);
        *(undefined4 *)((int)_Dst + 0x24) = uVar3;
        *(undefined4 *)((int)_Dst + 0x28) = 1;
        *(undefined4 *)((int)_Dst + 0x2c) = 0;
        *(int *)((int)_Dst + 0x34) = iVar4;
        FUN_00c94fc0(&param_2,&local_4);
        uVar5 = 1;
      }
    }
    else {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar4 * 4);
      uVar5 = 1;
      piVar1 = puVar2 + 0xe;
      *piVar1 = *piVar1 + 1;
      FUN_00e9d710(*puVar2);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return uVar5;
}

// 00C953D0  FUN_00c953d0  size=71  [run]
int __thiscall FUN_00c953d0(int param_1,byte param_2)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C95470  FUN_00c95470  size=109  [run]
undefined4 __thiscall FUN_00c95470(int param_1,char *param_2)

{
  undefined4 uVar1;
  errno_t eVar2;
  char local_20 [32];
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (param_2 != (char *)0x0)) {
    local_20[0] = '\0';
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = '\0';
    eVar2 = _strcat_s(local_20,0x20,param_2);
    if (eVar2 != 0) {
      return 0;
    }
    uVar1 = FUN_00c77a60(param_2);
    uVar1 = FUN_00c95290(param_2,uVar1);
  }
  return uVar1;
}

// 00C954E0  FUN_00c954e0  size=82  [run]
void __thiscall FUN_00c954e0(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *param_1 = param_2;
  if (param_1[0x92] == 0) {
    param_1[0x92] = param_1 + 1;
    param_1[0x93] = 0x10;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
  }
  return;
}

// 00C95590  FUN_00c95590  size=95  [run]
int __thiscall FUN_00c95590(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x250)) {
      iVar3 = 0;
      do {
        if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
          puVar5 = (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 0x24);
          if (puVar5 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)(*(int *)(param_1 + 0x248) + iVar3);
            for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x24;
      } while (iVar1 < *(int *)(param_1 + 0x250));
    }
    iVar1 = 1;
  }
  return iVar1;
}

// 00C955F0  FUN_00c955f0  size=157  [run]
bool FUN_00c955f0(int param_1)

{
  int iVar1;
  
  if (DAT_01dbd1c0 != 0) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  DAT_01dbd1c4 = param_1;
  DAT_01dbd1c0 = FUN_00dd3500(1,param_1);
  if (DAT_01dbd1c0 != 0) {
    iVar1 = FUN_00dd3500(600,DAT_01dbd1c4);
    if (iVar1 == 0) {
      DAT_01dbd1c8 = 0;
    }
    else {
      DAT_01dbd1c8 = FUN_00c954e0(DAT_01dbd1c4);
      if (DAT_01dbd1c8 != 0) goto LAB_00c95683;
    }
    if (DAT_01dbd1c0 == 0) {
LAB_00c95683:
      return DAT_01dbd1c0 != 0;
    }
    FUN_00dd4920(DAT_01dbd1c0);
  }
  DAT_01dbd1c0 = 0;
  return false;
}

// 00C95690  FUN_00c95690  size=124  [run]
void FUN_00c95690(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01dbd1c0 != 0) {
    *(undefined4 *)(DAT_01dbd1c8 + 0x250) = 0;
    iVar2 = DAT_01dbd1c8;
    DAT_01dbd1c4 = 0;
    if (DAT_01dbd1c8 != 0) {
      piVar1 = (int *)(DAT_01dbd1c8 + 0x248);
      if (*piVar1 != 0) {
        *(undefined4 *)(DAT_01dbd1c8 + 0x250) = 0;
        if (*(int *)(iVar2 + 0x254) != 0) {
          FUN_00dd48d0(*piVar1,0);
          *(undefined4 *)(iVar2 + 0x254) = 0;
        }
        *(undefined4 *)(iVar2 + 0x248) = 0;
        *(undefined4 *)(iVar2 + 0x24c) = 0;
      }
      FUN_00dd4920(iVar2);
      DAT_01dbd1c8 = 0;
    }
    if (DAT_01dbd1c0 != 0) {
      FUN_00dd4920(DAT_01dbd1c0);
      DAT_01dbd1c0 = 0;
    }
  }
  return;
}

// 00C95710  FUN_00c95710  size=85  [run]
undefined4 FUN_00c95710(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_01dbd1c0 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  piVar1 = (int *)(DAT_01dbd1c8 + 0x250);
  if (*(int *)(DAT_01dbd1c8 + 0x250) < *(int *)(DAT_01dbd1c8 + 0x24c)) {
    puVar3 = (undefined4 *)(*(int *)(DAT_01dbd1c8 + 0x248) + *(int *)(DAT_01dbd1c8 + 0x250) * 0x24);
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    *piVar1 = *piVar1 + 1;
  }
  return 1;
}

// 00C95790  FUN_00c95790  size=315  [run]
undefined4 FUN_00c95790(undefined2 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30 [12];
  
  local_48 = *param_1;
  local_46 = *(undefined1 *)(param_1 + 1);
  local_40 = local_30;
  local_44 = 0;
  local_3c = 0xc;
  local_38 = 0;
  local_34 = 0;
  local_45 = 0;
  iVar1 = __stricmp("Id:",(char *)&local_48);
  if (iVar1 == 0) {
    iVar1 = 3;
    do {
      if (*(char *)(iVar1 + (int)param_1) != ' ') {
        iVar1 = iVar1 + (int)param_1;
        goto LAB_00c957f4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    iVar1 = 0;
LAB_00c957f4:
    iVar2 = FUN_009fde60(iVar1);
    if (iVar2 == -1) {
      FUN_00dd5650(&DAT_016b0cbc,iVar1);
      if (local_40 == (undefined4 *)0x0) {
        return 0;
      }
      local_38 = 0;
      if (local_34 == 0) {
        return 0;
      }
      FUN_00dd48d0(local_40,0);
      return 0;
    }
    FUN_00a814d0(&local_44,iVar2);
  }
  else {
    uVar3 = FUN_00e03ea0(param_1);
    FUN_00a18df0(&local_44,uVar3);
  }
  if (local_38 == 1) {
    *param_2 = *local_40;
    local_38 = 0;
    if (local_34 != 0) {
      FUN_00dd48d0(local_40,0);
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016b0c94,param_1);
  if ((local_40 != (undefined4 *)0x0) && (local_38 = 0, local_34 != 0)) {
    FUN_00dd48d0(local_40,0);
    return 0;
  }
  return 0;
}

// 00C958D0  FUN_00c958d0  size=238  [run]
undefined4 FUN_00c958d0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  if (param_1 != 0) {
    local_50 = local_40;
    local_54 = 0;
    local_4c = 0x10;
    local_48 = 0;
    local_44 = 0;
    FUN_00a814d0(&local_54,param_2);
    iVar3 = FUN_00e03ea0(param_1);
    iVar5 = 0;
    if (0 < local_48) {
      do {
        iVar2 = *(int *)(local_50 + iVar5 * 4);
        if ((((iVar2 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
            (iVar3 == *(int *)(iVar4 + 0x4ec))) && (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8))
           ) {
          piVar1 = (int *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar2;
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_48);
    }
    if (*(int *)(param_3 + 0xc) != 0) {
      if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
        FUN_00dd48d0(local_50,0);
      }
      return 1;
    }
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
  }
  return 0;
}

// 00C959C0  FUN_00c959c0  size=213  [run]
int FUN_00c959c0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar2 = FUN_00c958d0(param_1,param_2,&local_54);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      iVar2 = 0;
      goto LAB_00c95a6f;
    }
    uVar3 = FUN_00e03ea0(param_1,param_2);
    FUN_00a18e90(&local_54,uVar3,param_2);
    if (local_48 == 0) {
      iVar2 = 0;
      goto LAB_00c95a6f;
    }
    iVar2 = 1;
  }
  else if (iVar2 != 1) goto LAB_00c95a6f;
  iVar4 = 0;
  if (0 < local_48) {
    do {
      if ((*(int *)(local_50 + iVar4 * 4) != 0) && (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8))
         ) {
        piVar1 = (int *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = *(int *)(local_50 + iVar4 * 4);
        }
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_48);
  }
LAB_00c95a6f:
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return iVar2;
}

// 00C95BE0  FUN_00c95be0  size=276  [run]
void __fastcall FUN_00c95be0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = DAT_018ab9a0;
  FUN_00c83a60(0x180,PTR_DAT_018ab998);
  FUN_00c83a60(0x80,PTR_DAT_018ab998);
  FUN_00c83a60(0x80,PTR_DAT_018ab998);
  FUN_00c84a70();
  if (*(int *)(param_1 + 0x694) != 0) {
    *(undefined4 *)(param_1 + 0x698) = 0;
  }
  if (DAT_01dbd1cc == (undefined4 *)0x0) {
    DAT_01dbd1cc = (undefined4 *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (DAT_01dbd1cc == (undefined4 *)0x0) {
      DAT_01dbd1cc = (undefined4 *)0x0;
    }
    else {
      *DAT_01dbd1cc = 0;
      DAT_01dbd1cc[1] = 0;
      DAT_01dbd1cc[2] = 0;
      DAT_01dbd1cc[3] = 0;
      DAT_01dbd1cc[4] = 0;
      FUN_00a6eda0(0x80,PTR_DAT_018ab998);
    }
  }
  iVar1 = FUN_00c90950(PTR_DAT_018ab998);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b0d08);
  }
  iVar1 = FUN_00c955f0(PTR_DAT_018ab998);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b0cdc);
  }
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x700) = 0;
  return;
}

// 00C95D00  FUN_00c95d00  size=63  [run]
int __thiscall FUN_00c95d00(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C95D40  FUN_00c95d40  size=63  [run]
void FUN_00c95d40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_00e03ea0(param_2);
    iVar1 = DAT_01dbd1d8;
    if (DAT_01dbd1d0 != 0) {
      *(undefined4 *)(DAT_01dbd1d8 + 0xc) = param_1;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
    }
  }
  FUN_00c90f80();
  FUN_00c90c40();
  return;
}

// 00C95D80  FUN_00c95d80  size=80  [run]
void __fastcall FUN_00c95d80(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((0 < *(int *)(param_1 + 0xc)) && (iVar2 = **(int **)(param_1 + 4), iVar2 != 0)) {
    if (((*(int *)(iVar2 + 0x2c) != 0) &&
        (((*(int **)(iVar2 + 0x30) != (int *)0x0 && (*(float *)(iVar2 + 0x10) == 0.0)) &&
         (iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 4), iVar1 != 0)))) &&
       ((*(int *)(iVar1 + 4) == 0xb &&
        (iVar2 = (**(code **)(**(int **)(iVar2 + 0x30) + 0x20))(), iVar2 == 99)))) {
      FUN_00c84b30();
    }
  }
  return;
}

// 00C95DD0  FUN_00c95dd0  size=27  [run]
void __fastcall FUN_00c95dd0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c90a60();
  FUN_00c84a70();
  return;
}

// 00C95DF0  FUN_00c95df0  size=194  [run]
undefined4 FUN_00c95df0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_254;
  undefined1 *local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  undefined1 local_240 [576];
  
  if ((DAT_01dbd1c0 != 0) && (0 < *(int *)(DAT_01dbd1c8 + 0x250))) {
    local_250 = local_240;
    local_254 = 0;
    local_24c = 0x10;
    local_244 = 0;
    local_248 = 0;
    iVar1 = FUN_00c95590(&local_254);
    if (iVar1 == 0) {
      if ((local_250 != (undefined1 *)0x0) && (local_244 != 0)) {
        FUN_00dd48d0(local_250,0);
      }
      return 0;
    }
    uVar2 = FUN_00c84690(&local_254);
    if (DAT_01dbd1c0 != 0) {
      *(undefined4 *)(DAT_01dbd1c8 + 0x250) = 0;
    }
    if ((local_250 != (undefined1 *)0x0) && (local_244 != 0)) {
      FUN_00dd48d0(local_250,0);
    }
    return uVar2;
  }
  return 1;
}

// 00C95EC0  FUN_00c95ec0  size=388  [run]
undefined4 __thiscall FUN_00c95ec0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != piVar4 + *(int *)(param_1 + 0x20)) {
    do {
      iVar3 = *piVar4;
      if ((((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x30), piVar1 != (int *)0x0)) &&
          (((iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 0xd ||
            (((iVar2 == 0xe || (iVar2 == 0xf)) || (iVar2 == 0x15)))) || (iVar2 == 0x16)))) &&
         (iVar3 = FUN_00c848c0(iVar3,param_2), iVar3 != 0)) {
        puVar5 = &DAT_01dbd210;
        (**(code **)*piVar1)(&DAT_01dbd210);
        iVar3 = FUN_00dd6d80(puVar5);
        if ((iVar3 != 0) && (iStack_8 = (**(code **)(*piVar1 + 0x24))(), iStack_8 != -1)) {
          if (*(int *)(param_3 + 8) <= *(int *)(param_3 + 0xc)) {
            return 0;
          }
          FUN_00969770(auStack_4,&iStack_8);
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4));
  }
  piVar4 = *(int **)(param_1 + 0x2c);
  if (piVar4 != piVar4 + *(int *)(param_1 + 0x34)) {
    do {
      iVar3 = *piVar4;
      if ((((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x30), piVar1 != (int *)0x0)) &&
          ((iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 0xd ||
           ((((iVar2 == 0xe || (iVar2 == 0xf)) || (iVar2 == 0x15)) || (iVar2 == 0x16)))))) &&
         (iVar3 = FUN_00c848c0(iVar3,param_2), iVar3 != 0)) {
        puVar5 = &DAT_01dbd210;
        (**(code **)*piVar1)(&DAT_01dbd210);
        iVar3 = FUN_00dd6d80(puVar5);
        if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar1 + 0x24))(), iVar3 != -1)) {
          if (*(int *)(param_3 + 8) <= *(int *)(param_3 + 0xc)) {
            return 0;
          }
          piVar1 = (int *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar3;
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4));
  }
  return 1;
}

